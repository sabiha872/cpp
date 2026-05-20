#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) { balance = b; }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if(amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance\n";
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount obj(1000);
    obj.deposit(500);
    obj.withdraw(200);
    obj.showBalance();
}
