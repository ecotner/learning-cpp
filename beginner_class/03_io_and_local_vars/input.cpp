#include <iostream>
using std::cout;
using std::cin; // can use `cin` to get stream from terminal

int main() {
    cout << "Enter a number: ";
    int i;
    cin >> i; // places what you typed into variable `i`
    cout << i*2 << '\n'; // returns double the value you typed
}