#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QDebug>
#include <QMessageBox>

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

    // 获取数据
    void FetchData();

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

    void on_Widget_destroyed();

    void on_btn_reg_clicked();

private:
    Ui::Widget *ui;
    QSqlDatabase db;
    QSqlQuery* query;
    QSqlQueryModel* model;
    bool op = true; // true为新增 false 为修改
};
#endif // WIDGET_H
