#include <iostream>
using std::cout;
using std::cin;

int main() {
    int i, j;
    cout << "Input integer i: ";
    cin >> i;
    cout << "Input integer j: ";
    cin >> j;

    if (i<j) {
        cout << "i less than j\n";
    } else if (i==j) {
        cout << "i equal to j\n";
    } else {
        cout << "i greater than j\n";
    }
}