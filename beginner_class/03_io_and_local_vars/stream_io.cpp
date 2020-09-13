#include <iostream> // this is the standard library has `cout` and `cin`

int main() {
    std::cout << "Hello!\n"; // `<<` operator sends expression on right to stream on left
    // `cout` is the the stdout stream, so this prints to terminal

    // can chain together expressions to concat together (`stream << expression` returns a stream object)
    std::cout << "Hello again!" << '\n';
    // can mix types
    std::cout << 123 << '\n'; // int + string
    std::cout << 123.456 << '\n'; // float + string
    // can use variables
    int i = 42;
    std::cout << "i=" << i << '\n';
    // can use C-style `printf` function as well
    printf("This is from `printf`!\n");
    // there is a `std::endl` that can be used in place of '\n'
    std::cout << "This is printed on" << std::endl;
    std::cout << "two separate lines" << std::endl;
}