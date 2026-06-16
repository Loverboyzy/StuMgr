#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowIcon(style()->standardIcon(QStyle::SP_DesktopIcon));

    // 初始化数据库
    InitDb();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::InitDb()
{
    // 设置首页
    this->ui->stack->setCurrentIndex(0);

    // 创建数据库
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("qt_stumgr");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("root");

    query = new QSqlQuery();
    model = new QSqlQueryModel();

    // 创建表
    if(!db.open())
    {
        qDebug()<<"错误信息 :"<<db.lastError();
    }
    else
    {
        // 1、创建学生表
        QString creatTableStr = "CREATE TABLE Student \
                (                                       \
                  id      char(20)  NOT NULL ,     \
                  name    char(50)  NOT NULL ,     \
                  age   char(50)  NULL ,         \
                  tel    char(50)  NULL ,         \
                  sex   char(10)   NULL ,         \
                  college     char(50)  NULL ,         \
                  cls char(50)  NULL ,         \
                  pwd char(50)  NULL         \
                );";


        query->prepare(creatTableStr);
        query->exec();

        // 2、创建管理表
        creatTableStr = "CREATE TABLE  admin(user  char(20)  NOT NULL , pwd char(50)  NULL);";
        query->prepare(creatTableStr);
        query->exec();

        // 3、向管理表写入数据
        QString sql("INSERT INTO `qt_stumgr`.`student`(`id`, `name`, `age`, `tel`, `sex`, `college`, `cls`, `pwd`) VALUES "
                "('1002', '张无忌', '22', '13800001111', '男', '医学院', '临床医学一班', '456456'),"
                "('1003', '赵敏', '21', '13900002222', '女', '文学院', '汉语言文学二班', '789789'),"
                "('1004', '杨过', '23', '15000003333', '男', '理学院', '物理学三班', '321321'),"
                "('1005', '小龙女', '20', '15100004444', '女', '艺术学院', '舞蹈表演一班', '654654'),"
                "('1006', '令狐冲', '24', '15200005555', '男', '工学院', '机械工程二班', '987987'),"
                "('1007', '任盈盈', '22', '15300006666', '女', '商学院', '市场营销三班', '210210'),"
                "('1008', '韦小宝', '21', '15500007777', '男', '法学院', '民商法二班', '543543'),"
                "('1009', '双儿', '20', '15600008888', '女', '外国语学院', '英语一班', '876876'),"
                "('1010', '郭靖', '25', '15700009999', '男', '农学院', '农学三班', '147147'),"
                "('1011', '黄蓉', '23', '15800000000', '女', '管理学院', '工商管理二班', '258258');");

        QSqlQueryModel m;
        m.setQuery(sql);
        if(m.rowCount() < 10)
        {
            query->exec(sql);
        }


        QString insertSQL = QString("INSERT INTO admin (user, pwd) VALUES (:user,:pwd);");
        query->prepare(insertSQL);
        query->bindValue(":user", "su");
        query->bindValue(":pwd", "1");
        if(!query->exec())
            qDebug()<<"插入数据错误 :"<<query->lastError();

        m.setQuery(insertSQL);
        if(m.rowCount() < 1)
        {
            query->exec("INSERT INTO admin (user, pwd) VALUES ('su','1');");
        }


    }

    //db.close();
}

void Widget::FetchData()
{
    model->setQuery("SELECT id,name,age,tel,sex,college,cls FROM student");
    model->setHeaderData(0, Qt::Horizontal, tr("学号"));
    model->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    model->setHeaderData(2, Qt::Horizontal, tr("年龄"));
    model->setHeaderData(3, Qt::Horizontal, tr("电话"));
    model->setHeaderData(4, Qt::Horizontal, tr("性别"));
    model->setHeaderData(5, Qt::Horizontal, tr("学院"));
    model->setHeaderData(6, Qt::Horizontal, tr("班级"));

    this->ui->tableView->setModel(model);
}


void Widget::on_btn_go_login_clicked()
{
    this->ui->stack->setCurrentIndex(0);
}

void Widget::on_btn_go_reg_clicked()
{
     this->ui->stack->setCurrentIndex(1);
}

void Widget::on_btn_login_clicked()
{
    QString user = this->ui->tb_user->toPlainText();
    QString pwd = this->ui->tb_pwd->text();

    if(user.isEmpty() || pwd.isEmpty())
    {
        QMessageBox::critical(this, "错误", "账户或密码不能为空", QMessageBox::Yes);
        return;
    }

    QString sql = QString("SELECT * FROM student WHERE id='%1' and pwd='%2'").arg(user, pwd);
    query->prepare(sql);
    if(!query->exec())
        qDebug() << "错误";
    else
    {
        int row = 0;
        if(query->last()) row = query->at() + 1;
        qDebug() << row;

        if(row < 1)
        {
             QMessageBox::critical(this, "错误", "账户或密码错误", QMessageBox::Yes);
        }else
        {
            // 转到用户页面
            this->ui->stack->setCurrentIndex(2);

            // 设置新增删除修改不可见
            this->ui->btn_add->setHidden(true);
            this->ui->btn_mod->setHidden(true);
            this->ui->btn_del->setHidden(true);

            this->ui->btn_query->setGeometry(700, 160, 71, 31);

            this->ui->tb_content->setGeometry(40, 160, 651, 31);

            // 查询数据
            FetchData();
        }
    }
}

