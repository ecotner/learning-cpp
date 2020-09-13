#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main() {
    bool done = false;
    string response;
    while (!done) {
        // get input from user
        cout << "Please input two strings to compare (comma separated): ";
        cin >> response;
        // split according to comma
        int idx = response.find(',');
        string first = response.substr(0, idx);
        string second = response.substr(idx+1);
        // compare lengths
        int len1 = first.length();
        int len2 = second.length();
        if (len1 > len2) {
            cout << "the first string is longer!\n";
        } else if (len2 > len1) {
            cout << "the second string is longer!\n";
        } else {
            cout << "the strings are the same length!\n";
        }
        cout << "Input 'y' to continue: ";
        cin >> response;
        if (response == "y") done = false;
        else done = true;
    }
}