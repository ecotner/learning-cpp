#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main() {
    string name;
    cout << "who are you? ";
    cin >> name;
    string greeting = "Hello " + name;
    if (name == "Eric") {
        greeting += ", I know you!";
    }
    cout << greeting << '\n';

    // use some string member functions
    int len = greeting.length();
    cout << "\"" + greeting + "\" is " << len << " characters long.\n";
    string beginning = greeting.substr(greeting.find(' ')+1);
    cout << beginning << '\n';
    if (beginning == name) {
        cout << "expected result.\n";
    }
}