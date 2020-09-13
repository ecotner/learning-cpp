#include <stdio.h>

int main() {
    // C++ requires that all variables are decalared before use so we know what type it is
    int i; // declare an integer variable, but don't initialize it
    printf("i=%d\n", i); // we can see that its value is whatever random crap was on the stack
    int j = 1; // initialize int to 1
    char ch = 'A'; // initialize char to 'A'
    auto k = 7; // `auto` determines the type automatically

    // can "promote" or "demote" variable types
    int a = 1;
    float b = a; // integer is promoted to float no problem
    double d = a; // same thing with int -> double

    // sometimes demotions will produce compiler warnings
    d = 1.3;
    int c = d; // this demotes double -> int; if there is any stuff after the decimal, it gets truncated
    float f = d; // this also truncates the value of d, from 64-bit to 32-bit precision
    printf("before truncation of double: %f\n", d);
    printf("after truncation to integer: %d\n", c);
    printf("after truncation to float: %f\n", f);
}