#include <iostream>
using std::cout;

// passes i by value
int func1(int i) {
    return ++i;
}

// passes i by reference
int func2(int & i) {
    return ++i;
}

/* the following function isn't allowed because it violates the `const` promise
int func3(const int & i) {
    return ++i;
}
*/

// passes i by reference, even though the function is const, i is still modified
const int func4(int & i) {
    return ++i;
}

/* this is also not allowed because even though i is passed by value, it is still modified
int func5(const int i) {
    return ++i;
}
*/


int main() {
    int i = 0;
    cout << "Starting value: i=" << i << '\n';
    cout << "Result of func1: i=" << func1(i) << '\n';
    cout << "After func1: i=" << i << "\n\n";

    cout << "Result of func2: i=" << func2(i) << '\n';
    cout << "After func2: i=" << i << "\n\n";

    cout << "Result of func4: i=" << func4(i) << '\n';
    cout << "After func4: i=" << i << "\n";
}