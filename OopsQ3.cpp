#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    void inputDetails() {
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolderName);

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient Balance!\n";
        }
    }

    void displayDetails() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b;
    double amount;

    b.inputDetails();

    cout << "Enter Deposit Amount: ";
    cin >> amount;
    b.deposit(amount);

    cout << "Enter Withdraw Amount: ";
    cin >> amount;
    b.withdraw(amount);

    b.displayDetails();

    return 0;
}