/********************************************************************************
** Form generated from reading UI file 'atm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATM_H
#define UI_ATM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ATM
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *main_screen;
    QLabel *credit;
    QPushButton *pushButton_delete_account;
    QPushButton *pushButton_add_account;
    QPushButton *pushButton_atm_add_money;
    QPushButton *pushButton_login;
    QLabel *screen;
    QLabel *main_screen_label;
    QPushButton *pushButton_atm_quit;
    QWidget *login_screen;
    QLabel *screen_2;
    QLabel *credit_2;
    QLabel *login_account_number;
    QLabel *login_password;
    QLineEdit *login_account_number_line;
    QLineEdit *password_line;
    QPushButton *login_login;
    QPushButton *login_return;
    QLabel *input_account_number_report;
    QLabel *input_password_report;
    QLabel *login_label;
    QPushButton *login_password_censor;
    QLabel *login_account_number_line_2;
    QWidget *logged_in_screen;
    QLabel *credit_3;
    QLabel *screen_3;
    QLabel *logged_in_label;
    QPushButton *withdraw_button;
    QPushButton *transfer_money_button;
    QPushButton *account_information_button;
    QPushButton *edit_information_button;
    QPushButton *logout_button;
    QPushButton *add_money_button;
    QWidget *add_account_screen;
    QLabel *credit_4;
    QLabel *screen_4;
    QLineEdit *add_account_number_line;
    QLabel *add_account_number;
    QLabel *add_account_label;
    QLabel *add_account_username;
    QLineEdit *add_account_username_line;
    QLabel *add_account_account_number_report;
    QLabel *add_account_username_report;
    QLabel *add_account_password_report;
    QLabel *add_account_password;
    QLineEdit *add_account_password_line;
    QPushButton *add_account_confirm;
    QPushButton *add_account_return;
    QLabel *add_account_final_report;
    QPushButton *add_account_continue;
    QLabel *add_account_balance_report;
    QLabel *add_account_password_2;
    QLineEdit *add_account_balance_line;
    QPushButton *add_account_password_censor;
    QLabel *add_account_account_number_report_2;
    QLabel *add_account_balance_report_2;
    QWidget *withdraw_screen;
    QLabel *credit_5;
    QLabel *screen_5;
    QLabel *withdraw_report;
    QLabel *withdraw_hint;
    QLabel *withdraw_label;
    QLabel *withdraw_line_2;
    QLineEdit *withdraw_line;
    QPushButton *withdraw_refresh_button;
    QPushButton *withdraw_return_button;
    QPushButton *withdraw_confirm_button;
    QTextEdit *withdraw_report_2;
    QWidget *add_money_screen;
    QLabel *credit_6;
    QLabel *screen_6;
    QPushButton *add_money_return;
    QPushButton *add_money_refresh;
    QPushButton *add_money_confirm;
    QLabel *add_money_hint;
    QLabel *add_money_label;
    QLabel *add_money_line_2;
    QLineEdit *add_money_line;
    QLabel *add_money_report;
    QWidget *transfer_money_screen;
    QLabel *credit_7;
    QLabel *screen_7;
    QPushButton *transfer_money_return_button;
    QPushButton *transfer_money_confirm_button;
    QPushButton *transfer_money_refresh_button;
    QLabel *transfer_money_account_number;
    QLabel *transfer_money_label;
    QLabel *transfer_money_account_number_report;
    QLineEdit *transfer_money_account_number_line;
    QLabel *transfer_money_account_number_line_2;
    QLabel *transfer_money_money;
    QLineEdit *transfer_money_amount_line;
    QLabel *transfer_money_amount_report;
    QLabel *transfer_money_amount_line_2;
    QLabel *transfer_money_final_report;
    QWidget *Account_information_screen;
    QLabel *credit_8;
    QLabel *screen_8;
    QPushButton *account_information_return;
    QLabel *account_information_account_number;
    QLabel *account_information_label;
    QLabel *account_information_account_name;
    QLabel *account_information_password;
    QLabel *account_information_balance;
    QLabel *account_information_line_1;
    QLabel *account_information_line_2;
    QLabel *account_information_line_3;
    QLabel *account_information_line_4;
    QWidget *Edit_information_screen;
    QLabel *credit_9;
    QLabel *screen_9;
    QLabel *account_information_label_2;
    QLabel *account_information_account_name_2;
    QLabel *account_information_password_2;
    QLabel *account_information_account_number_2;
    QLineEdit *edit_account_information_line_1;
    QLineEdit *edit_account_information_line_2;
    QLineEdit *edit_account_information_line_3;
    QPushButton *edit_account_information_return;
    QPushButton *edit_account_information_confirm;
    QLabel *edit_account_information_report;
    QLabel *edit_account_information_line_4;
    QWidget *delete_account_screen;
    QLabel *credit_10;
    QLabel *screen_10;
    QPushButton *delete_account_return_button;
    QPushButton *delete_account_refresh_button;
    QPushButton *delete_account_confirm;
    QLabel *delete_account_hint;
    QLabel *delete_account_report;
    QLabel *delete_account_label;
    QLineEdit *delete_account_line;
    QLabel *delete_account_line_2;
    QWidget *atm_add_money_screen;
    QLabel *credit_11;
    QLabel *screen_11;
    QPushButton *atm_add_money_currency_1;
    QPushButton *atm_add_money_currency_2;
    QPushButton *atm_add_money_currency_3;
    QPushButton *atm_add_money_currency_4;
    QPushButton *atm_add_money_currency_5;
    QPushButton *atm_add_money_currency_6;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2_1;
    QLabel *label_2_2;
    QLabel *label_2_3;
    QLabel *label_2_4;
    QLabel *label_2_5;
    QLabel *label_2_6;
    QPushButton *atm_add_money_return;
    QPushButton *atm_add_money_confirm;
    QLabel *atm_add_money_hint;
    QLineEdit *atm_add_money_line;
    QLabel *currency_hint;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ATM)
    {
        if (ATM->objectName().isEmpty())
            ATM->setObjectName(QStringLiteral("ATM"));
        ATM->resize(800, 450);
        centralwidget = new QWidget(ATM);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setEnabled(true);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 800, 450));
        main_screen = new QWidget();
        main_screen->setObjectName(QStringLiteral("main_screen"));
        credit = new QLabel(main_screen);
        credit->setObjectName(QStringLiteral("credit"));
        credit->setGeometry(QRect(20, 0, 500, 90));
        credit->setStyleSheet(QStringLiteral(""));
        credit->setPixmap(QPixmap(QString::fromUtf8("UI/credit.png")));
        pushButton_delete_account = new QPushButton(main_screen);
        pushButton_delete_account->setObjectName(QStringLiteral("pushButton_delete_account"));
        pushButton_delete_account->setGeometry(QRect(30, 182, 300, 45));
        pushButton_delete_account->setAutoFillBackground(false);
        pushButton_delete_account->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        pushButton_add_account = new QPushButton(main_screen);
        pushButton_add_account->setObjectName(QStringLiteral("pushButton_add_account"));
        pushButton_add_account->setGeometry(QRect(30, 136, 300, 45));
        pushButton_add_account->setAutoFillBackground(false);
        pushButton_add_account->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        pushButton_atm_add_money = new QPushButton(main_screen);
        pushButton_atm_add_money->setObjectName(QStringLiteral("pushButton_atm_add_money"));
        pushButton_atm_add_money->setGeometry(QRect(30, 228, 300, 45));
        pushButton_atm_add_money->setAutoFillBackground(false);
        pushButton_atm_add_money->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        pushButton_login = new QPushButton(main_screen);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setEnabled(true);
        pushButton_login->setGeometry(QRect(30, 90, 300, 45));
        pushButton_login->setAutoFillBackground(false);
        pushButton_login->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        screen = new QLabel(main_screen);
        screen->setObjectName(QStringLiteral("screen"));
        screen->setGeometry(QRect(0, 0, 800, 450));
        screen->setAutoFillBackground(true);
        screen->setPixmap(QPixmap(QString::fromUtf8("UI/screen.png")));
        main_screen_label = new QLabel(main_screen);
        main_screen_label->setObjectName(QStringLiteral("main_screen_label"));
        main_screen_label->setGeometry(QRect(30, 70, 111, 19));
        main_screen_label->setStyleSheet(QLatin1String("font: 75 11pt \"MS Shell Dlg 2\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        pushButton_atm_quit = new QPushButton(main_screen);
        pushButton_atm_quit->setObjectName(QStringLiteral("pushButton_atm_quit"));
        pushButton_atm_quit->setGeometry(QRect(30, 274, 300, 45));
        pushButton_atm_quit->setAutoFillBackground(false);
        pushButton_atm_quit->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        stackedWidget->addWidget(main_screen);
        screen->raise();
        credit->raise();
        pushButton_login->raise();
        pushButton_delete_account->raise();
        pushButton_atm_add_money->raise();
        pushButton_add_account->raise();
        main_screen_label->raise();
        pushButton_atm_quit->raise();
        login_screen = new QWidget();
        login_screen->setObjectName(QStringLiteral("login_screen"));
        screen_2 = new QLabel(login_screen);
        screen_2->setObjectName(QStringLiteral("screen_2"));
        screen_2->setGeometry(QRect(0, 0, 800, 450));
        screen_2->setAutoFillBackground(true);
        screen_2->setPixmap(QPixmap(QString::fromUtf8("UI/screen.png")));
        credit_2 = new QLabel(login_screen);
        credit_2->setObjectName(QStringLiteral("credit_2"));
        credit_2->setGeometry(QRect(20, 0, 500, 90));
        credit_2->setStyleSheet(QStringLiteral(""));
        credit_2->setPixmap(QPixmap(QString::fromUtf8("UI/credit.png")));
        login_account_number = new QLabel(login_screen);
        login_account_number->setObjectName(QStringLiteral("login_account_number"));
        login_account_number->setGeometry(QRect(30, 90, 160, 30));
        login_account_number->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        login_password = new QLabel(login_screen);
        login_password->setObjectName(QStringLiteral("login_password"));
        login_password->setGeometry(QRect(30, 152, 160, 30));
        login_password->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        login_account_number_line = new QLineEdit(login_screen);
        login_account_number_line->setObjectName(QStringLiteral("login_account_number_line"));
        login_account_number_line->setGeometry(QRect(190, 90, 210, 30));
        login_account_number_line->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        password_line = new QLineEdit(login_screen);
        password_line->setObjectName(QStringLiteral("password_line"));
        password_line->setGeometry(QRect(190, 152, 210, 30));
        password_line->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        login_login = new QPushButton(login_screen);
        login_login->setObjectName(QStringLiteral("login_login"));
        login_login->setGeometry(QRect(320, 59, 80, 30));
        login_login->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        login_return = new QPushButton(login_screen);
        login_return->setObjectName(QStringLiteral("login_return"));
        login_return->setGeometry(QRect(239, 59, 80, 30));
        login_return->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        input_account_number_report = new QLabel(login_screen);
        input_account_number_report->setObjectName(QStringLiteral("input_account_number_report"));
        input_account_number_report->setGeometry(QRect(30, 121, 370, 30));
        input_account_number_report->setStyleSheet(QLatin1String("font: 12pt \"MS Reference Sans Serif\";\n"
"color: rgb(255, 105, 75);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.006, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        input_password_report = new QLabel(login_screen);
        input_password_report->setObjectName(QStringLiteral("input_password_report"));
        input_password_report->setGeometry(QRect(30, 183, 370, 30));
        input_password_report->setStyleSheet(QLatin1String("font: 12pt \"MS Reference Sans Serif\";\n"
"color: rgb(255, 105, 75);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.006, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        login_label = new QLabel(login_screen);
        login_label->setObjectName(QStringLiteral("login_label"));
        login_label->setGeometry(QRect(30, 71, 80, 19));
        login_label->setStyleSheet(QLatin1String("font: 75 11pt \"MS Shell Dlg 2\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        login_password_censor = new QPushButton(login_screen);
        login_password_censor->setObjectName(QStringLiteral("login_password_censor"));
        login_password_censor->setGeometry(QRect(401, 152, 30, 30));
        login_password_censor->setStyleSheet(QLatin1String("font: 75 17pt \"Microsoft Tai Le\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        login_account_number_line_2 = new QLabel(login_screen);
        login_account_number_line_2->setObjectName(QStringLiteral("login_account_number_line_2"));
        login_account_number_line_2->setGeometry(QRect(401, 90, 30, 30));
        login_account_number_line_2->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        stackedWidget->addWidget(login_screen);
        logged_in_screen = new QWidget();
        logged_in_screen->setObjectName(QStringLiteral("logged_in_screen"));
        credit_3 = new QLabel(logged_in_screen);
        credit_3->setObjectName(QStringLiteral("credit_3"));
        credit_3->setGeometry(QRect(20, 0, 500, 90));
        credit_3->setStyleSheet(QStringLiteral(""));
        credit_3->setPixmap(QPixmap(QString::fromUtf8("UI/credit.png")));
        screen_3 = new QLabel(logged_in_screen);
        screen_3->setObjectName(QStringLiteral("screen_3"));
        screen_3->setGeometry(QRect(0, 0, 800, 450));
        screen_3->setAutoFillBackground(true);
        screen_3->setPixmap(QPixmap(QString::fromUtf8("UI/screen.png")));
        logged_in_label = new QLabel(logged_in_screen);
        logged_in_label->setObjectName(QStringLiteral("logged_in_label"));
        logged_in_label->setGeometry(QRect(30, 71, 118, 19));
        logged_in_label->setStyleSheet(QLatin1String("font: 75 11pt \"MS Shell Dlg 2\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        withdraw_button = new QPushButton(logged_in_screen);
        withdraw_button->setObjectName(QStringLiteral("withdraw_button"));
        withdraw_button->setEnabled(true);
        withdraw_button->setGeometry(QRect(30, 90, 300, 45));
        withdraw_button->setAutoFillBackground(false);
        withdraw_button->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        transfer_money_button = new QPushButton(logged_in_screen);
        transfer_money_button->setObjectName(QStringLiteral("transfer_money_button"));
        transfer_money_button->setEnabled(true);
        transfer_money_button->setGeometry(QRect(30, 182, 300, 45));
        transfer_money_button->setAutoFillBackground(false);
        transfer_money_button->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        account_information_button = new QPushButton(logged_in_screen);
        account_information_button->setObjectName(QStringLiteral("account_information_button"));
        account_information_button->setEnabled(true);
        account_information_button->setGeometry(QRect(30, 228, 300, 45));
        account_information_button->setAutoFillBackground(false);
        account_information_button->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        edit_information_button = new QPushButton(logged_in_screen);
        edit_information_button->setObjectName(QStringLiteral("edit_information_button"));
        edit_information_button->setEnabled(true);
        edit_information_button->setGeometry(QRect(30, 274, 300, 45));
        edit_information_button->setAutoFillBackground(false);
        edit_information_button->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        logout_button = new QPushButton(logged_in_screen);
        logout_button->setObjectName(QStringLiteral("logout_button"));
        logout_button->setEnabled(true);
        logout_button->setGeometry(QRect(30, 320, 300, 45));
        logout_button->setAutoFillBackground(false);
        logout_button->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_money_button = new QPushButton(logged_in_screen);
        add_money_button->setObjectName(QStringLiteral("add_money_button"));
        add_money_button->setEnabled(true);
        add_money_button->setGeometry(QRect(30, 136, 300, 45));
        add_money_button->setAutoFillBackground(false);
        add_money_button->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        stackedWidget->addWidget(logged_in_screen);
        screen_3->raise();
        credit_3->raise();
        logged_in_label->raise();
        withdraw_button->raise();
        transfer_money_button->raise();
        account_information_button->raise();
        edit_information_button->raise();
        logout_button->raise();
        add_money_button->raise();
        add_account_screen = new QWidget();
        add_account_screen->setObjectName(QStringLiteral("add_account_screen"));
        credit_4 = new QLabel(add_account_screen);
        credit_4->setObjectName(QStringLiteral("credit_4"));
        credit_4->setGeometry(QRect(20, 0, 500, 90));
        credit_4->setStyleSheet(QStringLiteral(""));
        credit_4->setPixmap(QPixmap(QString::fromUtf8("UI/credit.png")));
        screen_4 = new QLabel(add_account_screen);
        screen_4->setObjectName(QStringLiteral("screen_4"));
        screen_4->setGeometry(QRect(0, 0, 800, 450));
        screen_4->setAutoFillBackground(true);
        screen_4->setPixmap(QPixmap(QString::fromUtf8("UI/screen.png")));
        add_account_number_line = new QLineEdit(add_account_screen);
        add_account_number_line->setObjectName(QStringLiteral("add_account_number_line"));
        add_account_number_line->setGeometry(QRect(190, 90, 210, 30));
        add_account_number_line->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_number = new QLabel(add_account_screen);
        add_account_number->setObjectName(QStringLiteral("add_account_number"));
        add_account_number->setGeometry(QRect(30, 90, 160, 30));
        add_account_number->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_label = new QLabel(add_account_screen);
        add_account_label->setObjectName(QStringLiteral("add_account_label"));
        add_account_label->setGeometry(QRect(30, 70, 100, 19));
        add_account_label->setStyleSheet(QLatin1String("font: 75 11pt \"MS Shell Dlg 2\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_username = new QLabel(add_account_screen);
        add_account_username->setObjectName(QStringLiteral("add_account_username"));
        add_account_username->setGeometry(QRect(30, 152, 160, 30));
        add_account_username->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_username_line = new QLineEdit(add_account_screen);
        add_account_username_line->setObjectName(QStringLiteral("add_account_username_line"));
        add_account_username_line->setGeometry(QRect(190, 152, 210, 30));
        add_account_username_line->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_account_number_report = new QLabel(add_account_screen);
        add_account_account_number_report->setObjectName(QStringLiteral("add_account_account_number_report"));
        add_account_account_number_report->setGeometry(QRect(30, 121, 370, 30));
        add_account_account_number_report->setStyleSheet(QLatin1String("font: 12pt \"MS Reference Sans Serif\";\n"
"color: rgb(255, 105, 75);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.006, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_username_report = new QLabel(add_account_screen);
        add_account_username_report->setObjectName(QStringLiteral("add_account_username_report"));
        add_account_username_report->setGeometry(QRect(30, 183, 370, 30));
        add_account_username_report->setStyleSheet(QLatin1String("font: 12pt \"MS Reference Sans Serif\";\n"
"color: rgb(255, 105, 75);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.006, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_password_report = new QLabel(add_account_screen);
        add_account_password_report->setObjectName(QStringLiteral("add_account_password_report"));
        add_account_password_report->setGeometry(QRect(30, 245, 370, 30));
        add_account_password_report->setStyleSheet(QLatin1String("font: 12pt \"MS Reference Sans Serif\";\n"
"color: rgb(255, 105, 75);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.006, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_password = new QLabel(add_account_screen);
        add_account_password->setObjectName(QStringLiteral("add_account_password"));
        add_account_password->setGeometry(QRect(30, 214, 160, 30));
        add_account_password->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_password_line = new QLineEdit(add_account_screen);
        add_account_password_line->setObjectName(QStringLiteral("add_account_password_line"));
        add_account_password_line->setGeometry(QRect(190, 214, 210, 30));
        add_account_password_line->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_confirm = new QPushButton(add_account_screen);
        add_account_confirm->setObjectName(QStringLiteral("add_account_confirm"));
        add_account_confirm->setGeometry(QRect(320, 59, 80, 30));
        add_account_confirm->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_return = new QPushButton(add_account_screen);
        add_account_return->setObjectName(QStringLiteral("add_account_return"));
        add_account_return->setGeometry(QRect(239, 59, 80, 30));
        add_account_return->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_final_report = new QLabel(add_account_screen);
        add_account_final_report->setObjectName(QStringLiteral("add_account_final_report"));
        add_account_final_report->setGeometry(QRect(30, 338, 370, 45));
        add_account_final_report->setStyleSheet(QLatin1String("font: 17pt \"MS Reference Sans Serif\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.006, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_continue = new QPushButton(add_account_screen);
        add_account_continue->setObjectName(QStringLiteral("add_account_continue"));
        add_account_continue->setEnabled(true);
        add_account_continue->setGeometry(QRect(158, 59, 80, 30));
        add_account_continue->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_balance_report = new QLabel(add_account_screen);
        add_account_balance_report->setObjectName(QStringLiteral("add_account_balance_report"));
        add_account_balance_report->setGeometry(QRect(30, 307, 370, 30));
        add_account_balance_report->setStyleSheet(QLatin1String("font: 12pt \"MS Reference Sans Serif\";\n"
"color: rgb(255, 105, 75);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.006, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_password_2 = new QLabel(add_account_screen);
        add_account_password_2->setObjectName(QStringLiteral("add_account_password_2"));
        add_account_password_2->setGeometry(QRect(30, 276, 160, 30));
        add_account_password_2->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_balance_line = new QLineEdit(add_account_screen);
        add_account_balance_line->setObjectName(QStringLiteral("add_account_balance_line"));
        add_account_balance_line->setGeometry(QRect(190, 276, 210, 30));
        add_account_balance_line->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_password_censor = new QPushButton(add_account_screen);
        add_account_password_censor->setObjectName(QStringLiteral("add_account_password_censor"));
        add_account_password_censor->setGeometry(QRect(401, 214, 30, 30));
        add_account_password_censor->setStyleSheet(QLatin1String("font: 75 17pt \"Microsoft Tai Le\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_account_number_report_2 = new QLabel(add_account_screen);
        add_account_account_number_report_2->setObjectName(QStringLiteral("add_account_account_number_report_2"));
        add_account_account_number_report_2->setGeometry(QRect(401, 90, 30, 30));
        add_account_account_number_report_2->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_account_balance_report_2 = new QLabel(add_account_screen);
        add_account_balance_report_2->setObjectName(QStringLiteral("add_account_balance_report_2"));
        add_account_balance_report_2->setGeometry(QRect(401, 276, 30, 30));
        add_account_balance_report_2->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        stackedWidget->addWidget(add_account_screen);
        screen_4->raise();
        credit_4->raise();
        add_account_number_line->raise();
        add_account_number->raise();
        add_account_label->raise();
        add_account_username->raise();
        add_account_username_line->raise();
        add_account_account_number_report->raise();
        add_account_username_report->raise();
        add_account_password_report->raise();
        add_account_password->raise();
        add_account_password_line->raise();
        add_account_confirm->raise();
        add_account_return->raise();
        add_account_final_report->raise();
        add_account_continue->raise();
        add_account_balance_report->raise();
        add_account_password_2->raise();
        add_account_balance_line->raise();
        add_account_password_censor->raise();
        add_account_account_number_report_2->raise();
        add_account_balance_report_2->raise();
        withdraw_screen = new QWidget();
        withdraw_screen->setObjectName(QStringLiteral("withdraw_screen"));
        credit_5 = new QLabel(withdraw_screen);
        credit_5->setObjectName(QStringLiteral("credit_5"));
        credit_5->setGeometry(QRect(20, 0, 500, 90));
        credit_5->setStyleSheet(QStringLiteral(""));
        credit_5->setPixmap(QPixmap(QString::fromUtf8("UI/credit.png")));
        screen_5 = new QLabel(withdraw_screen);
        screen_5->setObjectName(QStringLiteral("screen_5"));
        screen_5->setGeometry(QRect(0, 0, 800, 450));
        screen_5->setAutoFillBackground(true);
        screen_5->setPixmap(QPixmap(QString::fromUtf8("UI/screen.png")));
        withdraw_report = new QLabel(withdraw_screen);
        withdraw_report->setObjectName(QStringLiteral("withdraw_report"));
        withdraw_report->setGeometry(QRect(30, 121, 370, 45));
        withdraw_report->setStyleSheet(QLatin1String("font: 14pt \"MS Reference Sans Serif\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.006, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        withdraw_hint = new QLabel(withdraw_screen);
        withdraw_hint->setObjectName(QStringLiteral("withdraw_hint"));
        withdraw_hint->setGeometry(QRect(30, 90, 160, 30));
        withdraw_hint->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        withdraw_label = new QLabel(withdraw_screen);
        withdraw_label->setObjectName(QStringLiteral("withdraw_label"));
        withdraw_label->setGeometry(QRect(30, 70, 61, 19));
        withdraw_label->setStyleSheet(QLatin1String("font: 75 11pt \"MS Shell Dlg 2\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        withdraw_line_2 = new QLabel(withdraw_screen);
        withdraw_line_2->setObjectName(QStringLiteral("withdraw_line_2"));
        withdraw_line_2->setGeometry(QRect(401, 90, 30, 30));
        withdraw_line_2->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        withdraw_line = new QLineEdit(withdraw_screen);
        withdraw_line->setObjectName(QStringLiteral("withdraw_line"));
        withdraw_line->setGeometry(QRect(190, 90, 210, 30));
        withdraw_line->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        withdraw_refresh_button = new QPushButton(withdraw_screen);
        withdraw_refresh_button->setObjectName(QStringLiteral("withdraw_refresh_button"));
        withdraw_refresh_button->setEnabled(true);
        withdraw_refresh_button->setGeometry(QRect(158, 59, 80, 30));
        withdraw_refresh_button->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        withdraw_return_button = new QPushButton(withdraw_screen);
        withdraw_return_button->setObjectName(QStringLiteral("withdraw_return_button"));
        withdraw_return_button->setGeometry(QRect(239, 59, 80, 30));
        withdraw_return_button->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        withdraw_confirm_button = new QPushButton(withdraw_screen);
        withdraw_confirm_button->setObjectName(QStringLiteral("withdraw_confirm_button"));
        withdraw_confirm_button->setGeometry(QRect(320, 59, 80, 30));
        withdraw_confirm_button->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        withdraw_report_2 = new QTextEdit(withdraw_screen);
        withdraw_report_2->setObjectName(QStringLiteral("withdraw_report_2"));
        withdraw_report_2->setGeometry(QRect(30, 167, 370, 60));
        withdraw_report_2->setMinimumSize(QSize(0, 45));
        withdraw_report_2->setStyleSheet(QLatin1String("font: 14pt \"MS Reference Sans Serif\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.006, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        stackedWidget->addWidget(withdraw_screen);
        screen_5->raise();
        credit_5->raise();
        withdraw_report->raise();
        withdraw_hint->raise();
        withdraw_label->raise();
        withdraw_line_2->raise();
        withdraw_line->raise();
        withdraw_refresh_button->raise();
        withdraw_return_button->raise();
        withdraw_confirm_button->raise();
        withdraw_report_2->raise();
        add_money_screen = new QWidget();
        add_money_screen->setObjectName(QStringLiteral("add_money_screen"));
        credit_6 = new QLabel(add_money_screen);
        credit_6->setObjectName(QStringLiteral("credit_6"));
        credit_6->setGeometry(QRect(20, 0, 500, 90));
        credit_6->setStyleSheet(QStringLiteral(""));
        credit_6->setPixmap(QPixmap(QString::fromUtf8("UI/credit.png")));
        screen_6 = new QLabel(add_money_screen);
        screen_6->setObjectName(QStringLiteral("screen_6"));
        screen_6->setGeometry(QRect(0, 0, 800, 450));
        screen_6->setAutoFillBackground(true);
        screen_6->setPixmap(QPixmap(QString::fromUtf8("UI/screen.png")));
        add_money_return = new QPushButton(add_money_screen);
        add_money_return->setObjectName(QStringLiteral("add_money_return"));
        add_money_return->setGeometry(QRect(239, 59, 80, 30));
        add_money_return->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_money_refresh = new QPushButton(add_money_screen);
        add_money_refresh->setObjectName(QStringLiteral("add_money_refresh"));
        add_money_refresh->setEnabled(true);
        add_money_refresh->setGeometry(QRect(158, 59, 80, 30));
        add_money_refresh->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_money_confirm = new QPushButton(add_money_screen);
        add_money_confirm->setObjectName(QStringLiteral("add_money_confirm"));
        add_money_confirm->setGeometry(QRect(320, 59, 80, 30));
        add_money_confirm->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_money_hint = new QLabel(add_money_screen);
        add_money_hint->setObjectName(QStringLiteral("add_money_hint"));
        add_money_hint->setGeometry(QRect(30, 90, 170, 30));
        add_money_hint->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_money_label = new QLabel(add_money_screen);
        add_money_label->setObjectName(QStringLiteral("add_money_label"));
        add_money_label->setGeometry(QRect(30, 71, 66, 19));
        add_money_label->setStyleSheet(QLatin1String("font: 75 11pt \"MS Shell Dlg 2\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_money_line_2 = new QLabel(add_money_screen);
        add_money_line_2->setObjectName(QStringLiteral("add_money_line_2"));
        add_money_line_2->setGeometry(QRect(401, 90, 30, 30));
        add_money_line_2->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_money_line = new QLineEdit(add_money_screen);
        add_money_line->setObjectName(QStringLiteral("add_money_line"));
        add_money_line->setGeometry(QRect(200, 90, 200, 30));
        add_money_line->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        add_money_report = new QLabel(add_money_screen);
        add_money_report->setObjectName(QStringLiteral("add_money_report"));
        add_money_report->setGeometry(QRect(30, 121, 370, 45));
        add_money_report->setStyleSheet(QLatin1String("font: 14pt \"MS Reference Sans Serif\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.006, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        stackedWidget->addWidget(add_money_screen);
        screen_6->raise();
        credit_6->raise();
        add_money_return->raise();
        add_money_refresh->raise();
        add_money_confirm->raise();
        add_money_hint->raise();
        add_money_label->raise();
        add_money_line_2->raise();
        add_money_line->raise();
        add_money_report->raise();
        transfer_money_screen = new QWidget();
        transfer_money_screen->setObjectName(QStringLiteral("transfer_money_screen"));
        credit_7 = new QLabel(transfer_money_screen);
        credit_7->setObjectName(QStringLiteral("credit_7"));
        credit_7->setGeometry(QRect(20, 0, 500, 90));
        credit_7->setStyleSheet(QStringLiteral(""));
        credit_7->setPixmap(QPixmap(QString::fromUtf8("UI/credit.png")));
        screen_7 = new QLabel(transfer_money_screen);
        screen_7->setObjectName(QStringLiteral("screen_7"));
        screen_7->setGeometry(QRect(0, 0, 800, 450));
        screen_7->setAutoFillBackground(true);
        screen_7->setPixmap(QPixmap(QString::fromUtf8("UI/screen.png")));
        transfer_money_return_button = new QPushButton(transfer_money_screen);
        transfer_money_return_button->setObjectName(QStringLiteral("transfer_money_return_button"));
        transfer_money_return_button->setGeometry(QRect(239, 59, 80, 30));
        transfer_money_return_button->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        transfer_money_confirm_button = new QPushButton(transfer_money_screen);
        transfer_money_confirm_button->setObjectName(QStringLiteral("transfer_money_confirm_button"));
        transfer_money_confirm_button->setGeometry(QRect(320, 59, 80, 30));
        transfer_money_confirm_button->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        transfer_money_refresh_button = new QPushButton(transfer_money_screen);
        transfer_money_refresh_button->setObjectName(QStringLiteral("transfer_money_refresh_button"));
        transfer_money_refresh_button->setEnabled(true);
        transfer_money_refresh_button->setGeometry(QRect(158, 59, 80, 30));
        transfer_money_refresh_button->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        transfer_money_account_number = new QLabel(transfer_money_screen);
        transfer_money_account_number->setObjectName(QStringLiteral("transfer_money_account_number"));
        transfer_money_account_number->setGeometry(QRect(30, 90, 200, 30));
        transfer_money_account_number->setStyleSheet(QLatin1String("font: 25 14pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        transfer_money_label = new QLabel(transfer_money_screen);
        transfer_money_label->setObjectName(QStringLiteral("transfer_money_label"));
        transfer_money_label->setGeometry(QRect(30, 71, 87, 19));
        transfer_money_label->setStyleSheet(QLatin1String("font: 75 11pt \"MS Shell Dlg 2\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        transfer_money_account_number_report = new QLabel(transfer_money_screen);
        transfer_money_account_number_report->setObjectName(QStringLiteral("transfer_money_account_number_report"));
        transfer_money_account_number_report->setGeometry(QRect(30, 121, 370, 30));
        transfer_money_account_number_report->setStyleSheet(QLatin1String("font: 17pt \"MS Reference Sans Serif\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.006, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        transfer_money_account_number_line = new QLineEdit(transfer_money_screen);
        transfer_money_account_number_line->setObjectName(QStringLiteral("transfer_money_account_number_line"));
        transfer_money_account_number_line->setGeometry(QRect(230, 90, 170, 30));
        transfer_money_account_number_line->setStyleSheet(QLatin1String("font: 12pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        transfer_money_account_number_line_2 = new QLabel(transfer_money_screen);
        transfer_money_account_number_line_2->setObjectName(QStringLiteral("transfer_money_account_number_line_2"));
        transfer_money_account_number_line_2->setGeometry(QRect(401, 90, 30, 30));
        transfer_money_account_number_line_2->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        transfer_money_money = new QLabel(transfer_money_screen);
        transfer_money_money->setObjectName(QStringLiteral("transfer_money_money"));
        transfer_money_money->setGeometry(QRect(30, 152, 200, 30));
        transfer_money_money->setStyleSheet(QLatin1String("font: 25 14pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        transfer_money_amount_line = new QLineEdit(transfer_money_screen);
        transfer_money_amount_line->setObjectName(QStringLiteral("transfer_money_amount_line"));
        transfer_money_amount_line->setGeometry(QRect(230, 152, 170, 30));
        transfer_money_amount_line->setStyleSheet(QLatin1String("font: 12pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        transfer_money_amount_report = new QLabel(transfer_money_screen);
        transfer_money_amount_report->setObjectName(QStringLiteral("transfer_money_amount_report"));
        transfer_money_amount_report->setGeometry(QRect(30, 183, 370, 30));
        transfer_money_amount_report->setStyleSheet(QLatin1String("font: 13pt \"MS Reference Sans Serif\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.006, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        transfer_money_amount_line_2 = new QLabel(transfer_money_screen);
        transfer_money_amount_line_2->setObjectName(QStringLiteral("transfer_money_amount_line_2"));
        transfer_money_amount_line_2->setGeometry(QRect(401, 152, 30, 30));
        transfer_money_amount_line_2->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        transfer_money_final_report = new QLabel(transfer_money_screen);
        transfer_money_final_report->setObjectName(QStringLiteral("transfer_money_final_report"));
        transfer_money_final_report->setGeometry(QRect(30, 214, 370, 45));
        transfer_money_final_report->setStyleSheet(QLatin1String("font: 17pt \"MS Reference Sans Serif\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.006, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        stackedWidget->addWidget(transfer_money_screen);
        screen_7->raise();
        credit_7->raise();
        transfer_money_return_button->raise();
        transfer_money_confirm_button->raise();
        transfer_money_refresh_button->raise();
        transfer_money_account_number->raise();
        transfer_money_label->raise();
        transfer_money_account_number_report->raise();
        transfer_money_account_number_line->raise();
        transfer_money_account_number_line_2->raise();
        transfer_money_money->raise();
        transfer_money_amount_line->raise();
        transfer_money_amount_report->raise();
        transfer_money_amount_line_2->raise();
        transfer_money_final_report->raise();
        Account_information_screen = new QWidget();
        Account_information_screen->setObjectName(QStringLiteral("Account_information_screen"));
        credit_8 = new QLabel(Account_information_screen);
        credit_8->setObjectName(QStringLiteral("credit_8"));
        credit_8->setGeometry(QRect(20, 0, 500, 90));
        credit_8->setStyleSheet(QStringLiteral(""));
        credit_8->setPixmap(QPixmap(QString::fromUtf8("UI/credit.png")));
        screen_8 = new QLabel(Account_information_screen);
        screen_8->setObjectName(QStringLiteral("screen_8"));
        screen_8->setGeometry(QRect(0, 0, 800, 450));
        screen_8->setAutoFillBackground(true);
        screen_8->setPixmap(QPixmap(QString::fromUtf8("UI/screen.png")));
        account_information_return = new QPushButton(Account_information_screen);
        account_information_return->setObjectName(QStringLiteral("account_information_return"));
        account_information_return->setGeometry(QRect(226, 59, 80, 30));
        account_information_return->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        account_information_account_number = new QLabel(Account_information_screen);
        account_information_account_number->setObjectName(QStringLiteral("account_information_account_number"));
        account_information_account_number->setGeometry(QRect(30, 90, 138, 30));
        account_information_account_number->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        account_information_label = new QLabel(Account_information_screen);
        account_information_label->setObjectName(QStringLiteral("account_information_label"));
        account_information_label->setGeometry(QRect(30, 70, 138, 19));
        account_information_label->setStyleSheet(QLatin1String("font: 75 11pt \"MS Shell Dlg 2\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        account_information_account_name = new QLabel(Account_information_screen);
        account_information_account_name->setObjectName(QStringLiteral("account_information_account_name"));
        account_information_account_name->setGeometry(QRect(30, 121, 138, 30));
        account_information_account_name->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        account_information_password = new QLabel(Account_information_screen);
        account_information_password->setObjectName(QStringLiteral("account_information_password"));
        account_information_password->setGeometry(QRect(30, 152, 138, 30));
        account_information_password->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        account_information_balance = new QLabel(Account_information_screen);
        account_information_balance->setObjectName(QStringLiteral("account_information_balance"));
        account_information_balance->setGeometry(QRect(30, 183, 138, 30));
        account_information_balance->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        account_information_line_1 = new QLabel(Account_information_screen);
        account_information_line_1->setObjectName(QStringLiteral("account_information_line_1"));
        account_information_line_1->setGeometry(QRect(168, 90, 138, 30));
        account_information_line_1->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        account_information_line_2 = new QLabel(Account_information_screen);
        account_information_line_2->setObjectName(QStringLiteral("account_information_line_2"));
        account_information_line_2->setGeometry(QRect(168, 121, 138, 30));
        account_information_line_2->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        account_information_line_3 = new QLabel(Account_information_screen);
        account_information_line_3->setObjectName(QStringLiteral("account_information_line_3"));
        account_information_line_3->setGeometry(QRect(168, 152, 138, 30));
        account_information_line_3->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        account_information_line_4 = new QLabel(Account_information_screen);
        account_information_line_4->setObjectName(QStringLiteral("account_information_line_4"));
        account_information_line_4->setGeometry(QRect(168, 183, 138, 30));
        account_information_line_4->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        stackedWidget->addWidget(Account_information_screen);
        screen_8->raise();
        credit_8->raise();
        account_information_return->raise();
        account_information_account_number->raise();
        account_information_label->raise();
        account_information_account_name->raise();
        account_information_password->raise();
        account_information_balance->raise();
        account_information_line_1->raise();
        account_information_line_2->raise();
        account_information_line_3->raise();
        account_information_line_4->raise();
        Edit_information_screen = new QWidget();
        Edit_information_screen->setObjectName(QStringLiteral("Edit_information_screen"));
        credit_9 = new QLabel(Edit_information_screen);
        credit_9->setObjectName(QStringLiteral("credit_9"));
        credit_9->setGeometry(QRect(20, 0, 500, 90));
        credit_9->setStyleSheet(QStringLiteral(""));
        credit_9->setPixmap(QPixmap(QString::fromUtf8("UI/credit.png")));
        screen_9 = new QLabel(Edit_information_screen);
        screen_9->setObjectName(QStringLiteral("screen_9"));
        screen_9->setGeometry(QRect(0, 0, 800, 450));
        screen_9->setAutoFillBackground(true);
        screen_9->setPixmap(QPixmap(QString::fromUtf8("UI/screen.png")));
        account_information_label_2 = new QLabel(Edit_information_screen);
        account_information_label_2->setObjectName(QStringLiteral("account_information_label_2"));
        account_information_label_2->setGeometry(QRect(30, 70, 164, 19));
        account_information_label_2->setStyleSheet(QLatin1String("font: 75 11pt \"MS Shell Dlg 2\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        account_information_account_name_2 = new QLabel(Edit_information_screen);
        account_information_account_name_2->setObjectName(QStringLiteral("account_information_account_name_2"));
        account_information_account_name_2->setGeometry(QRect(30, 121, 138, 30));
        account_information_account_name_2->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        account_information_password_2 = new QLabel(Edit_information_screen);
        account_information_password_2->setObjectName(QStringLiteral("account_information_password_2"));
        account_information_password_2->setGeometry(QRect(30, 152, 138, 30));
        account_information_password_2->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        account_information_account_number_2 = new QLabel(Edit_information_screen);
        account_information_account_number_2->setObjectName(QStringLiteral("account_information_account_number_2"));
        account_information_account_number_2->setGeometry(QRect(30, 90, 138, 30));
        account_information_account_number_2->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        edit_account_information_line_1 = new QLineEdit(Edit_information_screen);
        edit_account_information_line_1->setObjectName(QStringLiteral("edit_account_information_line_1"));
        edit_account_information_line_1->setGeometry(QRect(168, 90, 138, 30));
        edit_account_information_line_1->setStyleSheet(QLatin1String("font: 12pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        edit_account_information_line_2 = new QLineEdit(Edit_information_screen);
        edit_account_information_line_2->setObjectName(QStringLiteral("edit_account_information_line_2"));
        edit_account_information_line_2->setGeometry(QRect(168, 121, 138, 30));
        edit_account_information_line_2->setStyleSheet(QLatin1String("font: 12pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        edit_account_information_line_3 = new QLineEdit(Edit_information_screen);
        edit_account_information_line_3->setObjectName(QStringLiteral("edit_account_information_line_3"));
        edit_account_information_line_3->setGeometry(QRect(168, 152, 138, 30));
        edit_account_information_line_3->setStyleSheet(QLatin1String("font: 12pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        edit_account_information_return = new QPushButton(Edit_information_screen);
        edit_account_information_return->setObjectName(QStringLiteral("edit_account_information_return"));
        edit_account_information_return->setGeometry(QRect(195, 59, 80, 30));
        edit_account_information_return->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        edit_account_information_confirm = new QPushButton(Edit_information_screen);
        edit_account_information_confirm->setObjectName(QStringLiteral("edit_account_information_confirm"));
        edit_account_information_confirm->setGeometry(QRect(276, 59, 80, 30));
        edit_account_information_confirm->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        edit_account_information_report = new QLabel(Edit_information_screen);
        edit_account_information_report->setObjectName(QStringLiteral("edit_account_information_report"));
        edit_account_information_report->setGeometry(QRect(30, 183, 306, 45));
        edit_account_information_report->setStyleSheet(QLatin1String("font: 10pt \"MS Reference Sans Serif\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.006, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        edit_account_information_line_4 = new QLabel(Edit_information_screen);
        edit_account_information_line_4->setObjectName(QStringLiteral("edit_account_information_line_4"));
        edit_account_information_line_4->setGeometry(QRect(307, 90, 30, 30));
        edit_account_information_line_4->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        stackedWidget->addWidget(Edit_information_screen);
        screen_9->raise();
        credit_9->raise();
        account_information_label_2->raise();
        account_information_account_name_2->raise();
        account_information_password_2->raise();
        account_information_account_number_2->raise();
        edit_account_information_line_1->raise();
        edit_account_information_line_2->raise();
        edit_account_information_line_3->raise();
        edit_account_information_return->raise();
        edit_account_information_confirm->raise();
        edit_account_information_report->raise();
        edit_account_information_line_4->raise();
        delete_account_screen = new QWidget();
        delete_account_screen->setObjectName(QStringLiteral("delete_account_screen"));
        credit_10 = new QLabel(delete_account_screen);
        credit_10->setObjectName(QStringLiteral("credit_10"));
        credit_10->setGeometry(QRect(20, 0, 500, 90));
        credit_10->setStyleSheet(QStringLiteral(""));
        credit_10->setPixmap(QPixmap(QString::fromUtf8("UI/credit.png")));
        screen_10 = new QLabel(delete_account_screen);
        screen_10->setObjectName(QStringLiteral("screen_10"));
        screen_10->setGeometry(QRect(0, 0, 800, 450));
        screen_10->setAutoFillBackground(true);
        screen_10->setPixmap(QPixmap(QString::fromUtf8("UI/screen.png")));
        delete_account_return_button = new QPushButton(delete_account_screen);
        delete_account_return_button->setObjectName(QStringLiteral("delete_account_return_button"));
        delete_account_return_button->setGeometry(QRect(239, 59, 80, 30));
        delete_account_return_button->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        delete_account_refresh_button = new QPushButton(delete_account_screen);
        delete_account_refresh_button->setObjectName(QStringLiteral("delete_account_refresh_button"));
        delete_account_refresh_button->setEnabled(true);
        delete_account_refresh_button->setGeometry(QRect(158, 59, 80, 30));
        delete_account_refresh_button->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        delete_account_confirm = new QPushButton(delete_account_screen);
        delete_account_confirm->setObjectName(QStringLiteral("delete_account_confirm"));
        delete_account_confirm->setGeometry(QRect(320, 59, 80, 30));
        delete_account_confirm->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        delete_account_hint = new QLabel(delete_account_screen);
        delete_account_hint->setObjectName(QStringLiteral("delete_account_hint"));
        delete_account_hint->setGeometry(QRect(30, 90, 160, 30));
        delete_account_hint->setStyleSheet(QLatin1String("font: 25 16pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        delete_account_report = new QLabel(delete_account_screen);
        delete_account_report->setObjectName(QStringLiteral("delete_account_report"));
        delete_account_report->setGeometry(QRect(30, 121, 370, 45));
        delete_account_report->setStyleSheet(QLatin1String("font: 14pt \"MS Reference Sans Serif\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.006, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        delete_account_label = new QLabel(delete_account_screen);
        delete_account_label->setObjectName(QStringLiteral("delete_account_label"));
        delete_account_label->setGeometry(QRect(30, 71, 101, 19));
        delete_account_label->setStyleSheet(QLatin1String("font: 75 11pt \"MS Shell Dlg 2\";\n"
"color: rgb(76, 255, 255);\n"
"alternate-background-color: rgb(4, 168, 217);\n"
"selection-color: rgb(10, 69, 127);\n"
"background-color: qlineargradient(spread:pad, x1:0.25, y1:0.528682, x2:1, y2:0.551, stop:0 rgba(7, 56, 99, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        delete_account_line = new QLineEdit(delete_account_screen);
        delete_account_line->setObjectName(QStringLiteral("delete_account_line"));
        delete_account_line->setGeometry(QRect(190, 90, 210, 30));
        delete_account_line->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        delete_account_line_2 = new QLabel(delete_account_screen);
        delete_account_line_2->setObjectName(QStringLiteral("delete_account_line_2"));
        delete_account_line_2->setGeometry(QRect(401, 90, 30, 30));
        delete_account_line_2->setStyleSheet(QLatin1String("font: 14pt \"Microsoft YaHei\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        stackedWidget->addWidget(delete_account_screen);
        screen_10->raise();
        credit_10->raise();
        delete_account_return_button->raise();
        delete_account_refresh_button->raise();
        delete_account_confirm->raise();
        delete_account_hint->raise();
        delete_account_report->raise();
        delete_account_label->raise();
        delete_account_line->raise();
        delete_account_line_2->raise();
        atm_add_money_screen = new QWidget();
        atm_add_money_screen->setObjectName(QStringLiteral("atm_add_money_screen"));
        credit_11 = new QLabel(atm_add_money_screen);
        credit_11->setObjectName(QStringLiteral("credit_11"));
        credit_11->setGeometry(QRect(20, 0, 500, 90));
        credit_11->setStyleSheet(QStringLiteral(""));
        credit_11->setPixmap(QPixmap(QString::fromUtf8("UI/credit.png")));
        screen_11 = new QLabel(atm_add_money_screen);
        screen_11->setObjectName(QStringLiteral("screen_11"));
        screen_11->setGeometry(QRect(0, 0, 800, 450));
        screen_11->setAutoFillBackground(true);
        screen_11->setPixmap(QPixmap(QString::fromUtf8("UI/screen.png")));
        atm_add_money_currency_1 = new QPushButton(atm_add_money_screen);
        atm_add_money_currency_1->setObjectName(QStringLiteral("atm_add_money_currency_1"));
        atm_add_money_currency_1->setGeometry(QRect(30, 121, 100, 100));
        atm_add_money_currency_1->setStyleSheet(QLatin1String("font: 25 24pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        atm_add_money_currency_2 = new QPushButton(atm_add_money_screen);
        atm_add_money_currency_2->setObjectName(QStringLiteral("atm_add_money_currency_2"));
        atm_add_money_currency_2->setGeometry(QRect(131, 121, 100, 100));
        atm_add_money_currency_2->setStyleSheet(QLatin1String("font: 25 24pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        atm_add_money_currency_3 = new QPushButton(atm_add_money_screen);
        atm_add_money_currency_3->setObjectName(QStringLiteral("atm_add_money_currency_3"));
        atm_add_money_currency_3->setGeometry(QRect(232, 121, 100, 100));
        atm_add_money_currency_3->setStyleSheet(QLatin1String("font: 25 24pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        atm_add_money_currency_4 = new QPushButton(atm_add_money_screen);
        atm_add_money_currency_4->setObjectName(QStringLiteral("atm_add_money_currency_4"));
        atm_add_money_currency_4->setGeometry(QRect(30, 222, 100, 100));
        atm_add_money_currency_4->setStyleSheet(QLatin1String("font: 25 24pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        atm_add_money_currency_5 = new QPushButton(atm_add_money_screen);
        atm_add_money_currency_5->setObjectName(QStringLiteral("atm_add_money_currency_5"));
        atm_add_money_currency_5->setGeometry(QRect(131, 222, 100, 100));
        atm_add_money_currency_5->setStyleSheet(QLatin1String("font: 25 24pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        atm_add_money_currency_6 = new QPushButton(atm_add_money_screen);
        atm_add_money_currency_6->setObjectName(QStringLiteral("atm_add_money_currency_6"));
        atm_add_money_currency_6->setGeometry(QRect(232, 222, 100, 100));
        atm_add_money_currency_6->setStyleSheet(QLatin1String("font: 25 24pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        label_1 = new QLabel(atm_add_money_screen);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(333, 121, 41, 30));
        label_1->setStyleSheet(QLatin1String("font: 25 13pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        label_2 = new QLabel(atm_add_money_screen);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(333, 152, 41, 30));
        label_2->setStyleSheet(QLatin1String("font: 25 13pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        label_3 = new QLabel(atm_add_money_screen);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(333, 183, 41, 30));
        label_3->setStyleSheet(QLatin1String("font: 25 13pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        label_4 = new QLabel(atm_add_money_screen);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(333, 214, 41, 30));
        label_4->setStyleSheet(QLatin1String("font: 25 13pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        label_5 = new QLabel(atm_add_money_screen);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(333, 245, 41, 30));
        label_5->setStyleSheet(QLatin1String("font: 25 13pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        label_6 = new QLabel(atm_add_money_screen);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(333, 276, 41, 30));
        label_6->setStyleSheet(QLatin1String("font: 25 13pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        label_2_1 = new QLabel(atm_add_money_screen);
        label_2_1->setObjectName(QStringLiteral("label_2_1"));
        label_2_1->setGeometry(QRect(374, 121, 50, 30));
        label_2_1->setStyleSheet(QLatin1String("font: 25 13pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        label_2_2 = new QLabel(atm_add_money_screen);
        label_2_2->setObjectName(QStringLiteral("label_2_2"));
        label_2_2->setGeometry(QRect(374, 152, 50, 30));
        label_2_2->setStyleSheet(QLatin1String("font: 25 13pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        label_2_3 = new QLabel(atm_add_money_screen);
        label_2_3->setObjectName(QStringLiteral("label_2_3"));
        label_2_3->setGeometry(QRect(374, 183, 50, 30));
        label_2_3->setStyleSheet(QLatin1String("font: 25 13pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        label_2_4 = new QLabel(atm_add_money_screen);
        label_2_4->setObjectName(QStringLiteral("label_2_4"));
        label_2_4->setGeometry(QRect(374, 214, 50, 30));
        label_2_4->setStyleSheet(QLatin1String("font: 25 13pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        label_2_5 = new QLabel(atm_add_money_screen);
        label_2_5->setObjectName(QStringLiteral("label_2_5"));
        label_2_5->setGeometry(QRect(374, 245, 50, 30));
        label_2_5->setStyleSheet(QLatin1String("font: 25 13pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        label_2_6 = new QLabel(atm_add_money_screen);
        label_2_6->setObjectName(QStringLiteral("label_2_6"));
        label_2_6->setGeometry(QRect(374, 276, 50, 30));
        label_2_6->setStyleSheet(QLatin1String("font: 25 13pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        atm_add_money_return = new QPushButton(atm_add_money_screen);
        atm_add_money_return->setObjectName(QStringLiteral("atm_add_money_return"));
        atm_add_money_return->setGeometry(QRect(333, 307, 90, 40));
        atm_add_money_return->setStyleSheet(QLatin1String("font: 25 18pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        atm_add_money_confirm = new QPushButton(atm_add_money_screen);
        atm_add_money_confirm->setObjectName(QStringLiteral("atm_add_money_confirm"));
        atm_add_money_confirm->setGeometry(QRect(333, 348, 90, 40));
        atm_add_money_confirm->setStyleSheet(QLatin1String("font: 25 18pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        atm_add_money_hint = new QLabel(atm_add_money_screen);
        atm_add_money_hint->setObjectName(QStringLiteral("atm_add_money_hint"));
        atm_add_money_hint->setGeometry(QRect(201, 323, 71, 30));
        atm_add_money_hint->setStyleSheet(QLatin1String("font: 25 17pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        atm_add_money_line = new QLineEdit(atm_add_money_screen);
        atm_add_money_line->setObjectName(QStringLiteral("atm_add_money_line"));
        atm_add_money_line->setGeometry(QRect(272, 323, 60, 30));
        atm_add_money_line->setStyleSheet(QLatin1String("font: 25 17pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        currency_hint = new QLabel(atm_add_money_screen);
        currency_hint->setObjectName(QStringLiteral("currency_hint"));
        currency_hint->setGeometry(QRect(201, 354, 131, 34));
        currency_hint->setStyleSheet(QLatin1String("font: 25 14pt \"Corbel Light\";\n"
"color: rgb(76, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.528682, x2:0.347318, y2:0.523, stop:0.4375 rgba(20, 81, 135, 255), stop:1 rgba(20, 81, 135, 255));\n"
"border:rgb(15, 110, 199);"));
        stackedWidget->addWidget(atm_add_money_screen);
        screen_11->raise();
        credit_11->raise();
        atm_add_money_currency_1->raise();
        atm_add_money_currency_2->raise();
        atm_add_money_currency_3->raise();
        atm_add_money_currency_4->raise();
        atm_add_money_currency_5->raise();
        atm_add_money_currency_6->raise();
        label_1->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_2_1->raise();
        label_2_2->raise();
        label_2_3->raise();
        label_2_4->raise();
        label_2_5->raise();
        label_2_6->raise();
        atm_add_money_return->raise();
        atm_add_money_confirm->raise();
        atm_add_money_hint->raise();
        atm_add_money_line->raise();
        currency_hint->raise();
        ATM->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ATM);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        ATM->setMenuBar(menubar);
        statusbar = new QStatusBar(ATM);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ATM->setStatusBar(statusbar);
        QWidget::setTabOrder(pushButton_login, pushButton_add_account);
        QWidget::setTabOrder(pushButton_add_account, pushButton_delete_account);
        QWidget::setTabOrder(pushButton_delete_account, pushButton_atm_add_money);
        QWidget::setTabOrder(pushButton_atm_add_money, login_account_number_line);
        QWidget::setTabOrder(login_account_number_line, password_line);
        QWidget::setTabOrder(password_line, login_login);
        QWidget::setTabOrder(login_login, login_return);
        QWidget::setTabOrder(login_return, login_password_censor);
        QWidget::setTabOrder(login_password_censor, withdraw_button);
        QWidget::setTabOrder(withdraw_button, add_money_button);
        QWidget::setTabOrder(add_money_button, transfer_money_button);
        QWidget::setTabOrder(transfer_money_button, account_information_button);
        QWidget::setTabOrder(account_information_button, edit_information_button);
        QWidget::setTabOrder(edit_information_button, logout_button);
        QWidget::setTabOrder(logout_button, add_account_number_line);
        QWidget::setTabOrder(add_account_number_line, add_account_username_line);
        QWidget::setTabOrder(add_account_username_line, add_account_password_line);
        QWidget::setTabOrder(add_account_password_line, add_account_balance_line);
        QWidget::setTabOrder(add_account_balance_line, add_account_confirm);
        QWidget::setTabOrder(add_account_confirm, add_account_return);
        QWidget::setTabOrder(add_account_return, add_account_continue);
        QWidget::setTabOrder(add_account_continue, add_account_password_censor);
        QWidget::setTabOrder(add_account_password_censor, withdraw_line);
        QWidget::setTabOrder(withdraw_line, withdraw_confirm_button);
        QWidget::setTabOrder(withdraw_confirm_button, withdraw_return_button);
        QWidget::setTabOrder(withdraw_return_button, withdraw_refresh_button);
        QWidget::setTabOrder(withdraw_refresh_button, withdraw_report_2);
        QWidget::setTabOrder(withdraw_report_2, transfer_money_account_number_line);
        QWidget::setTabOrder(transfer_money_account_number_line, transfer_money_amount_line);
        QWidget::setTabOrder(transfer_money_amount_line, transfer_money_confirm_button);
        QWidget::setTabOrder(transfer_money_confirm_button, transfer_money_return_button);
        QWidget::setTabOrder(transfer_money_return_button, transfer_money_refresh_button);
        QWidget::setTabOrder(transfer_money_refresh_button, delete_account_line);
        QWidget::setTabOrder(delete_account_line, delete_account_confirm);
        QWidget::setTabOrder(delete_account_confirm, delete_account_return_button);
        QWidget::setTabOrder(delete_account_return_button, delete_account_refresh_button);
        QWidget::setTabOrder(delete_account_refresh_button, atm_add_money_currency_1);
        QWidget::setTabOrder(atm_add_money_currency_1, atm_add_money_currency_2);
        QWidget::setTabOrder(atm_add_money_currency_2, atm_add_money_currency_3);
        QWidget::setTabOrder(atm_add_money_currency_3, atm_add_money_currency_4);
        QWidget::setTabOrder(atm_add_money_currency_4, atm_add_money_currency_5);
        QWidget::setTabOrder(atm_add_money_currency_5, atm_add_money_currency_6);
        QWidget::setTabOrder(atm_add_money_currency_6, atm_add_money_line);
        QWidget::setTabOrder(atm_add_money_line, atm_add_money_confirm);
        QWidget::setTabOrder(atm_add_money_confirm, atm_add_money_return);

        retranslateUi(ATM);

        QMetaObject::connectSlotsByName(ATM);
    } // setupUi

    void retranslateUi(QMainWindow *ATM)
    {
        ATM->setWindowTitle(QApplication::translate("ATM", "ATM", Q_NULLPTR));
        credit->setText(QString());
        pushButton_delete_account->setText(QApplication::translate("ATM", "Xo\314\201a ta\314\200i khoa\314\211n", Q_NULLPTR));
        pushButton_add_account->setText(QApplication::translate("ATM", "Ta\314\243o ta\314\200i khoa\314\211n", Q_NULLPTR));
        pushButton_atm_add_money->setText(QApplication::translate("ATM", "Na\314\243p ti\303\252\314\200n cho ma\314\201y", Q_NULLPTR));
        pushButton_login->setText(QApplication::translate("ATM", "\304\220\304\203ng nh\303\242\314\243p", Q_NULLPTR));
        screen->setText(QString());
        main_screen_label->setText(QApplication::translate("ATM", " Ma\314\200n hi\314\200nh chi\314\201nh", Q_NULLPTR));
        pushButton_atm_quit->setText(QApplication::translate("ATM", "L\306\260u d\306\260\314\203 li\303\252\314\243u va\314\200 thoa\314\201t", Q_NULLPTR));
        screen_2->setText(QString());
        credit_2->setText(QString());
        login_account_number->setText(QApplication::translate("ATM", " S\303\264\314\201 ta\314\200i khoa\314\211n           :", Q_NULLPTR));
        login_password->setText(QApplication::translate("ATM", " M\303\242\314\243t kh\303\242\314\211u                 :", Q_NULLPTR));
        login_login->setText(QApplication::translate("ATM", "Nh\303\242\314\243p", Q_NULLPTR));
        login_return->setText(QApplication::translate("ATM", "Quay la\314\243i", Q_NULLPTR));
        input_account_number_report->setText(QString());
        input_password_report->setText(QString());
        login_label->setText(QApplication::translate("ATM", " \304\220\304\203ng nh\303\242\314\243p", Q_NULLPTR));
        login_password_censor->setText(QApplication::translate("ATM", "\342\234\224", Q_NULLPTR));
        login_account_number_line_2->setText(QString());
        credit_3->setText(QString());
        screen_3->setText(QString());
        logged_in_label->setText(QApplication::translate("ATM", " Cho\314\243n ha\314\200nh \304\221\303\264\314\243ng", Q_NULLPTR));
        withdraw_button->setText(QApplication::translate("ATM", "Ru\314\201t ti\303\252\314\200n", Q_NULLPTR));
        transfer_money_button->setText(QApplication::translate("ATM", "Chuy\303\252\314\211n ti\303\252\314\200n", Q_NULLPTR));
        account_information_button->setText(QApplication::translate("ATM", "Xem th\303\264ng tin", Q_NULLPTR));
        edit_information_button->setText(QApplication::translate("ATM", "S\306\260\314\211a th\303\264ng tin", Q_NULLPTR));
        logout_button->setText(QApplication::translate("ATM", "\304\220\304\203ng xu\303\242\314\201t", Q_NULLPTR));
        add_money_button->setText(QApplication::translate("ATM", "Na\314\243p ti\303\252\314\200n", Q_NULLPTR));
        credit_4->setText(QString());
        screen_4->setText(QString());
        add_account_number->setText(QApplication::translate("ATM", " S\303\264\314\201 ta\314\200i khoa\314\211n           :", Q_NULLPTR));
        add_account_label->setText(QApplication::translate("ATM", " Ta\314\243o ta\314\200i khoa\314\211n", Q_NULLPTR));
        add_account_username->setText(QApplication::translate("ATM", "  T\303\252n ta\314\200i khoa\314\211n        :", Q_NULLPTR));
        add_account_account_number_report->setText(QString());
        add_account_username_report->setText(QString());
        add_account_password_report->setText(QString());
        add_account_password->setText(QApplication::translate("ATM", "  M\303\242\314\243t kh\303\242\314\211u                :", Q_NULLPTR));
        add_account_confirm->setText(QApplication::translate("ATM", "Nh\303\242\314\243p", Q_NULLPTR));
        add_account_return->setText(QApplication::translate("ATM", "Quay la\314\243i", Q_NULLPTR));
        add_account_final_report->setText(QString());
        add_account_continue->setText(QApplication::translate("ATM", "La\314\200m m\306\241\314\201i", Q_NULLPTR));
        add_account_balance_report->setText(QString());
        add_account_password_2->setText(QApplication::translate("ATM", "  S\303\264\314\201 ti\303\252\314\200n                     :", Q_NULLPTR));
        add_account_password_censor->setText(QApplication::translate("ATM", "\342\234\224", Q_NULLPTR));
        add_account_account_number_report_2->setText(QString());
        add_account_balance_report_2->setText(QString());
        credit_5->setText(QString());
        screen_5->setText(QString());
        withdraw_report->setText(QString());
        withdraw_hint->setText(QApplication::translate("ATM", "  S\303\264\314\201 ti\303\252\314\200n mu\303\264\314\201n ru\314\201t :", Q_NULLPTR));
        withdraw_label->setText(QApplication::translate("ATM", " Ru\314\201t ti\303\252\314\200n", Q_NULLPTR));
        withdraw_line_2->setText(QString());
        withdraw_refresh_button->setText(QApplication::translate("ATM", "La\314\200m m\306\241\314\201i", Q_NULLPTR));
        withdraw_return_button->setText(QApplication::translate("ATM", "Quay la\314\243i", Q_NULLPTR));
        withdraw_confirm_button->setText(QApplication::translate("ATM", "Nh\303\242\314\243p", Q_NULLPTR));
        withdraw_report_2->setHtml(QApplication::translate("ATM", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Reference Sans Serif'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        credit_6->setText(QString());
        screen_6->setText(QString());
        add_money_return->setText(QApplication::translate("ATM", "Quay la\314\243i", Q_NULLPTR));
        add_money_refresh->setText(QApplication::translate("ATM", "La\314\200m m\306\241\314\201i", Q_NULLPTR));
        add_money_confirm->setText(QApplication::translate("ATM", "Nh\303\242\314\243p", Q_NULLPTR));
        add_money_hint->setText(QApplication::translate("ATM", "  S\303\264\314\201 ti\303\252\314\200n mu\303\264\314\201n na\314\243p :", Q_NULLPTR));
        add_money_label->setText(QApplication::translate("ATM", " Na\314\243p ti\303\252\314\200n", Q_NULLPTR));
        add_money_line_2->setText(QString());
        add_money_report->setText(QString());
        credit_7->setText(QString());
        screen_7->setText(QString());
        transfer_money_return_button->setText(QApplication::translate("ATM", "Quay la\314\243i", Q_NULLPTR));
        transfer_money_confirm_button->setText(QApplication::translate("ATM", "Nh\303\242\314\243p", Q_NULLPTR));
        transfer_money_refresh_button->setText(QApplication::translate("ATM", "La\314\200m m\306\241\314\201i", Q_NULLPTR));
        transfer_money_account_number->setText(QApplication::translate("ATM", "  S\303\264\314\201 ta\314\200i khoa\314\211n ng\306\260\306\241\314\200i nh\303\242\314\243n :", Q_NULLPTR));
        transfer_money_label->setText(QApplication::translate("ATM", " Chuy\303\252\314\211n ti\303\252\314\200n", Q_NULLPTR));
        transfer_money_account_number_report->setText(QString());
        transfer_money_account_number_line_2->setText(QString());
        transfer_money_money->setText(QApplication::translate("ATM", " S\303\264\314\201 ti\303\252\314\200n mu\303\264\314\201n chuy\303\252\314\211n        :", Q_NULLPTR));
        transfer_money_amount_line->setText(QString());
        transfer_money_amount_report->setText(QString());
        transfer_money_amount_line_2->setText(QString());
        transfer_money_final_report->setText(QString());
        credit_8->setText(QString());
        screen_8->setText(QString());
        account_information_return->setText(QApplication::translate("ATM", "Quay la\314\243i", Q_NULLPTR));
        account_information_account_number->setText(QApplication::translate("ATM", "  S\303\264\314\201 ta\314\200i khoa\314\211n     :", Q_NULLPTR));
        account_information_label->setText(QApplication::translate("ATM", " Th\303\264ng tin ta\314\200i khoa\314\211n", Q_NULLPTR));
        account_information_account_name->setText(QApplication::translate("ATM", "  T\303\252n ta\314\200i khoa\314\211n   :", Q_NULLPTR));
        account_information_password->setText(QApplication::translate("ATM", "  M\303\242\314\243t kh\303\242\314\211u           :", Q_NULLPTR));
        account_information_balance->setText(QApplication::translate("ATM", "  S\303\264\314\201 ti\303\252\314\200n                :", Q_NULLPTR));
        account_information_line_1->setText(QString());
        account_information_line_2->setText(QString());
        account_information_line_3->setText(QString());
        account_information_line_4->setText(QString());
        credit_9->setText(QString());
        screen_9->setText(QString());
        account_information_label_2->setText(QApplication::translate("ATM", " S\306\260\314\211a th\303\264ng tin ta\314\200i khoa\314\211n", Q_NULLPTR));
        account_information_account_name_2->setText(QApplication::translate("ATM", "  T\303\252n ta\314\200i khoa\314\211n   :", Q_NULLPTR));
        account_information_password_2->setText(QApplication::translate("ATM", "  M\303\242\314\243t kh\303\242\314\211u           :", Q_NULLPTR));
        account_information_account_number_2->setText(QApplication::translate("ATM", "  S\303\264\314\201 ta\314\200i khoa\314\211n     :", Q_NULLPTR));
        edit_account_information_return->setText(QApplication::translate("ATM", "Quay la\314\243i", Q_NULLPTR));
        edit_account_information_confirm->setText(QApplication::translate("ATM", "Nh\303\242\314\243p", Q_NULLPTR));
        edit_account_information_report->setText(QString());
        edit_account_information_line_4->setText(QString());
        credit_10->setText(QString());
        screen_10->setText(QString());
        delete_account_return_button->setText(QApplication::translate("ATM", "Quay la\314\243i", Q_NULLPTR));
        delete_account_refresh_button->setText(QApplication::translate("ATM", "La\314\200m m\306\241\314\201i", Q_NULLPTR));
        delete_account_confirm->setText(QApplication::translate("ATM", "Nh\303\242\314\243p", Q_NULLPTR));
        delete_account_hint->setText(QApplication::translate("ATM", "  S\303\264\314\201 ta\314\200i khoa\314\211n          :", Q_NULLPTR));
        delete_account_report->setText(QString());
        delete_account_label->setText(QApplication::translate("ATM", " Xo\314\201a ta\314\200i khoa\314\211n", Q_NULLPTR));
        delete_account_line_2->setText(QString());
        credit_11->setText(QString());
        screen_11->setText(QString());
        atm_add_money_currency_1->setText(QApplication::translate("ATM", "10k", Q_NULLPTR));
        atm_add_money_currency_2->setText(QApplication::translate("ATM", "20k", Q_NULLPTR));
        atm_add_money_currency_3->setText(QApplication::translate("ATM", "50k", Q_NULLPTR));
        atm_add_money_currency_4->setText(QApplication::translate("ATM", "100k", Q_NULLPTR));
        atm_add_money_currency_5->setText(QApplication::translate("ATM", "200k", Q_NULLPTR));
        atm_add_money_currency_6->setText(QApplication::translate("ATM", "500k", Q_NULLPTR));
        label_1->setText(QApplication::translate("ATM", "  10k :", Q_NULLPTR));
        label_2->setText(QApplication::translate("ATM", "  20k :", Q_NULLPTR));
        label_3->setText(QApplication::translate("ATM", "  50k :", Q_NULLPTR));
        label_4->setText(QApplication::translate("ATM", " 100k:", Q_NULLPTR));
        label_5->setText(QApplication::translate("ATM", " 200k:", Q_NULLPTR));
        label_6->setText(QApplication::translate("ATM", " 500k:", Q_NULLPTR));
        label_2_1->setText(QString());
        label_2_2->setText(QString());
        label_2_3->setText(QString());
        label_2_4->setText(QString());
        label_2_5->setText(QString());
        label_2_6->setText(QString());
        atm_add_money_return->setText(QApplication::translate("ATM", "Quay la\314\243i", Q_NULLPTR));
        atm_add_money_confirm->setText(QApplication::translate("ATM", "Nh\303\242\314\243p", Q_NULLPTR));
        atm_add_money_hint->setText(QApplication::translate("ATM", "  S\303\264\314\201 t\306\241\314\200 :", Q_NULLPTR));
        currency_hint->setText(QApplication::translate("ATM", "  M\303\252\314\243nh gia\314\201 :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ATM: public Ui_ATM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATM_H
