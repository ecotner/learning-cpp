// when compiling, don't include the header file in the command, otherwise it will
// generate a precompiled header file with a `*.gch` extension. you can simply compile
// all the source code files with `g++ *.cpp`
#include <iostream>
// now that we have included headers.h, compiler knows about functions declared there
// they are actually defined in `headers_funcs.cpp`, but linker will figure that out
#include "headers.h"
using std::cout;

int main() {
    cout << "1 + 2 = " << add(1, 2) << '\n';
    cout << "1.2 + 3.4 = " << add(1.2, 3.4) << '\n';
    cout << "1.2 + 3.4 + 5.6 = " << add(1.2, 3.4, 5.6) << '\n';
}