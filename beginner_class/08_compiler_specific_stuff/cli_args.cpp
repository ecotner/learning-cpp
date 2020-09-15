#include <iostream>
using std::cout;

// this is the format you need to have if you want your program
// to accept command line arguments. `argc` is the number of arguments
// passed to the program, and `argv` is an array of strings containing
// those arguments
int main(int argc, char * argv[]) {
    if (argc > 2) {
        cout << "Too many arguments!\n";
        return 1;
    } else if (argc == 2) {
        cout << "Hello " << argv[1] << '\n';
    } else {
        cout << "Hello, who are you?\n";
    }
}