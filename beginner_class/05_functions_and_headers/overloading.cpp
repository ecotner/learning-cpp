#include <iostream>
using std::cout;

double add(double x, double y) {
    return x + y;
}

// can overload function by using same function name, but different # of arguments or types
double add(double x, double y, double z) {
    return x + y + z;
}

int main() {
    cout << "1 + 2 = " << add(1, 2) << '\n';
    cout << "1.2 + 3.4 = " << add(1.2, 3.4) << '\n'; // this throws warning because of demotion
    cout << "1.2 + 3.4 + 5.6 = " << add(1.2, 3.4, 5.6) << '\n'; // this does NOT throw warning
}