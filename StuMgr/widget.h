#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QDebug>
#include <QMessageBox>
#include <QCryptographicHash>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <memory>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    // 初始化数据库
    void InitDb();

    // 获取学生数据并加载到 TableView
    void FetchData();

    // 筛选显示（按学号）
    void FilterById(const QString &id);

private slots:
    void on_btn_go_login_clicked();
    void on_btn_go_reg_clicked();
    void on_btn_login_clicked();
    void on_btn_login_2_clicked();
    void on_btn_query_clicked();
    void on_btn_del_clicked();
    void on_btn_add_clicked();
    void on_btn_mod_clicked();
    void on_btn_filed_ret_clicked();
    void on_btn_filed_add_clicked();
    void on_btn_reg_clicked();

private:
    Ui::Widget *ui;
    QSqlDatabase db;
    QSqlQuery* query;
    QSqlQueryModel* model;
    bool op = true; // true=新增, false=修改

    // ---- 辅助函数 ----

    // 密码哈希：SHA-256(单次)
    static QString hashPassword(const QString &pwd);

    // 校验学号：必须为纯数字，长度 4-20
    static bool validateStudentId(const QString &id, QString &errMsg);

    // 校验年龄：0-120 的整数
    static bool validateAge(const QString &age, QString &errMsg);

    // 校验电话：11 位数字（中国大陆手机号）
    static bool validateTel(const QString &tel, QString &errMsg);

    // 校验姓名/学院/班级：非空，长度 1-50
    static bool validateRequired(const QString &field, const QString &fieldName, QString &errMsg);

    // 执行 DML 并弹出结果反馈
    bool execWithFeedback(const QString &successMsg);

    // 检查学生是否存在（按学号）
    bool studentExists(const QString &id);
};

#endif // WIDGET_H