void Widget::on_btn_login_2_clicked()
{
    QString user = this->ui->tb_user->toPlainText();
    QString pwd = this->ui->tb_pwd->text();

    if(user.isEmpty() || pwd.isEmpty())
    {
        QMessageBox::critical(this, "错误", "账户或密码不能为空", QMessageBox::Yes);
        return;
    }

    QString sql = QString("SELECT * FROM admin WHERE user='%1' and pwd='%2'").arg(user, pwd);
    query->prepare(sql);
    if(!query->exec())
        qDebug() << "错误";
    else
    {
        int row = 0;
        if(query->last()) row = query->at() + 1;
        qDebug() << row;

        if(row < 1)
        {
             QMessageBox::critical(this, "错误", "账户或密码错误", QMessageBox::Yes);
        }else
        {
            // 转到管理员页面
            this->ui->stack->setCurrentIndex(2);

            // 查询数据
            FetchData();
        }
    }
}

// 点击查询
void Widget::on_btn_query_clicked()
{
    QString id = this->ui->tb_content->toPlainText();
    if(id.isEmpty())
    {
        QMessageBox::critical(this, "错误", "学号不能为空", QMessageBox::Yes);
        return;
    }

    QString sql = QString("SELECT * FROM student WHERE id='%1'").arg(id);
    query->prepare(sql);
    if(!query->exec())
        qDebug() << "错误";
    else
    {
        int row = 0;
        if(query->last())
        {
            row = query->at() + 1;
        }
        qDebug() << row;

        if(row < 1)
        {
             QMessageBox::critical(this, "错误", "没有该学生信息", QMessageBox::Yes);
             return;
        }else
        {
            // 取数据
            query->first();
            QString show = QString("学号：%1\n姓名：%2\n性别：%3\n年龄：%4\n电话：%5\n学院：%6\n班级：%7\n").
                    arg(id,query->value(1).toString(),query->value(3).toString(),
                        query->value(2).toString(),query->value(4).toString(),
                        query->value(5).toString(),query->value(6).toString());

            QMessageBox::information(this, "成功", show, QMessageBox::Yes);
        }
    }
}

// 点击删除
void Widget::on_btn_del_clicked()
{
    QString id = this->ui->tb_content->toPlainText();
    if(id.isEmpty())
    {
        QMessageBox::critical(this, "错误", "学号不能为空", QMessageBox::Yes);
        return;
    }

    QString sql = QString("DELETE FROM student WHERE id='%1'").arg(id);
    query->prepare(sql);
    query->exec();

    // 刷新tableview
    FetchData();
}

// 点击新增
void Widget::on_btn_add_clicked()
{
    // 切换页面
    this->ui->stack->setCurrentIndex(3);
    op = true;

    // ID置为可更改
    this->ui->tb_id->setReadOnly(false);
}

// 点击修改
void Widget::on_btn_mod_clicked()
{
    QString id = this->ui->tb_content->toPlainText();
    if(id.isEmpty())
    {
        QMessageBox::critical(this, "错误", "学号不能为空", QMessageBox::Yes);
        return;
    }

    QString sql = QString("SELECT * FROM student WHERE id='%1'").arg(id);
    query->prepare(sql);
    if(!query->exec())
        qDebug() << "错误";
    else
    {
        int row = 0;
        if(query->last())
        {
            row = query->at() + 1;
        }
        qDebug() << row;

        if(row < 1)
        {
             QMessageBox::critical(this, "错误", "没有该学生信息", QMessageBox::Yes);
             return;
        }else
        {
            // 切换页面
            this->ui->stack->setCurrentIndex(3);
            op = false;

            // 取数据
            query->first();
            this->ui->tb_id->setText(id);
            this->ui->tb_name->setText(query->value(1).toString());
            this->ui->tb_age->setText(query->value(2).toString());
            this->ui->tb_tel->setText(query->value(3).toString());
            this->ui->tb_sex->setText(query->value(4).toString());
            this->ui->tb_college->setText(query->value(5).toString());
            this->ui->tb_cls->setText(query->value(6).toString());

            // ID置为不可更改
            this->ui->tb_id->setReadOnly(true);
        }
    }
}


