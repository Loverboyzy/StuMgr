#include "widget.h"
#include "ui_widget.h"

// ============================================================
//  构造 & 析构
// ============================================================

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowIcon(style()->standardIcon(QStyle::SP_DesktopIcon));

    InitDb();
}

Widget::~Widget()
{
    // 关闭数据库连接
    if (db.isOpen())
        db.close();

    // 释放裸指针（修复内存泄漏）
    delete query;
    delete model;
    delete ui;
}

// ============================================================
//  辅助函数
// ============================================================

QString Widget::hashPassword(const QString &pwd)
{
    return QString(
        QCryptographicHash::hash(
            pwd.toUtf8(),
            QCryptographicHash::Sha256
        ).toHex()
    );
}

bool Widget::validateStudentId(const QString &id, QString &errMsg)
{
    if (id.isEmpty()) {
        errMsg = "学号不能为空";
        return false;
    }
    QRegularExpression re("^\\d{4,20}$");
    if (!re.match(id).hasMatch()) {
        errMsg = "学号必须为 4-20 位纯数字";
        return false;
    }
    return true;
}

bool Widget::validateAge(const QString &age, QString &errMsg)
{
    if (age.isEmpty()) {
        errMsg = "年龄不能为空";
        return false;
    }
    QRegularExpression re("^\\d{1,3}$");
    if (!re.match(age).hasMatch()) {
        errMsg = "年龄必须为整数";
        return false;
    }
    int a = age.toInt();
    if (a < 0 || a > 120) {
        errMsg = "年龄范围应为 0-120";
        return false;
    }
    return true;
}

bool Widget::validateTel(const QString &tel, QString &errMsg)
{
    if (tel.isEmpty()) {
        errMsg = "电话不能为空";
        return false;
    }
    QRegularExpression re("^1[3-9]\\d{9}$");
    if (!re.match(tel).hasMatch()) {
        errMsg = "电话格式不正确（应为 11 位中国大陆手机号）";
        return false;
    }
    return true;
}

bool Widget::validateRequired(const QString &field, const QString &fieldName, QString &errMsg)
{
    if (field.trimmed().isEmpty()) {
        errMsg = fieldName + "不能为空";
        return false;
    }
    if (field.length() > 50) {
        errMsg = fieldName + "长度不能超过 50";
        return false;
    }
    return true;
}

bool Widget::execWithFeedback(const QString &successMsg)
{
    if (!query->exec()) {
        QMessageBox::critical(this, "操作失败",
            "数据库错误：" + query->lastError().text(),
            QMessageBox::Yes);
        return false;
    }
    QMessageBox::information(this, "成功", successMsg, QMessageBox::Yes);
    return true;
}

bool Widget::studentExists(const QString &id)
{
    query->prepare("SELECT COUNT(*) FROM Student WHERE id = :id");
    query->bindValue(":id", id);
    if (!query->exec() || !query->next())
        return false;
    return query->value(0).toInt() > 0;
}

// ============================================================
//  数据库初始化
// ============================================================

