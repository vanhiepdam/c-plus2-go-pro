#include "atm.h"
#include "ui_atm.h"
#include "dialog.h"
#include "ui_dialog.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <QMessageBox>
#include <QPixmap>
#include <QApplication>
#include <QLabel>
#include <QtCore>
#include <QGraphicsView>
#include <QTextEdit>
#include <QColor>
#include <QString>
#include <QIntValidator>
#include <QApplication>
#include <QLineEdit>
#include <QFile>
#include <QTextStream>
#include <string>

using namespace std;

ATM::ATM(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ATM)
{
    ui->setupUi(this);
    QPixmap mainScreen("C:/Users/thienha/Desktop/Exams/c-plus2-go-pro/ATM/ATM/UI/screen.png");
    QPixmap credit("C:/Users/thienha/Desktop/Exams/c-plus2-go-pro/ATM/ATM/UI/credit.png");
    ui->screen->setPixmap(mainScreen);
    ui->screen_2->setPixmap(mainScreen);
    ui->screen_3->setPixmap(mainScreen);
    ui->screen_4->setPixmap(mainScreen);
    ui->screen_5->setPixmap(mainScreen);
    ui->screen_6->setPixmap(mainScreen);
    ui->screen_7->setPixmap(mainScreen);
    ui->screen_8->setPixmap(mainScreen);
    ui->screen_9->setPixmap(mainScreen);
    ui->screen_10->setPixmap(mainScreen);
    ui->screen_11->setPixmap(mainScreen);
    ui->credit->setPixmap(credit.scaled(500, 90, Qt::KeepAspectRatio));
    ui->credit_2->setPixmap(credit.scaled(500, 90, Qt::KeepAspectRatio));
    ui->credit_3->setPixmap(credit.scaled(500, 90, Qt::KeepAspectRatio));
    ui->credit_4->setPixmap(credit.scaled(500, 90, Qt::KeepAspectRatio));
    ui->credit_5->setPixmap(credit.scaled(500, 90, Qt::KeepAspectRatio));
    ui->credit_6->setPixmap(credit.scaled(500, 90, Qt::KeepAspectRatio));
    ui->credit_7->setPixmap(credit.scaled(500, 90, Qt::KeepAspectRatio));
    ui->credit_8->setPixmap(credit.scaled(500, 90, Qt::KeepAspectRatio));
    ui->credit_9->setPixmap(credit.scaled(500, 90, Qt::KeepAspectRatio));
    ui->credit_10->setPixmap(credit.scaled(500, 90, Qt::KeepAspectRatio));
    ui->credit_11->setPixmap(credit.scaled(500, 90, Qt::KeepAspectRatio));
    ui->add_account_balance_line->setValidator(new QIntValidator(0, 2000000000, this));
    ui->withdraw_line->setValidator(new QIntValidator(0, 2000000000, this));
    ui->transfer_money_amount_line->setValidator(new QIntValidator(0, 2000000000, this));
    ui->atm_add_money_line->setValidator(new QIntValidator(0, 1000, this));
    ui->add_account_password_line->setEchoMode(QLineEdit::Password);
    ui->password_line->setEchoMode(QLineEdit::Password);
    this->setFixedSize(800,450);
}
static inline void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int ch) {
        return !std::isspace(ch);
    }));
}

// trim from end (in place)
static inline void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](int ch) {
        return !std::isspace(ch);
    }).base(), s.end());
}

// trim from both ends (in place)
static inline void trim(std::string &s) {
    ltrim(s);
    rtrim(s);
}

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

ATM::~ATM()
{
    delete ui;
}

class Account {
    private:
        string name;
        string password;
        long long balance;
        long long acc_number;
    public:
        Account* next = NULL;
        Account* prev = NULL;
        Account(const string &c1, const string &c2, const long long &c3, const long long &c4) {
            this->name = c1;
            this->password = c2;
            this->balance = c3;
            this->acc_number = c4;
        }
        void set_name(string c1) {
            this->name = c1;
        }
        void add_money(long long c1) {
            this->balance += c1;
        }
        void set_acc_number(long long c1) {
            this->acc_number  = c1;
        }
        long long get_acc_number() {
            return this->acc_number;
        }
        long long get_balance() {
            return this->balance;
        }
        string get_password() {
            trim(this->password);
            return this->password;
        }
        void decrease(long long c1) {
            this->balance -= c1;
        }
        string get_username() {
            return this->name;
        }
        void set_password(const string &c1) {
            this->password = c1;
        }
};

