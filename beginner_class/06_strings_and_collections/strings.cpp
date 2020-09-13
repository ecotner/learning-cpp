#include <iostream>
using std::cout;
#include <string>
using std::string; // string is part of the standard library, so we have to add it to our namespace

int main() {
    string greeting = "Hello, "; // declare an instantiation of the string class
    int len = greeting.length(); // our first member function! this applies the `length` function to the `greeting` object
    string s2 = greeting.substr(2, 3); // gets the substring starting at position 2, with length 3; returns "llo"
    int pos = greeting.find("He"); // finds index of first occurrence of substring; returns 0
}