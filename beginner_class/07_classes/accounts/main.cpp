#include <iostream>
using std::cout;

#include "Account.h" // we don't need to know about Transactions here, only Accounts

int main() {
    Account a1{}; // create an account
    a1.Deposit(90); // deposit some money
    cout << "After depositing $90 " <<
        "balance is " << a1.GetBalance() << '\n'; // read the balance
    for (auto s: a1.Report()) { // print a report of transactions so far
        cout << s << '\n';
    }

    a1.Withdraw(50);
    if (a1.Withdraw(100)) {
        cout << "second withdraw succeeds\n";
    }

    cout << "After withdrawing $50 then $100\n";
    for (auto s: a1.Report()) {
        cout << s << '\n';
    }

    return 0;
}