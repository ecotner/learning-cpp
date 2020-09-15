#include "Account.h" // vector, string are already declared
using std::vector;
using std::string;
using std::to_string;

// below, we _implement_ all the member functions that were
// declared in Account.h
Account::Account() : balance(0) {} // balance(0) sets the `balance` attribute to 0

vector<string> Account::Report() {
    vector<string> report;
    report.push_back("Balance is " + to_string(this->balance));
    report.push_back("Transactions: ");
    for (auto t : this->log) {
        report.push_back(t.Report());
    }
    report.push_back("-----------------------");
    return report;
}

bool Account::Deposit(int amount) {
    if (amount >= 0) {
        this->balance += amount;
        this->log.push_back(Transaction(amount, "Deposit"));
        return true;
    } else return false;
}

bool Account::Withdraw(int amount) {
    if (amount <= 0) {
        return false;
    }

    if (this->balance >= amount) {
        this->balance -= amount;
        this->log.push_back(Transaction(amount, "Withdraw"));
        return true;
    }
    return false;
}