void Widget::InitDb()
{
    // 设置首页
    ui->stack->setCurrentIndex(0);

    // 使用 SQLite 驱动（无需额外安装，跨平台零配置）
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Students.db");

    query = new QSqlQuery(db);
    model = new QSqlQueryModel();

    if (!db.open()) {
        qDebug() << "数据库打开失败:" << db.lastError();
        QMessageBox::critical(this, "错误", "数据库连接失败！", QMessageBox::Yes);
        return;
    }

    // 启用外键约束
    query->exec("PRAGMA foreign_keys = ON");

    // ---- 1. 创建学生表（修复：id 设为主键，列类型优化） ----
    QString createSQL = R"(
        CREATE TABLE IF NOT EXISTS Student (
            id      TEXT    PRIMARY KEY  NOT NULL,
            name    TEXT    NOT NULL,
            age     INTEGER NULL,
            tel     TEXT    NULL,
            sex     TEXT    NULL,
            college TEXT    NULL,
            cls     TEXT    NULL,
            pwd     TEXT    NULL
        )
    )";
    query->prepare(createSQL);
    if (!query->exec())
        qDebug() << "创建 Student 表失败:" << query->lastError();

    // ---- 2. 创建管理员表 ----
    createSQL = R"(
        CREATE TABLE IF NOT EXISTS Admin (
            user TEXT PRIMARY KEY NOT NULL,
            pwd  TEXT NULL
        )
    )";
    query->prepare(createSQL);
    if (!query->exec())
        qDebug() << "创建 Admin 表失败:" << query->lastError();

    // ---- 3. 插入初始学生数据（仅在表为空时，密码为 SHA-256 哈希） ----
    query->prepare("SELECT COUNT(*) FROM Student");
    if (query->exec() && query->next() && query->value(0).toInt() == 0)
    {
        // 密码均为原始值 123456 的 SHA-256 哈希
        QString defaultPwd = hashPassword("123456");

        struct TestStudent { QString id; QString name; int age; QString tel;
                             QString sex; QString college; QString cls; };
        QList<TestStudent> students = {
            {"1002","张无忌",22,"13800001111","男","医学院","临床医学一班"},
            {"1003","赵敏",  21,"13900002222","女","文学院","汉语言文学二班"},
            {"1004","杨过",  23,"15000003333","男","理学院","物理学三班"},
            {"1005","小龙女",20,"15100004444","女","艺术学院","舞蹈表演一班"},
            {"1006","令狐冲",24,"15200005555","男","工学院","机械工程二班"},
            {"1007","任盈盈",22,"15300006666","女","商学院","市场营销三班"},
            {"1008","韦小宝",21,"15500007777","男","法学院","民商法二班"},
            {"1009","双儿",  20,"15600008888","女","外国语学院","英语一班"},
            {"1010","郭靖",  25,"15700009999","男","农学院","农学三班"},
            {"1011","黄蓉",  23,"15800000000","女","管理学院","工商管理二班"}
        };

        query->prepare("INSERT OR IGNORE INTO Student (id,name,age,tel,sex,college,cls,pwd) "
                       "VALUES (:id,:name,:age,:tel,:sex,:college,:cls,:pwd)");
        for (const auto &s : students) {
            query->bindValue(":id", s.id);
            query->bindValue(":name", s.name);
            query->bindValue(":age", s.age);
            query->bindValue(":tel", s.tel);
            query->bindValue(":sex", s.sex);
            query->bindValue(":college", s.college);
            query->bindValue(":cls", s.cls);
            query->bindValue(":pwd", defaultPwd);
            query->exec();
        }
    }

    // ---- 4. 插入默认管理员（仅在 admin 表为空时） ----
    query->prepare("SELECT COUNT(*) FROM Admin");
    if (query->exec() && query->next() && query->value(0).toInt() == 0)
    {
        query->prepare("INSERT OR IGNORE INTO Admin (user, pwd) VALUES (:user, :pwd)");
        query->bindValue(":user", "su");
        query->bindValue(":pwd", hashPassword("1")); // 管理员密码哈希存储
        query->exec();
    }
}

// ============================================================
//  数据加载与筛选
// ============================================================

void Widget::FetchData()
{
    model->setQuery("SELECT id, name, age, tel, sex, college, cls FROM Student");
    model->setHeaderData(0, Qt::Horizontal, tr("学号"));
    model->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    model->setHeaderData(2, Qt::Horizontal, tr("年龄"));
    model->setHeaderData(3, Qt::Horizontal, tr("电话"));
    model->setHeaderData(4, Qt::Horizontal, tr("性别"));
    model->setHeaderData(5, Qt::Horizontal, tr("学院"));
    model->setHeaderData(6, Qt::Horizontal, tr("班级"));

    ui->tableView->setModel(model);
}

