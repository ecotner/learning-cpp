#include <iostream>

int main() {
    // The `std::` part of this expression denotes that `cout` belongs to the `std` "namespace".
    // You can have multiple functions/objects with the same name, as long as they have different
    // namespaces.
    std::cout << 2+2 << '\n';

    // If you want to be able to work with functions without specifying the namespace,
    // you can use either of the following methods:
    // using namespace std; // this is like `from pkg import *` from python; it pulls in the ENTIRE namespace
    using std::cout; // this is much preferred because then you don't accidentally pull in anything you don't want to

    cout << 1+2 << '\n';
}