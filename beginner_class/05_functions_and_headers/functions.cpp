#include <iostream>
using std::cout;

int add(int x, int y) {
    return x + y;
}

double add_double(double x, double y) {
    return x + y;
}

int main() {
    int a = 1;
    int b = 2;
    cout << "1 + 2 = " << add(a, b) << '\n';
    cout << "1.2 + 3.4 = " << add(1.2, 3.4) << '\n'; // this throws warning because of demotion
    cout << "1.2 + 3.4 = " << add_double(1.2, 3.4) << '\n'; // this does NOT throw warning
}