void Widget::FilterById(const QString &id)
{
    if (id.isEmpty()) {
        FetchData();
        return;
    }

    QSqlQuery q(db);
    q.prepare("SELECT id, name, age, tel, sex, college, cls FROM Student WHERE id = :id");
    q.bindValue(":id", id);
    if (q.exec()) {
        model->setQuery(std::move(q));
    }
}

// ============================================================
//  页面跳转
// ============================================================

void Widget::on_btn_go_login_clicked()
{
    ui->stack->setCurrentIndex(0);
}

void Widget::on_btn_go_reg_clicked()
{
    ui->stack->setCurrentIndex(1);
}

// ============================================================
//  学生登录（修复 SQL 注入 + 密码哈希比对）
// ============================================================

void Widget::on_btn_login_clicked()
{
    QString user = ui->tb_user->toPlainText().trimmed();
    QString pwd  = ui->tb_pwd->text().trimmed();

    if (user.isEmpty() || pwd.isEmpty()) {
        QMessageBox::critical(this, "错误", "账户或密码不能为空", QMessageBox::Yes);
        return;
    }

    // 预编译语句防 SQL 注入；密码哈希比对
    query->prepare("SELECT pwd FROM Student WHERE id = :id");
    query->bindValue(":id", user);
    if (!query->exec()) {
        qDebug() << "登录查询错误:" << query->lastError();
        QMessageBox::critical(this, "错误", "系统错误", QMessageBox::Yes);
        return;
    }

    if (!query->next()) {
        QMessageBox::critical(this, "错误", "账户或密码错误", QMessageBox::Yes);
        return;
    }

    QString storedHash = query->value(0).toString();
    if (storedHash != hashPassword(pwd)) {
        QMessageBox::critical(this, "错误", "账户或密码错误", QMessageBox::Yes);
        return;
    }

    // 登录成功 — 进入学生页面
    ui->stack->setCurrentIndex(2);

    // 学生模式下隐藏增删改按钮
    ui->btn_add->setHidden(true);
    ui->btn_mod->setHidden(true);
    ui->btn_del->setHidden(true);
    ui->btn_query->setGeometry(700, 160, 71, 31);
    ui->tb_content->setGeometry(40, 160, 651, 31);

    FetchData();
}

// ============================================================
//  管理员登录（修复 SQL 注入 + 密码哈希比对）
// ============================================================

void Widget::on_btn_login_2_clicked()
{
    QString user = ui->tb_user->toPlainText().trimmed();
    QString pwd  = ui->tb_pwd->text().trimmed();

    if (user.isEmpty() || pwd.isEmpty()) {
        QMessageBox::critical(this, "错误", "账户或密码不能为空", QMessageBox::Yes);
        return;
    }

    query->prepare("SELECT pwd FROM Admin WHERE user = :user");
    query->bindValue(":user", user);
    if (!query->exec()) {
        qDebug() << "管理员登录查询错误:" << query->lastError();
        return;
    }

    if (!query->next()) {
        QMessageBox::critical(this, "错误", "账户或密码错误", QMessageBox::Yes);
        return;
    }

    QString storedHash = query->value(0).toString();
    if (storedHash != hashPassword(pwd)) {
        QMessageBox::critical(this, "错误", "账户或密码错误", QMessageBox::Yes);
        return;
    }

    // 管理员登录成功
    ui->stack->setCurrentIndex(2);

    // 显示增删改按钮（如果在登录页之前被隐藏了）
    ui->btn_add->setHidden(false);
    ui->btn_mod->setHidden(false);
    ui->btn_del->setHidden(false);

    FetchData();
}

// ============================================================
//  查询（改为 TableView 筛选，不再弹窗）
// ============================================================

void Widget::on_btn_query_clicked()
{
    QString id = ui->tb_content->toPlainText().trimmed();

    if (id.isEmpty()) {
        // 空输入 → 显示全部
        FetchData();
        return;
    }

    // 筛选显示
    FilterById(id);

    // 检查是否查到了数据
    int rowCount = model->rowCount();
    if (rowCount == 0) {
        QMessageBox::information(this, "提示", "未查询到学号为 " + id + " 的学生", QMessageBox::Yes);
        FetchData(); // 恢复显示全部
    }
}