void Widget::on_btn_filed_ret_clicked()
{
    // 切换页面
    this->ui->stack->setCurrentIndex(2);
}


void Widget::on_btn_filed_add_clicked()
{
    // 获取输入
    QString id = this->ui->tb_id->toPlainText();
    QString name = this->ui->tb_name->toPlainText();
    QString age = this->ui->tb_age->toPlainText();
    QString cls = this->ui->tb_cls->toPlainText();
    QString sex = this->ui->tb_sex->toPlainText();
    QString college = this->ui->tb_college->toPlainText();
    QString tel = this->ui->tb_tel->toPlainText();

    if(id.isEmpty() || name.isEmpty() || age.isEmpty() || cls.isEmpty() ||
            sex.isEmpty() || college.isEmpty() || tel.isEmpty())
    {
        QMessageBox::critical(this, "错误", "信息不能为空", QMessageBox::Yes);
        return;
    }

    // 1.新增学生
    if(op)
    {
        // 插入数据
        QString insertSQL = QString("INSERT INTO student (id, name, age, tel, sex, college, cls, pwd)"
                                    " VALUES (:id, :name, :age, :tel, :sex, :college, :cls, :pwd);");
        query->prepare(insertSQL);
        query->bindValue(":id", id);
        query->bindValue(":name", name);
        query->bindValue(":age", age);
        query->bindValue(":tel", tel);
        query->bindValue(":sex", sex);
        query->bindValue(":college", college);
        query->bindValue(":cls", cls);
        query->bindValue(":pwd", id);

        if(!query->exec())
            qDebug()<<"插入数据错误 :"<<query->lastError();
        {
            QMessageBox::information(this, "成功", "新增成功！", QMessageBox::Yes);

            // 刷新tableview
            FetchData();

            // 切换页面
            this->ui->stack->setCurrentIndex(2);
        }
    }
    // 修改学生
    else
    {
        // 修改数据
        QString updateSQL = QString("UPDATE student set name='%1', age='%2', tel='%3', sex='%4',"
                                    " college='%5', cls='%6' WHERE id='%7';").arg(name, age, tel, sex,
                                                                                   college, cls, id);
        query->prepare(updateSQL);
        if(!query->exec())
            qDebug()<<"更新数据错误 :"<<query->lastError();
        {
            QMessageBox::information(this, "成功", "修改成功！", QMessageBox::Yes);

            qDebug() << updateSQL;

            // 刷新tableview
            FetchData();

            // 切换页面
            this->ui->stack->setCurrentIndex(2);
        }
    }
}


void Widget::on_Widget_destroyed()
{
    // 关闭数据连接
    db.close();
}


void Widget::on_btn_reg_clicked()
{
    // 获取输入
    QString id = this->ui->reg_id->toPlainText();
    QString name = this->ui->reg_name->toPlainText();
    QString age = this->ui->reg_age->toPlainText();
    QString cls = this->ui->reg_cls->toPlainText();
    QString sex = this->ui->reg_sex->toPlainText();
    QString college = this->ui->reg_college->toPlainText();
    QString tel = this->ui->reg_tel->toPlainText();
    QString pwd = this->ui->reg_pwd->toPlainText();

    if(id.isEmpty() || name.isEmpty() || age.isEmpty() || cls.isEmpty() ||
            sex.isEmpty() || college.isEmpty() || tel.isEmpty())
    {
        QMessageBox::critical(this, "错误", "信息不能为空", QMessageBox::Yes);
        return;
    }

    // 查询是否存在
    QString sql = QString("SELECT * FROM student WHERE id='%1'").arg(id);
    query->prepare(sql);
    if(!query->exec())
        qDebug() << "错误";
    else
    {
        int row = 0;
        if(query->last())
        {
            row = query->at() + 1;
        }
        qDebug() << row;

        if(row > 0)
        {
             QMessageBox::critical(this, "错误", "该学生已注册", QMessageBox::Yes);
             return;
        }else
        {
            // 注册成功
            QString insertSQL = QString("INSERT INTO student (id, name, age, tel, sex, college, cls, pwd)"
                                        " VALUES (:id, :name, :age, :tel, :sex, :college, :cls, :pwd);");
            query->prepare(insertSQL);
            query->bindValue(":id", id);
            query->bindValue(":name", name);
            query->bindValue(":age", age);
            query->bindValue(":tel", tel);
            query->bindValue(":sex", sex);
            query->bindValue(":college", college);
            query->bindValue(":cls", cls);
            query->bindValue(":pwd", pwd);

            if(!query->exec())
                qDebug()<<"插入数据错误 :"<<query->lastError();
            {
                QMessageBox::information(this, "成功", "注册成功", QMessageBox::Yes);

                // 切换页面
                this->ui->stack->setCurrentIndex(0);
            }
        }
    }
}
