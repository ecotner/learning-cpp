#include <vector>
// using std::vector; // apparently `using` statements can have side effects when used in header files
#include <string>
#include "Transaction.h"

class Account {
// can declare methods either private (can't be accessed outside function)
// or public (can be accessed/changed)
private:
    int balance;
    std::vector<Transaction> log;

public:
    Account(); // constructor
    std::vector<std::string> Report();
    bool Deposit(int amount);
    bool Withdraw(int amount);
    // this is an "inline" function; this can improve performance by replacing
    // function calls with the text of the computation of the function itself
    inline int GetBalance() {return this->balance;} 
};