// ============================================================
//  删除（预编译语句 + 操作反馈）
// ============================================================

void Widget::on_btn_del_clicked()
{
    QString id = ui->tb_content->toPlainText().trimmed();

    if (id.isEmpty()) {
        QMessageBox::critical(this, "错误", "学号不能为空", QMessageBox::Yes);
        return;
    }

    // 确认删除
    QMessageBox::StandardButton reply = QMessageBox::question(
        this, "确认删除",
        "确定要删除学号为 " + id + " 的学生吗？",
        QMessageBox::Yes | QMessageBox::No
    );
    if (reply != QMessageBox::Yes) return;

    query->prepare("DELETE FROM Student WHERE id = :id");
    query->bindValue(":id", id);

    if (!execWithFeedback("删除成功！")) return;

    FetchData();
}

// ============================================================
//  新增/修改页面跳转
// ============================================================

void Widget::on_btn_add_clicked()
{
    ui->stack->setCurrentIndex(3);
    op = true;
    ui->tb_id->setReadOnly(false);

    // 清空表单
    ui->tb_id->clear();
    ui->tb_name->clear();
    ui->tb_age->clear();
    ui->tb_tel->clear();
    ui->tb_sex->clear();
    ui->tb_college->clear();
    ui->tb_cls->clear();
}

void Widget::on_btn_mod_clicked()
{
    QString id = ui->tb_content->toPlainText().trimmed();

    if (id.isEmpty()) {
        QMessageBox::critical(this, "错误", "学号不能为空", QMessageBox::Yes);
        return;
    }

    query->prepare("SELECT id, name, age, tel, sex, college, cls FROM Student WHERE id = :id");
    query->bindValue(":id", id);
    if (!query->exec() || !query->next()) {
        QMessageBox::critical(this, "错误", "没有该学生信息", QMessageBox::Yes);
        return;
    }

    // 跳转到编辑页，填入已有数据
    ui->stack->setCurrentIndex(3);
    op = false;

    ui->tb_id->setText(query->value(0).toString());
    ui->tb_name->setText(query->value(1).toString());
    ui->tb_age->setText(query->value(2).toString());
    ui->tb_tel->setText(query->value(3).toString());
    ui->tb_sex->setText(query->value(4).toString());
    ui->tb_college->setText(query->value(5).toString());
    ui->tb_cls->setText(query->value(6).toString());

    ui->tb_id->setReadOnly(true);
}

// ============================================================
//  新增/修改提交（预编译语句 + 表单校验 + 密码哈希）
// ============================================================

