#include <vector>
#include <string>

class Transaction {
private:
    int amount;
    std::string type; // could we use an enum?

public:
    Transaction(int amount, std::string type);
    std::string Report();
};