class ATMSystem {
    private:
        unsigned int tenkDong = 0;
        unsigned int twentykDong = 0;
        unsigned int fiftykDong = 0;
        unsigned int one_hundredkDong = 0;
        unsigned int two_hundredkDong = 0;
        unsigned int five_hundredkDong = 0;
    public:
        Account* head = NULL;
        void new_account(const string &input_name, const string &input_password, const long long &input_account_number,const long long &input_balance) {
            Account* n = new Account(input_name, input_password, input_balance, input_account_number);
            if(head != NULL) {
                head->prev = n;
            }
            n->next = (this->head);
            (this->head) = n;
        }
        bool delete_account(const long long &input_account_number) {
            Account* to_delete = NULL;
            bool account_number_existed = false;
            for(Account* check_for_account_number = head; check_for_account_number != NULL; check_for_account_number = check_for_account_number->next) {
                if(check_for_account_number->get_acc_number() == input_account_number) {
                    account_number_existed = true;
                    to_delete = check_for_account_number;
                }
            }
            if(account_number_existed == false) {
                return false;
            } else {
                if(to_delete == head) {
                    if(head->next == NULL) {
                        delete head;
                        head = NULL;
                    } else {
                        (this->head)->next->prev = (this->head);
                        (this->head) = (this->head)->next;
                        delete (this->head)->prev;
                        (this->head)->prev = NULL;
                    }
                } else {
                    to_delete->prev->next = to_delete->next;
                    if(to_delete->next != NULL) {
                        to_delete->next->prev = to_delete->prev;
                    }
                    delete to_delete;
                }
            }
            return true;
        }
        int withdraw(Account* &c1, long long amount) {
            long long input_withdraw_clone = amount;
            vector<unsigned int> system_bills_clone { this->five_hundredkDong, this->two_hundredkDong, this->one_hundredkDong, this->fiftykDong, this->twentykDong, this->tenkDong };
            vector<unsigned int> bills_to_withdraw(6, 0);
            if(amount % 10000 == 0) {
                if(c1->get_balance() >= amount) {
                    while(amount >= 500000 && system_bills_clone.at(0) > 0) {
                        amount -= 500000;
                        system_bills_clone.at(0)--;
                        bills_to_withdraw.at(0)++;
                    }
                    while(amount >= 200000 && system_bills_clone.at(1) > 0) {
                        amount -= 200000;
                        system_bills_clone.at(1)--;
                        bills_to_withdraw.at(1)++;
                    }
                    while(amount >= 100000 && system_bills_clone.at(2) > 0) {
                        amount -= 100000;
                        system_bills_clone.at(2)--;
                        bills_to_withdraw.at(2)++;
                    }
                    while(amount >= 50000 && system_bills_clone.at(3) > 0) {
                        amount -= 50000;
                        system_bills_clone.at(3)--;
                        bills_to_withdraw.at(3)++;
                    }
                    while(amount >= 20000 && system_bills_clone.at(4) > 0) {
                        amount -= 20000;
                        system_bills_clone.at(4)--;
                        bills_to_withdraw.at(4)++;
                    }
                    while(amount >= 10000 && system_bills_clone.at(5) > 0) {
                        amount -= 10000;
                        system_bills_clone.at(5)--;
                        bills_to_withdraw.at(5)++;
                    }
                    if(amount == 0) {
                        while(bills_to_withdraw.at(0) > 0) {
                            this->five_hundredkDong--;
                            bills_to_withdraw.at(0)--;
                        }
                        while(bills_to_withdraw.at(1) > 0) {
                            this->two_hundredkDong--;
                            bills_to_withdraw.at(1)--;
                        }
                        while(bills_to_withdraw.at(2) > 0) {
                            this->one_hundredkDong--;
                            bills_to_withdraw.at(2)--;
                        }
                        while(bills_to_withdraw.at(3) > 0) {
                            this->fiftykDong--;
                            bills_to_withdraw.at(3)--;
                        }
                        while(bills_to_withdraw.at(4) > 0) {
                            this->twentykDong--;
                            bills_to_withdraw.at(4)--;
                        }
                        while(bills_to_withdraw.at(5) > 0) {
                            this->tenkDong--;
                            bills_to_withdraw.at(5)--;
                        }
                        c1->decrease(input_withdraw_clone);
                        return 0;
                    } else {
                        return 1;
                        // error: rút tiền thất bại
                        // lý do: máy ATM không có đủ tiền để rút
                    }
                } else {
                    return 2;
                    // error: rút tiền thất bại
                    // lý do: số tiền muốn rút lớn hơn số tiền trong tài khoản
                }
            } else {
                return 3;
                // error: rút tiền thất bại
                // lý do: số tiền muốn rút không chia hết cho 10000Đ
            }
        }
        int transfer_money(Account* &c1, long long &receiver_account_number, long long &transfer_amount) {
            bool receiver_account_number_exist = false;
            if(transfer_amount < c1->get_balance()) {
                for(Account* receiver = head; receiver != NULL; receiver = receiver->next) {
                    if(receiver->get_acc_number() == receiver_account_number) {
                        receiver_account_number_exist = true;
                        c1->decrease(transfer_amount);
                        receiver->add_money(transfer_amount);
                        return 0;
                    }
                }
                if(receiver_account_number_exist != true) {
                    return 1;
                    // error: chuyển tiền thất bại
                    // lý do: số tài khoản người nhận không tồn tại
                }
            } else {
                return 2;
                // error: chuyển tiền thất bại
                // lý do: số tiền muốn chuyển lớn hơn số tiền trong tài khoản
            }
            return 1000;
        }
        unsigned int get_bills_one() {
            return this->tenkDong;
        }
        unsigned int get_bills_two() {
            return this->twentykDong;
        }
        unsigned int get_bills_three() {
            return this->fiftykDong;
        }
        unsigned int get_bills_four() {
            return this->one_hundredkDong;
        }
        unsigned int get_bills_five() {
            return this->two_hundredkDong;
        }
        unsigned int get_bills_six() {
            return this->five_hundredkDong;
        }
        void add_bills_one(const unsigned int &c1) {
            this->tenkDong += c1;
        }
        void add_bills_two(const unsigned int &c1) {
            this->twentykDong += c1;
        }
        void add_bills_three(const unsigned int &c1) {
            this->fiftykDong += c1;
        }
        void add_bills_four(const unsigned int &c1) {
            this->one_hundredkDong += c1;
        }
        void add_bills_five(const unsigned int &c1) {
            this->two_hundredkDong += c1;
        }
        void add_bills_six(const unsigned int &c1) {
            this->five_hundredkDong += c1;
        }
};