void Widget::on_btn_filed_add_clicked()
{
    QString id      = ui->tb_id->toPlainText().trimmed();
    QString name    = ui->tb_name->toPlainText().trimmed();
    QString age     = ui->tb_age->toPlainText().trimmed();
    QString cls     = ui->tb_cls->toPlainText().trimmed();
    QString sex     = ui->tb_sex->toPlainText().trimmed();
    QString college = ui->tb_college->toPlainText().trimmed();
    QString tel     = ui->tb_tel->toPlainText().trimmed();

    // ---- 表单校验 ----
    QString err;
    if (!validateStudentId(id, err) ||
        !validateRequired(name, "姓名", err) ||
        !validateAge(age, err) ||
        !validateTel(tel, err) ||
        !validateRequired(sex, "性别", err) ||
        !validateRequired(college, "学院", err) ||
        !validateRequired(cls, "班级", err))
    {
        QMessageBox::critical(this, "输入错误", err, QMessageBox::Yes);
        return;
    }

    if (op) {
        // ======== 新增学生 ========
        if (studentExists(id)) {
            QMessageBox::critical(this, "错误", "该学号已存在", QMessageBox::Yes);
            return;
        }

        query->prepare("INSERT INTO Student (id, name, age, tel, sex, college, cls, pwd) "
                       "VALUES (:id, :name, :age, :tel, :sex, :college, :cls, :pwd)");
        query->bindValue(":id", id);
        query->bindValue(":name", name);
        query->bindValue(":age", age.toInt());
        query->bindValue(":tel", tel);
        query->bindValue(":sex", sex);
        query->bindValue(":college", college);
        query->bindValue(":cls", cls);
        // 默认密码为哈希后的 123456（不再用学号）
        query->bindValue(":pwd", hashPassword("123456"));

        if (!execWithFeedback("新增成功！默认密码：123456")) return;

    } else {
        // ======== 修改学生（预编译语句，防 SQL 注入） ========
        query->prepare("UPDATE Student SET name = :name, age = :age, tel = :tel, "
                       "sex = :sex, college = :college, cls = :cls WHERE id = :id");
        query->bindValue(":name", name);
        query->bindValue(":age", age.toInt());
        query->bindValue(":tel", tel);
        query->bindValue(":sex", sex);
        query->bindValue(":college", college);
        query->bindValue(":cls", cls);
        query->bindValue(":id", id);

        if (!execWithFeedback("修改成功！")) return;
    }

    // 刷新 TableView 并返回列表
    FetchData();
    ui->stack->setCurrentIndex(2);
}

void Widget::on_btn_filed_ret_clicked()
{
    ui->stack->setCurrentIndex(2);
}

// ============================================================
//  学生注册（预编译语句 + 表单校验 + 密码哈希）
// ============================================================

void Widget::on_btn_reg_clicked()
{
    QString id      = ui->reg_id->toPlainText().trimmed();
    QString name    = ui->reg_name->toPlainText().trimmed();
    QString age     = ui->reg_age->toPlainText().trimmed();
    QString cls     = ui->reg_cls->toPlainText().trimmed();
    QString sex     = ui->reg_sex->toPlainText().trimmed();
    QString college = ui->reg_college->toPlainText().trimmed();
    QString tel     = ui->reg_tel->toPlainText().trimmed();
    QString pwd     = ui->reg_pwd->text().trimmed();

    // ---- 表单校验 ----
    QString err;
    if (!validateStudentId(id, err) ||
        !validateRequired(name, "姓名", err) ||
        !validateAge(age, err) ||
        !validateTel(tel, err) ||
        !validateRequired(sex, "性别", err) ||
        !validateRequired(college, "学院", err) ||
        !validateRequired(cls, "班级", err) ||
        !validateRequired(pwd, "密码", err))
    {
        QMessageBox::critical(this, "输入错误", err, QMessageBox::Yes);
        return;
    }

    if (pwd.length() < 3) {
        QMessageBox::critical(this, "输入错误", "密码至少 3 位", QMessageBox::Yes);
        return;
    }

    // 检查是否已注册
    if (studentExists(id)) {
        QMessageBox::critical(this, "错误", "该学号已注册", QMessageBox::Yes);
        return;
    }

    // 插入数据（密码哈希存储）
    query->prepare("INSERT INTO Student (id, name, age, tel, sex, college, cls, pwd) "
                   "VALUES (:id, :name, :age, :tel, :sex, :college, :cls, :pwd)");
    query->bindValue(":id", id);
    query->bindValue(":name", name);
    query->bindValue(":age", age.toInt());
    query->bindValue(":tel", tel);
    query->bindValue(":sex", sex);
    query->bindValue(":college", college);
    query->bindValue(":cls", cls);
    query->bindValue(":pwd", hashPassword(pwd));

    if (!execWithFeedback("注册成功！")) return;

    // 跳回登录页，自动填入刚注册的学号
    ui->stack->setCurrentIndex(0);
    ui->tb_user->setText(id);
    ui->tb_pwd->clear();
    ui->tb_pwd->setFocus();
}
