#ifndef ATM_H
#define ATM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ATM; }
QT_END_NAMESPACE

class ATM : public QMainWindow
{
    Q_OBJECT

public:
    ATM(QWidget *parent = nullptr);
    ~ATM();

private slots:

    void on_pushButton_login_clicked();

    void on_pushButton_atm_add_money_clicked();

    void on_login_return_clicked();

    void on_login_login_clicked();

    void on_pushButton_add_account_clicked();

    void on_pushButton_delete_account_clicked();

    void on_add_account_confirm_clicked();

    void on_add_account_return_clicked();

    void on_add_account_continue_clicked();

    void on_login_password_censor_clicked();

    void on_add_account_password_censor_clicked();

    void on_logout_button_clicked();

    void on_login_account_number_line_textChanged(const QString &arg1);

    void on_add_account_number_line_textChanged(const QString &arg1);

    void on_withdraw_button_clicked();

    void on_transfer_money_button_clicked();

    void on_account_information_button_clicked();

    void on_edit_information_button_clicked();

    void on_add_account_balance_line_textChanged(const QString &arg1);

    void on_add_account_number_line_2_textChanged(const QString &arg1);

    void on_withdraw_return_button_clicked();

    void on_withdraw_refresh_button_clicked();

    void on_withdraw_confirm_button_clicked();

    void on_add_money_button_clicked();

    void on_transfer_money_refresh_button_clicked();

    void on_transfer_money_return_button_clicked();

    void on_transfer_money_confirm_button_clicked();

    void on_transfer_money_account_number_line_textChanged(const QString &arg1);

    void on_transfer_money_amount_line_textChanged(const QString &arg1);

    void on_delete_account_line_textChanged(const QString &arg1);

    void on_delete_account_return_button_clicked();

    void on_delete_account_confirm_clicked();

    void on_atm_add_money_confirm_released();

    void on_atm_add_money_currency_1_clicked();

    void on_atm_add_money_currency_2_clicked();

    void on_atm_add_money_currency_3_clicked();

    void on_atm_add_money_currency_4_clicked();

    void on_atm_add_money_currency_5_clicked();

    void on_atm_add_money_currency_6_clicked();

    void on_atm_add_money_return_clicked();

    void on_add_money_refresh_clicked();

    void on_add_money_return_clicked();

    void on_add_money_line_textChanged(const QString &arg1);

    void on_add_money_confirm_clicked();

    void on_account_information_return_clicked();

    void on_edit_account_information_line_1_textChanged(const QString &arg1);

    void on_edit_account_information_return_clicked();

    void on_edit_account_information_confirm_clicked();

    void on_pushButton_atm_quit_clicked();

private:
    Ui::ATM *ui;
};
#endif // ATM_H
