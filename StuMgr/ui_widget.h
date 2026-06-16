/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stack;
    QWidget *page_login;
    QTextEdit *tb_user;
    QPushButton *btn_login;
    QLabel *label_3;
    QPushButton *btn_login_2;
    QCommandLinkButton *btn_go_reg;
    QLineEdit *tb_pwd;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QLabel *label_7;
    QWidget *page_reg;
    QLabel *label_5;
    QCommandLinkButton *btn_go_login;
    QTextEdit *reg_id;
    QTextEdit *reg_name;
    QTextEdit *reg_tel;
    QTextEdit *reg_sex;
    QTextEdit *reg_cls;
    QTextEdit *reg_college;
    QTextEdit *reg_age;
    QTextEdit *reg_pwd;
    QPushButton *btn_reg;
    QWidget *page_main;
    QLabel *label_2;
    QTableView *tableView;
    QTextEdit *tb_content;
    QPushButton *btn_query;
    QPushButton *btn_del;
    QPushButton *btn_add;
    QPushButton *btn_mod;
    QWidget *page_field;
    QTextEdit *tb_name;
    QTextEdit *tb_sex;
    QTextEdit *tb_age;
    QTextEdit *tb_tel;
    QTextEdit *tb_college;
    QTextEdit *tb_cls;
    QTextEdit *tb_id;
    QPushButton *btn_filed_add;
    QPushButton *btn_filed_ret;
    QLabel *label_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(809, 520);
        stack = new QStackedWidget(Widget);
        stack->setObjectName("stack");
        stack->setGeometry(QRect(0, 0, 811, 521));
        stack->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 252, 255);"));
        page_login = new QWidget();
        page_login->setObjectName("page_login");
        page_login->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 252, 255);"));
        tb_user = new QTextEdit(page_login);
        tb_user->setObjectName("tb_user");
        tb_user->setGeometry(QRect(220, 240, 331, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\271\274\345\234\206")});
        font.setPointSize(18);
        tb_user->setFont(font);
        tb_user->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        tb_user->setCursorWidth(0);
        btn_login = new QPushButton(page_login);
        btn_login->setObjectName("btn_login");
        btn_login->setGeometry(QRect(220, 420, 141, 41));
        btn_login->setFont(font);
        btn_login->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        label_3 = new QLabel(page_login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 40, 391, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\232\266\344\271\246")});
        font1.setPointSize(48);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(64, 163, 255);"));
        btn_login_2 = new QPushButton(page_login);
        btn_login_2->setObjectName("btn_login_2");
        btn_login_2->setGeometry(QRect(410, 420, 141, 41));
        btn_login_2->setFont(font);
        btn_login_2->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(85, 255, 127);"));
        btn_go_reg = new QCommandLinkButton(page_login);
        btn_go_reg->setObjectName("btn_go_reg");
        btn_go_reg->setGeometry(QRect(730, 480, 81, 41));
        btn_go_reg->setStyleSheet(QString::fromUtf8("color: rgb(85, 170, 255);"));
        tb_pwd = new QLineEdit(page_login);
        tb_pwd->setObjectName("tb_pwd");
        tb_pwd->setGeometry(QRect(220, 320, 331, 41));
        tb_pwd->setFont(font);
        tb_pwd->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        tb_pwd->setEchoMode(QLineEdit::Password);
        label = new QLabel(page_login);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 250, 40, 12));
        widget = new QWidget(page_login);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(130, 240, 91, 121));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font2.setPointSize(18);
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 85, 255);"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 62, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 85, 255);"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        stack->addWidget(page_login);
        page_reg = new QWidget();
        page_reg->setObjectName("page_reg");
        label_5 = new QLabel(page_reg);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(200, 40, 391, 91));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(64, 163, 255);"));
        btn_go_login = new QCommandLinkButton(page_reg);
        btn_go_login->setObjectName("btn_go_login");
        btn_go_login->setGeometry(QRect(730, 480, 81, 41));
        btn_go_login->setStyleSheet(QString::fromUtf8("color: rgb(85, 170, 255);"));
        reg_id = new QTextEdit(page_reg);
        reg_id->setObjectName("reg_id");
        reg_id->setGeometry(QRect(120, 160, 241, 41));
        reg_id->setFont(font);
        reg_id->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        reg_name = new QTextEdit(page_reg);
        reg_name->setObjectName("reg_name");
        reg_name->setGeometry(QRect(400, 160, 241, 41));
        reg_name->setFont(font);
        reg_name->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        reg_tel = new QTextEdit(page_reg);
        reg_tel->setObjectName("reg_tel");
        reg_tel->setGeometry(QRect(400, 230, 241, 41));
        reg_tel->setFont(font);
        reg_tel->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        reg_sex = new QTextEdit(page_reg);
        reg_sex->setObjectName("reg_sex");
        reg_sex->setGeometry(QRect(120, 230, 241, 41));
        reg_sex->setFont(font);
        reg_sex->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        reg_cls = new QTextEdit(page_reg);
        reg_cls->setObjectName("reg_cls");
        reg_cls->setGeometry(QRect(400, 300, 241, 41));
        reg_cls->setFont(font);
        reg_cls->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        reg_college = new QTextEdit(page_reg);
        reg_college->setObjectName("reg_college");
        reg_college->setGeometry(QRect(120, 300, 241, 41));
        reg_college->setFont(font);
        reg_college->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        reg_age = new QTextEdit(page_reg);
        reg_age->setObjectName("reg_age");
        reg_age->setGeometry(QRect(120, 370, 241, 41));
        reg_age->setFont(font);
        reg_age->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        reg_pwd = new QTextEdit(page_reg);
        reg_pwd->setObjectName("reg_pwd");
        reg_pwd->setGeometry(QRect(400, 370, 241, 41));
        reg_pwd->setFont(font);
        reg_pwd->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        btn_reg = new QPushButton(page_reg);
        btn_reg->setObjectName("btn_reg");
        btn_reg->setGeometry(QRect(310, 450, 141, 41));
        btn_reg->setFont(font);
        btn_reg->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(85, 255, 127);"));
        stack->addWidget(page_reg);
        page_main = new QWidget();
        page_main->setObjectName("page_main");
        page_main->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 252, 255);"));
        label_2 = new QLabel(page_main);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 40, 391, 91));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(64, 163, 255);"));
        tableView = new QTableView(page_main);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(40, 210, 731, 291));
        tb_content = new QTextEdit(page_main);
        tb_content->setObjectName("tb_content");
        tb_content->setGeometry(QRect(40, 160, 411, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\271\274\345\234\206")});
        font3.setPointSize(14);
        tb_content->setFont(font3);
        tb_content->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(255, 255, 255);"));
        btn_query = new QPushButton(page_main);
        btn_query->setObjectName("btn_query");
        btn_query->setGeometry(QRect(460, 160, 71, 31));
        btn_query->setFont(font3);
        btn_query->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(85, 255, 127);"));
        btn_del = new QPushButton(page_main);
        btn_del->setObjectName("btn_del");
        btn_del->setGeometry(QRect(540, 160, 71, 31));
        btn_del->setFont(font3);
        btn_del->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(255, 85, 0);"));
        btn_add = new QPushButton(page_main);
        btn_add->setObjectName("btn_add");
        btn_add->setGeometry(QRect(620, 160, 71, 31));
        btn_add->setFont(font3);
        btn_add->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(85, 255, 127);"));
        btn_mod = new QPushButton(page_main);
        btn_mod->setObjectName("btn_mod");
        btn_mod->setGeometry(QRect(700, 160, 71, 31));
        btn_mod->setFont(font3);
        btn_mod->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(255, 170, 0);"));
        stack->addWidget(page_main);
        page_field = new QWidget();
        page_field->setObjectName("page_field");
        page_field->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 252, 255);"));
        tb_name = new QTextEdit(page_field);
        tb_name->setObjectName("tb_name");
        tb_name->setGeometry(QRect(90, 170, 271, 41));
        tb_name->setFont(font);
        tb_name->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        tb_sex = new QTextEdit(page_field);
        tb_sex->setObjectName("tb_sex");
        tb_sex->setGeometry(QRect(420, 170, 271, 41));
        tb_sex->setFont(font);
        tb_sex->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        tb_age = new QTextEdit(page_field);
        tb_age->setObjectName("tb_age");
        tb_age->setGeometry(QRect(90, 250, 271, 41));
        tb_age->setFont(font);
        tb_age->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        tb_tel = new QTextEdit(page_field);
        tb_tel->setObjectName("tb_tel");
        tb_tel->setGeometry(QRect(420, 250, 271, 41));
        tb_tel->setFont(font);
        tb_tel->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        tb_college = new QTextEdit(page_field);
        tb_college->setObjectName("tb_college");
        tb_college->setGeometry(QRect(90, 320, 271, 41));
        tb_college->setFont(font);
        tb_college->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        tb_cls = new QTextEdit(page_field);
        tb_cls->setObjectName("tb_cls");
        tb_cls->setGeometry(QRect(420, 320, 271, 41));
        tb_cls->setFont(font);
        tb_cls->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        tb_id = new QTextEdit(page_field);
        tb_id->setObjectName("tb_id");
        tb_id->setGeometry(QRect(90, 400, 601, 41));
        tb_id->setFont(font);
        tb_id->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(0, 170, 255);"));
        btn_filed_add = new QPushButton(page_field);
        btn_filed_add->setObjectName("btn_filed_add");
        btn_filed_add->setGeometry(QRect(130, 460, 201, 41));
        btn_filed_add->setFont(font);
        btn_filed_add->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(85, 255, 127);"));
        btn_filed_ret = new QPushButton(page_field);
        btn_filed_ret->setObjectName("btn_filed_ret");
        btn_filed_ret->setGeometry(QRect(450, 460, 201, 41));
        btn_filed_ret->setFont(font);
        btn_filed_ret->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"background-color: rgb(255, 170, 0);"));
        label_4 = new QLabel(page_field);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 40, 391, 91));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(64, 163, 255);"));
        stack->addWidget(page_field);

        retranslateUi(Widget);

        stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        tb_user->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245", nullptr));
        btn_login->setText(QCoreApplication::translate("Widget", "\345\255\246\347\224\237\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        btn_login_2->setText(QCoreApplication::translate("Widget", "\347\256\241\347\220\206\347\231\273\345\275\225", nullptr));
        btn_go_reg->setText(QCoreApplication::translate("Widget", "\345\216\273\346\263\250\345\206\214", nullptr));
        tb_pwd->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245", nullptr));
        label->setText(QString());
        label_6->setText(QCoreApplication::translate("Widget", "\350\264\246\346\210\267\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        btn_go_login->setText(QCoreApplication::translate("Widget", "\345\216\273\347\231\273\345\275\225", nullptr));
        reg_id->setPlaceholderText(QCoreApplication::translate("Widget", "\345\255\246\345\217\267\357\274\232", nullptr));
        reg_name->setPlaceholderText(QCoreApplication::translate("Widget", "\345\247\223\345\220\215\357\274\232", nullptr));
        reg_tel->setPlaceholderText(QCoreApplication::translate("Widget", "\347\224\265\350\257\235\357\274\232", nullptr));
        reg_sex->setPlaceholderText(QCoreApplication::translate("Widget", "\346\200\247\345\210\253\357\274\232", nullptr));
        reg_cls->setPlaceholderText(QCoreApplication::translate("Widget", "\347\217\255\347\272\247\357\274\232", nullptr));
        reg_college->setPlaceholderText(QCoreApplication::translate("Widget", "\345\255\246\351\231\242\357\274\232", nullptr));
        reg_age->setPlaceholderText(QCoreApplication::translate("Widget", "\345\271\264\351\276\204\357\274\232", nullptr));
        reg_pwd->setPlaceholderText(QCoreApplication::translate("Widget", "\345\257\206\347\240\201\357\274\232", nullptr));
        btn_reg->setText(QCoreApplication::translate("Widget", "\346\263\250    \345\206\214", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        tb_content->setPlaceholderText(QCoreApplication::translate("Widget", "\345\255\246\345\217\267", nullptr));
        btn_query->setText(QCoreApplication::translate("Widget", "\346\237\245 \350\257\242", nullptr));
        btn_del->setText(QCoreApplication::translate("Widget", "\345\210\240 \351\231\244", nullptr));
        btn_add->setText(QCoreApplication::translate("Widget", "\345\242\236 \345\212\240", nullptr));
        btn_mod->setText(QCoreApplication::translate("Widget", "\344\277\256 \346\224\271", nullptr));
        tb_name->setPlaceholderText(QCoreApplication::translate("Widget", "\345\247\223\345\220\215\357\274\232", nullptr));
        tb_sex->setPlaceholderText(QCoreApplication::translate("Widget", "\346\200\247\345\210\253\357\274\232", nullptr));
        tb_age->setPlaceholderText(QCoreApplication::translate("Widget", "\345\271\264\351\276\204\357\274\232", nullptr));
        tb_tel->setPlaceholderText(QCoreApplication::translate("Widget", "\347\224\265\350\257\235\357\274\232", nullptr));
        tb_college->setPlaceholderText(QCoreApplication::translate("Widget", "\345\255\246\351\231\242\357\274\232", nullptr));
        tb_cls->setPlaceholderText(QCoreApplication::translate("Widget", "\347\217\255\347\272\247\357\274\232", nullptr));
        tb_id->setPlaceholderText(QCoreApplication::translate("Widget", "\345\255\246\345\217\267", nullptr));
        btn_filed_add->setText(QCoreApplication::translate("Widget", "\347\241\256      \345\256\232", nullptr));
        btn_filed_ret->setText(QCoreApplication::translate("Widget", "\350\277\224     \345\233\236", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
