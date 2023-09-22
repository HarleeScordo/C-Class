#include <iostream>
using namespace std;

int main() {
    double starting_balance;
    double annual_int_rate;
    double monthly_int_rate;
    double total_deposits = 0;
    double total_withdrawals = 0;
    double total_int = 0;

    cout << "Enter starting balance: ";
    cin >> starting_balance;


    cout << "Enter annual interest rate (%): ";
    cin >> annual_int_rate;
         annual_int_rate /= 100;
         monthly_int_rate = annual_int_rate / 12;
             if (annual_int_rate < 0) {
                 cout << "Please enter a non-negatie percentage." << endl;
                }

    for (int month = 1; month <= 3; ++month) {
        cout << "Month " << month << endl;

        double deposit;
        do {
            cout << "Enter total amount deposited this month: ";
            cin >> deposit;
            if (deposit < 0) {
                cout << "Please enter a non-negative amount." << endl;
            }
        } while (deposit < 0);
        total_deposits += deposit;

        double withdrawal;
        do {
            cout << "Enter total amount withdrawn this month (up to " << starting_balance << "): ";
            cin >> withdrawal;
            if (withdrawal < 0) {
                cout << "Please enter a non-negative amount." << endl;
            }
            else if (withdrawal > starting_balance) {
                cout << "Withdrawal amount exceeds available balance." << endl;
            }
        } while (withdrawal < 0 || withdrawal > starting_balance);
        total_withdrawals += withdrawal;

        double interest = (starting_balance + deposit - withdrawal) * monthly_int_rate;
        total_int += interest;
        starting_balance += deposit - withdrawal + interest;
    }

    cout << "\nFinal Report:" << endl;
    cout << "Starting balance at the beginning of the three month period:  " << starting_balance << endl;
    cout << "Total deposits made during the three month period:  " << total_deposits << endl;
    cout << "Total withdrawals made during the three month period:  " << total_withdrawals << endl;
    cout << "Total interest posted to the account during the three months:  " << total_int << endl;
    cout << "Final balance:  " << starting_balance << endl;

    return 0;
}