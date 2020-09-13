#include <iostream>
#include <stdlib.h>
#include <ctime>

using std::cout;
using std::cin;

int main() {
    // loop over games (as long as player want to keep going)
    bool done = false;
    while (!done) {
        srand((unsigned) time(0)); // sets seed for random number generator
        int secret = rand() % 101; // generates random int in range [0, 100]

        // cout << secret << '\n';
        cout << "Welcome to \"Guess my Number\"!\n";
        cout << "I have chosen a secret integer between 0 and 100 (inclusive)\n";

        int guess = -1;
        int num_guesses = 0;

        // loops as long as guess is incorrect
        while (guess != secret) {
            cout << "Guess an integer: ";
            cin >> guess;
            num_guesses++;
            if (guess == secret) break; // exit loop if correct guess
            // give hint if incorrect
            else if (guess < secret) {
                cout << "Too low!\n";
            } else {
                cout << "Too high!\n";
            }
        }
        // congrats when guess is correct, ask to play again
        cout << "Congratulations! You guessed the secret number, " << secret << '\n';
        cout << "It took you " << num_guesses << " guesses to figure it out.\n";
        cout << "Type 0 to play again, or any other integer to quit: ";
        cin >> done; // this implicitly casts to bool?
        if (done == 0) done = false;
        else done = true;
    }
}