ATMSystem atm_system;
Account* logged_account;
int selected_currency;
//nut dang nhap
void ATM::on_pushButton_login_clicked() {
    ui->stackedWidget->setCurrentIndex(1);
}
//nut tao tai khoan
void ATM::on_pushButton_add_account_clicked() {
    ui->stackedWidget->setCurrentIndex(3);
}
//nut xoa tai khoan
void ATM::on_pushButton_delete_account_clicked() {
    ui->stackedWidget->setCurrentIndex(9);
}
//nut nap tien cho atm
void ATM::on_pushButton_atm_add_money_clicked() {
    ui->stackedWidget->setCurrentIndex(10);
    QString qstring_atm_money_one = QString::number(atm_system.get_bills_one());
    QString qstring_atm_money_two = QString::number(atm_system.get_bills_two());
    QString qstring_atm_money_three = QString::number(atm_system.get_bills_three());
    QString qstring_atm_money_four = QString::number(atm_system.get_bills_four());
    QString qstring_atm_money_five = QString::number(atm_system.get_bills_five());
    QString qstring_atm_money_six = QString::number(atm_system.get_bills_six());
    ui->label_2_1->setText(qstring_atm_money_one);
    ui->label_2_2->setText(qstring_atm_money_two);
    ui->label_2_3->setText(qstring_atm_money_three);
    ui->label_2_4->setText(qstring_atm_money_four);
    ui->label_2_5->setText(qstring_atm_money_five);
    ui->label_2_6->setText(qstring_atm_money_six);
}
//nut luu du lieu va thoat
void ATM::on_pushButton_atm_quit_clicked() {
    QFile file("data.txt");
    file.open(QFile::WriteOnly | QFile::Text);
    QTextStream out(&file);
    int number_of_accounts = 0;
    out << atm_system.get_bills_one() << ',' << atm_system.get_bills_two() << ',' << atm_system.get_bills_three() << ',' << atm_system.get_bills_four() << ',' << atm_system.get_bills_five() << ',' << atm_system.get_bills_six() << ',' << endl;
    for(Account* to_save = atm_system.head; to_save != NULL; to_save = to_save->next) {
        number_of_accounts++;
    }
    if(number_of_accounts == 0) {
        out << 0 << endl;
    } else {
        out << number_of_accounts << endl;
    }
    for(Account* to_save = atm_system.head; to_save != NULL; to_save = to_save->next) {
        QString out_username = QString::fromStdString(to_save->get_username());
        QString out_password = QString::fromStdString(to_save->get_password());
        out << to_save->get_acc_number() << ',' << out_username << ',' << out_password << ',' << to_save->get_balance() << ',' << endl;
    }
    file.close();
    QApplication::quit();
}
//nut nhap man hinh dang nhap
void ATM::on_login_login_clicked() {
    vector<bool> login_condition(2, false);
    bool account_number_exist = false;
    QString input_account_number = ui->login_account_number_line->text();
    long long account_number = input_account_number.toLongLong();
    QString qstring_input_password = ui->password_line->text();
    string input_password = qstring_input_password.toStdString();
    Account* logging_in_account;
    for(Account* check_for_account_number = atm_system.head;check_for_account_number != NULL; check_for_account_number = check_for_account_number->next) {
        if(check_for_account_number->get_acc_number() == account_number) {
            logging_in_account = check_for_account_number;
            account_number_exist = true;
            login_condition.at(0) = true;
            ui->input_account_number_report->setText("");
            trim(input_password);
            if(input_password.empty() == false) {
                if(check_for_account_number->get_password() == input_password) {
                    login_condition.at(1) = true;
                    ui->input_password_report->setText("");
                } else {
                    string s = check_for_account_number->get_password();
                    QString password = QString::fromStdString(s);
                    password = password.length();
                    ui->input_password_report->setText(password);
                    ui->input_password_report->setText(" Lỗi: sai mật khẩu");
                }
            }
        } else {
            ui->input_account_number_report->setText("");
        }
    }
    if(account_number_exist == false) {
        ui->input_account_number_report->setText(" Lỗi: số tài khoản không tồn tại");
        ui->input_password_report->setText(" Lỗi: số tài khoản không tồn tại");
    }
    if(login_condition.at(0) == true && login_condition.at(1) == true) {
        logged_account = logging_in_account;
        ui->login_account_number_line->setText("");
        ui->password_line->setText("");
        ui->stackedWidget->setCurrentIndex(2);
    }
}
// phim nhap man hinh tao tai khoan
void ATM::on_add_account_confirm_clicked() {
    vector<bool> new_account_condition(4, false);
    QString input_account_number = ui->add_account_number_line->text();
    long long account_number = input_account_number.toLongLong();
    new_account_condition.at(0) = true;
    ui->add_account_account_number_report->setText("");
    if(account_number < 100000000000 || account_number > 999999999999) {
        ui->add_account_account_number_report->setText(" Lỗi: số tài khoản phải có 12 số");
        new_account_condition.at(0) = false;
    }
    for(Account* check_for_account_number = atm_system.head; check_for_account_number != NULL; check_for_account_number = check_for_account_number->next) {
        if(check_for_account_number->get_acc_number() == account_number) {
            ui->add_account_account_number_report->setText(" Lỗi: số tài khoản này đã tồn tại");
            new_account_condition.at(0) = false;
        }
    }
    QString qstring_input_username = ui->add_account_username_line->text();
    QString qstring_input_password = ui->add_account_password_line->text();
    QString qstring_input_balance  = ui->add_account_balance_line->text();
    string input_username = qstring_input_username.toStdString();
    string input_password = qstring_input_password.toStdString();
    long long input_balance = qstring_input_balance.toLongLong();
    if(input_username.empty()) {
        ui->add_account_username_report->setText(" Lỗi: tên tài khoản trống");
    } else if(input_username.length() > 24) {
        ui->add_account_username_report->setText(" Lỗi: tên tài khoản quá dài");
    } else if(input_username.length() < 4) {
        ui->add_account_username_report->setText(" Lỗi: tên tài khoản quá ngắn");
    } else {
        ui->add_account_username_report->setText("");
        new_account_condition.at(1) = true;
    }
    if(input_password.empty()) {
        ui->add_account_password_report->setText(" Lỗi: mật khẩu trống");
    } else if(input_password.length() > 30) {
        ui->add_account_password_report->setText("Lỗi: mật khẩu quá dài");
    } else if(input_password.length() < 6) {
        ui->add_account_password_report->setText("Lỗi: mật khẩu quá ngắn");
    } else {
        ui->add_account_password_report->setText("");
        new_account_condition.at(2) = true;
    }
    if(input_balance < 0) {
        ui->add_account_balance_report->setText(" Lỗi: số tiền âm");
    } else if(input_balance < 100000) {
        ui->add_account_balance_report->setText(" Lỗi: số tiền quá nhỏ");
    } else if(input_balance > 2000000000) {
        ui->add_account_balance_report->setText(" Lỗi: số tiền quá lớn");
    } else if(input_balance % 10000 != 0) {
        ui->add_account_balance_report->setText(" Lỗi: số tiền phải chia hết cho 10000Đ");
    } else {
        ui->add_account_balance_report->setText("");
        new_account_condition.at(3) = true;
    }
    if(new_account_condition.at(0) == true && new_account_condition.at(1) == true && new_account_condition.at(2) == true && new_account_condition.at(3) == true) {
        ui->add_account_final_report->setText("  Tạo tài khoản thành công");
        atm_system.new_account(input_username, input_password, account_number, input_balance);
    } else {
        ui->add_account_final_report->setText("  Tạo tài khoản thất bại");
    }
}
//nut nhap man hinh rut tien
void ATM::on_withdraw_confirm_button_clicked() {
    QString qstring_money_amount = ui->withdraw_line->text();
    long long money_amount = qstring_money_amount.toLongLong();
    switch(atm_system.withdraw(logged_account, money_amount)) {
        case 0:
            ui->withdraw_report->setText(" Rút tiền thành công");
            ui->withdraw_report_2->setHtml("");
            break;
        case 1:
            ui->withdraw_report->setText("Rút tiền thất bại");
            ui->withdraw_report_2->setHtml("Lý do: Máy ATM không đủ tiền để rút");
            break;
        case 2:
            ui->withdraw_report->setText("Rút tiền thất bại");
            ui->withdraw_report_2->setHtml("Lý do: số tiền muốn rút lớn hơn số tiền trong tài khoản");
            break;
        case 3:
            ui->withdraw_report->setText("Rút tiền thất bại");
            ui->withdraw_report_2->setHtml("Lý do: số tiền muốn rút phải chia hết cho 10000Đ");
            break;
    }
}
//nut nhap man hinh chuyen tien
void ATM::on_transfer_money_confirm_button_clicked(){
    QString qstring_input_account_number = ui->transfer_money_account_number_line->text();
    QString qstring_input_amount = ui->transfer_money_amount_line->text();
    long long input_account_number = qstring_input_account_number.toLongLong();
    long long input_amount = qstring_input_amount.toLongLong();
    if(input_amount % 10000 == 0) {
        switch(atm_system.transfer_money(logged_account, input_account_number, input_amount)) {
            case 0:
                ui->transfer_money_amount_report->setText("");
                ui->transfer_money_final_report->setText("Chuyển tiền thành công");
                break;
            case 1:
                ui->transfer_money_amount_report->setText("Lỗi: số tài khoản người nhận không tồn tại");
                ui->transfer_money_final_report->setText("Chuyển tiền thất bại");
                break;
            case 2:
                ui->transfer_money_amount_report->setText("Lỗi: số tiền muốn chuyển lớn hơn số tiền trong tài khoản");
                ui->transfer_money_final_report->setText("Chuyển tiền thất bại");
                break;
        }
    } else {
        ui->transfer_money_amount_report->setText("Lỗi: số tiền phải chia hết cho 10000Đ");
        ui->transfer_money_final_report->setText("Chuyển tiền thất bại");
    }
}
//nut nhap man hinh xoa tai khoan
void ATM::on_delete_account_confirm_clicked() {
    QString qstring_input_account_number = ui->delete_account_line->text();
    long long input_account_number = qstring_input_account_number.toLongLong();
    if(atm_system.delete_account(input_account_number)) {
        ui->delete_account_report->setText(" Xóa tài khoản thành công");
    } else {
        ui->delete_account_report->setText(" Số tài khoản nhập vào không tồn tại");
    }
}
//nut nhap man hinh them tien may atm
void ATM::on_atm_add_money_confirm_released() {
    QString qstring_input_bills = ui->atm_add_money_line->text();
    unsigned int input_bills = qstring_input_bills.toUInt();
    switch(selected_currency) {
        case 0:
            break;
        case 1:
            atm_system.add_bills_one(input_bills);
            break;
        case 2:
            atm_system.add_bills_two(input_bills);
            break;
        case 3:
            atm_system.add_bills_three(input_bills);
            break;
        case 4:
            atm_system.add_bills_four(input_bills);
            break;
        case 5:
            atm_system.add_bills_five(input_bills);
            break;
        case 6:
            atm_system.add_bills_six(input_bills);
            break;
    }
    QString qstring_atm_money_one = QString::number(atm_system.get_bills_one());
    QString qstring_atm_money_two = QString::number(atm_system.get_bills_two());
    QString qstring_atm_money_three = QString::number(atm_system.get_bills_three());
    QString qstring_atm_money_four = QString::number(atm_system.get_bills_four());
    QString qstring_atm_money_five = QString::number(atm_system.get_bills_five());
    QString qstring_atm_money_six = QString::number(atm_system.get_bills_six());
    ui->label_2_1->setText(qstring_atm_money_one);
    ui->label_2_2->setText(qstring_atm_money_two);
    ui->label_2_3->setText(qstring_atm_money_three);
    ui->label_2_4->setText(qstring_atm_money_four);
    ui->label_2_5->setText(qstring_atm_money_five);
    ui->label_2_6->setText(qstring_atm_money_six);
}
//nut nhap man hinh nap tien
void ATM::on_add_money_confirm_clicked() {
    QString qstring_input_amount = ui->add_money_line->text();
    long long input_amount = qstring_input_amount.toLongLong();
    if(input_amount % 10000 == 0) {
        logged_account->add_money(input_amount);
        ui->add_money_report->setText(" Nạp tiền thành công");
    } else {
        ui->add_money_report->setText(" Số tiền phải chia hết cho 10000Đ");
    }
}
//nut nhap man hinh sua thong tin tai khoan
void ATM::on_edit_account_information_confirm_clicked() {
    QString qstring_input_account_number   = ui->edit_account_information_line_1->text();
    QString qstring_input_account_username = ui->edit_account_information_line_2->text();
    QString qstring_input_account_password = ui->edit_account_information_line_3->text();
    long long input_account_number = qstring_input_account_number.toLongLong();
    string input_account_username = qstring_input_account_username.toStdString();
    string input_account_password = qstring_input_account_password.toStdString();
    if(input_account_number < 100000000000 || input_account_number > 999999999999) {
        ui->edit_account_information_report->setText(" Lỗi: số tài khoản phải có 12 số");
    } else if(input_account_username.length() < 4) {
            ui->edit_account_information_report->setText(" Lỗi: tên tài khoản quá ngắn");
        } else if(input_account_username.length() < 6) {
                ui->edit_account_information_report->setText(" Lỗi: mật khẩu quá ngắn");
            } else {
                ui->edit_account_information_report->setText("");
                logged_account->set_acc_number(input_account_number);
                logged_account->set_name(input_account_username);
                logged_account->set_password(input_account_password);
            }
}
//nut quay lai man hinh dang nhap
void ATM::on_login_return_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
    ui->input_account_number_report->setText("");
    ui->input_password_report->setText("");
    ui->login_account_number_line->setText("");
    ui->password_line->setText("");
}
//nut quay lai man hinh tao tai khoan
void ATM::on_add_account_return_clicked() {
    ui->add_account_number_line->setText("");
    ui->add_account_username_line->setText("");
    ui->add_account_password_line->setText("");
    ui->add_account_balance_line->setText("");
    ui->add_account_account_number_report->setText("");
    ui->add_account_username_report->setText("");
    ui->add_account_password_report->setText("");
    ui->add_account_balance_report->setText("");
    ui->add_account_final_report->setText("");
    ui->stackedWidget->setCurrentIndex(0);
}
//nut quay lai man hinh rut tien
void ATM::on_withdraw_return_button_clicked() {
    ui->withdraw_report->setText("");
    ui->withdraw_report_2->setText("");
    ui->withdraw_line->setText("");
    ui->stackedWidget->setCurrentIndex(2);
}
//nut quay lai man hinh chuyen tien
void ATM::on_transfer_money_return_button_clicked() {
    ui->transfer_money_account_number_line->setText("");
    ui->transfer_money_account_number_report->setText("");
    ui->transfer_money_amount_line->setText("");
    ui->transfer_money_amount_report->setText("");
    ui->transfer_money_final_report->setText("");
    ui->stackedWidget->setCurrentIndex(2);
}
//nut quay lai man hinh xoa tai khoan
void ATM::on_delete_account_return_button_clicked() {
    ui->delete_account_line->setText("");
    ui->delete_account_report->setText("");
    ui->stackedWidget->setCurrentIndex(0);
}
//nut quay lai man hinh them tien atm
void ATM::on_atm_add_money_return_clicked() {
    selected_currency = 0;
    ui->currency_hint->setText("  Mệnh giá :");
    ui->atm_add_money_line->setText("");
    ui->stackedWidget->setCurrentIndex(0);
}
//nut quay lai man hinh nap tien
void ATM::on_add_money_return_clicked() {
    ui->stackedWidget->setCurrentIndex(2);
    ui->add_money_report->setText("");
    ui->add_money_line->setText("");
}
//nut quay lai man hinh thong tin tai khoan
void ATM::on_account_information_return_clicked() {
    ui->stackedWidget->setCurrentIndex(2);
}
//nut quay lai man hinh sua thong tin tai khoan
void ATM::on_edit_account_information_return_clicked() {
    ui->stackedWidget->setCurrentIndex(2);
    ui->edit_account_information_line_1->setText("");
    ui->edit_account_information_line_2->setText("");
    ui->edit_account_information_line_3->setText("");
    ui->edit_account_information_line_4->setText("");
    ui->edit_account_information_report->setText("");
}
//nut lam moi man hinh tao tai khoan
void ATM::on_add_account_continue_clicked() {
    ui->add_account_number_line->setText("");
    ui->add_account_username_line->setText("");
    ui->add_account_password_line->setText("");
    ui->add_account_balance_line->setText("");
    ui->add_account_account_number_report->setText("");
    ui->add_account_username_report->setText("");
    ui->add_account_password_report->setText("");
    ui->add_account_balance_report->setText("");
    ui->add_account_final_report->setText("");
}
//nut lam moi man hinh rut tien
void ATM::on_withdraw_refresh_button_clicked() {
    ui->withdraw_report->setText("");
    ui->withdraw_line->setText("");
}
//nut lam moi man hinh chuyen tien
void ATM::on_transfer_money_refresh_button_clicked() {
    ui->transfer_money_account_number_line->setText("");
    ui->transfer_money_account_number_report->setText("");
    ui->transfer_money_amount_line->setText("");
    ui->transfer_money_amount_report->setText("");
    ui->transfer_money_final_report->setText("");
}
//nut lam moi man hinh nap tien
void ATM::on_add_money_refresh_clicked() {
    ui->add_money_line->setText("");
    ui->add_money_report->setText("");
}
//nut nut mat khau man hinh dang nhap
void ATM::on_login_password_censor_clicked() {
    if(ui->login_password_censor->text() == "✘") {
        ui->login_password_censor->setText("✔");
        ui->password_line->setEchoMode(QLineEdit::Password);
    } else {
        ui->login_password_censor->setText("✘");
        ui->password_line->setEchoMode(QLineEdit::Normal);
    }
}
//nut mat khau man hinh tao tai khoan
void ATM::on_add_account_password_censor_clicked() {
    if(ui->add_account_password_censor->text() == "✘") {
        ui->add_account_password_censor->setText("✔");
        ui->add_account_password_line->setEchoMode(QLineEdit::Password);
    } else {
        ui->add_account_password_censor->setText("✘");
        ui->add_account_password_line->setEchoMode(QLineEdit::Normal);
    }
}
//hien thi kich thuoc so tai khoan man hinh xoa tai khoan
void ATM::on_delete_account_line_textChanged(const QString &arg1) {
    if(arg1.length() < 10) {
        ui->delete_account_line_2->setText(" 0" + QString::number(arg1.length()));
    } else {
        ui->delete_account_line_2->setText(" " + QString::number(arg1.length()));
    }
}
//hien thi kich thuoc dong so tai khoan
void ATM::on_login_account_number_line_textChanged(const QString &arg1) {
    if(arg1.length() < 10) {
        ui->login_account_number_line_2->setText(" 0" + QString::number(arg1.length()));
    } else {
        ui->login_account_number_line_2->setText(" " + QString::number(arg1.length()));
    }
}
//hien thi kich thuoc so tai khoan man hinh tao tai khoan
void ATM::on_add_account_number_line_textChanged(const QString &arg1) {
    if(arg1.length() < 10) {
        ui->add_account_account_number_report_2->setText(" 0" + QString::number(arg1.length()));
    } else {
        ui->add_account_account_number_report_2->setText(" " + QString::number(arg1.length()));
    }
}
//hien thi kich thuoc so tien man hinh tao tai khoan
void ATM::on_add_account_balance_line_textChanged(const QString &arg1) {
    if(arg1.length() < 10) {
        ui->add_account_balance_report_2->setText(" 0" + QString::number(arg1.length()));
    } else {
        ui->add_account_balance_report_2->setText(" " + QString::number(arg1.length()));
    }
}
//hien thi kich thuoc so tien man hinh rut tien
void ATM::on_add_account_number_line_2_textChanged(const QString &arg1) {
    if(arg1.length() < 10) {
        ui->withdraw_line_2->setText(" 0" + QString::number(arg1.length()));
    } else {
        ui->withdraw_line_2->setText(" " + QString::number(arg1.length()));
    }
}
//hien thi kich thuoc man hinh chuyen tien
void ATM::on_transfer_money_account_number_line_textChanged(const QString &arg1) {
    if(arg1.length() < 10) {
        ui->transfer_money_account_number_line_2->setText(" 0" + QString::number(arg1.length()));
    } else {
        ui->transfer_money_account_number_line_2->setText(" " + QString::number(arg1.length()));
    }
}
//hien thi kich thuoc so tien man hinh chuyen tien
void ATM::on_transfer_money_amount_line_textChanged(const QString &arg1) {
    if(arg1.length() < 10) {
        ui->transfer_money_amount_line_2->setText(" 0" + QString::number(arg1.length()));
    } else {
        ui->transfer_money_amount_line_2->setText(" " + QString::number(arg1.length()));
    }
}
//hien thi kich thuoc so tien nap man hinh nap tien
void ATM::on_add_money_line_textChanged(const QString &arg1) {
    if(arg1.length() < 10) {
        ui->add_money_line_2->setText(" 0" + QString::number(arg1.length()));
    } else {
        ui->add_money_line_2->setText(" " + QString::number(arg1.length()));
    }
}
//hien thi kich thuoc so tai khoan man hinh sua thong tin tai khoan
void ATM::on_edit_account_information_line_1_textChanged(const QString &arg1) {
    if(arg1.length() < 10) {
        ui->edit_account_information_line_4->setText(" 0" + QString::number(arg1.length()));
    } else {
        ui->edit_account_information_line_4->setText(" " + QString::number(arg1.length()));
    }
}
//nut rut tien man hinh da dang nhap
void ATM::on_withdraw_button_clicked() {
    ui->stackedWidget->setCurrentIndex(4);
}
//nut nap tien man hinh da dang nhap
void ATM::on_add_money_button_clicked() {
    ui->stackedWidget->setCurrentIndex(5);
}
//nut chuyen khoan man hinh da dang nhap
void ATM::on_transfer_money_button_clicked() {
    ui->stackedWidget->setCurrentIndex(6);
}
//nut xem thong tin man hinh da dang nhap
void ATM::on_account_information_button_clicked() {
    ui->stackedWidget->setCurrentIndex(7);
    QString qstring_account_number = QString::number(logged_account->get_acc_number());
    QString qstring_account_balance = QString::number(logged_account->get_balance());
    QString qstring_account_password = QString::fromStdString(logged_account->get_password());
    QString qstring_account_username = QString::fromStdString(logged_account->get_username());
    ui->account_information_line_1->setText(qstring_account_number);
    ui->account_information_line_2->setText(qstring_account_username);
    ui->account_information_line_3->setText(qstring_account_password);
    ui->account_information_line_4->setText(qstring_account_balance);
}
//nut thay doi thong tin man hinh da dang nhap
void ATM::on_edit_information_button_clicked() {
    ui->stackedWidget->setCurrentIndex(8);
}
//nut dang xuat man hinh da dang nhap
void ATM::on_logout_button_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
    logged_account = NULL;
}
//nut menh gia 1 man hinh them tien atm
void ATM::on_atm_add_money_currency_1_clicked()
{
    selected_currency = 1;
    ui->currency_hint->setText("  Mệnh giá : 10k");
}
//nut menh gia 2 man hinh them tien atm
void ATM::on_atm_add_money_currency_2_clicked() {
    selected_currency = 2;
    ui->currency_hint->setText("  Mệnh giá : 20k");
}
//nut menh gia 3 man hinh them tien atm
void ATM::on_atm_add_money_currency_3_clicked() {
    selected_currency = 3;
    ui->currency_hint->setText("  Mệnh giá : 50k");
}
//nut menh gia 4 man hinh them tien atm
void ATM::on_atm_add_money_currency_4_clicked() {
    selected_currency = 4;
    ui->currency_hint->setText("  Mệnh giá : 100k");
}
//nut menh gia 5 man hinh them tien atm
void ATM::on_atm_add_money_currency_5_clicked() {
    selected_currency = 5;
    ui->currency_hint->setText("  Mệnh giá : 200k");
}
//nut menh gia 6 man hinh them tien atm
void ATM::on_atm_add_money_currency_6_clicked() {
    selected_currency = 6;
    ui->currency_hint->setText("  Mệnh giá : 500k");
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ATM w;
    w.show();
    //load du lieu khi mo chuong trinh
    QFile file("data.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream out(&file);
    vector <string> atm_money_load_string (6);
    QString qstring_atm_money_load = out.readLine();
    string atm_money_load = qstring_atm_money_load.toStdString();
    stringstream atm_money_load_sstream;
    atm_money_load_sstream << atm_money_load;
    getline(atm_money_load_sstream, atm_money_load_string.at(0), ',');
    getline(atm_money_load_sstream, atm_money_load_string.at(1), ',');
    getline(atm_money_load_sstream, atm_money_load_string.at(2), ',');
    getline(atm_money_load_sstream, atm_money_load_string.at(3), ',');
    getline(atm_money_load_sstream, atm_money_load_string.at(4), ',');
    getline(atm_money_load_sstream, atm_money_load_string.at(5), ',');
    atm_system.add_bills_one(stoul(atm_money_load_string.at(0)));
    atm_system.add_bills_two(stoul(atm_money_load_string.at(1)));
    atm_system.add_bills_three(stoul(atm_money_load_string.at(2)));
    atm_system.add_bills_four(stoul(atm_money_load_string.at(3)));
    atm_system.add_bills_five(stoul(atm_money_load_string.at(4)));
    atm_system.add_bills_six(stoul(atm_money_load_string.at(5)));
    QString qstring_number_of_accounts = out.readLine();
    int number_of_accounts = qstring_number_of_accounts.toInt();
    for(int c = number_of_accounts; c > 0;c--) {
        vector <string> account_load_string (4);
        QString qstring_account_load = out.readLine();
        string account_load = qstring_account_load.toStdString();
        stringstream account_load_sstream;
        account_load_sstream << account_load;
        getline(account_load_sstream, account_load_string.at(0), ',');
        getline(account_load_sstream, account_load_string.at(1), ',');
        getline(account_load_sstream, account_load_string.at(2), ',');
        getline(account_load_sstream, account_load_string.at(3), ',');
        long long account_number_load = stoll(account_load_string.at(0));
        string account_username_load = account_load_string.at(1);
        string account_password_load = account_load_string.at(2);
        long long account_balance_load = stoll(account_load_string.at(3));
        atm_system.new_account(account_username_load, account_password_load, account_number_load, account_balance_load);
    }
    file.close();
    return a.exec();
}
