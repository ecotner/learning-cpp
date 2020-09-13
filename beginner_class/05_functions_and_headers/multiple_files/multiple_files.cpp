// MUST compile this file together with `multiple_files_funcs.cpp`
// run `g++ multiple_files*` if you're lazy like me
#include <iostream>
using std::cout;

// declare the functions up here, but they are actually DEFINED in `multiple_files_funcs.cpp`
double add(double, double);
double add(double, double, double);

int main() {
    cout << "1 + 2 = " << add(1, 2) << '\n';
    cout << "1.2 + 3.4 = " << add(1.2, 3.4) << '\n'; // this throws warning because of demotion
    cout << "1.2 + 3.4 + 5.6 = " << add(1.2, 3.4, 5.6) << '\n'; // this does NOT throw warning
}