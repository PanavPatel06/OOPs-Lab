#include <iostream>
using namespace std;
class BankAccount;
class Wallet {
private:
    int cashAmount;
public:
    Wallet(int cash) : cashAmount(cash) {}
    void display() {
        cout << "My Wallet: Cash Amount = $" << cashAmount << endl;
    }
    friend int getTotalFunds(const Wallet& w, const BankAccount& ba);
};
class BankAccount {
private:
    int savings;
public:
    BankAccount(int s) : savings(s) {}
    void display() {
        cout << "My Bank Account: Savings = $" << savings << endl;
    }
    friend int getTotalFunds(const Wallet& w, const BankAccount& ba);
};
int getTotalFunds(const Wallet& w, const BankAccount& ba) {
    return w.cashAmount + ba.savings;
}
int main() {
    Wallet myWallet(500);
    BankAccount myAccount(1500);
    myWallet.display();
    myAccount.display();
    cout << "Total funds (Wallet + BankAccount): $" << getTotalFunds(myWallet, myAccount) << endl;
    return 0;
}