#include "Transaction.h"
using std::string;
using std::to_string;

Transaction::Transaction(int amount, string type) {
    this->amount = amount;
    this->type = type;
}

string Transaction::Report() {
    string report;
    report += "   ";
    report += this->type;
    report += " ";
    report += to_string(this->amount);
    return report;
}