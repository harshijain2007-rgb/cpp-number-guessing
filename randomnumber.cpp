#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // random seed

    int number = rand() % 100 + 1; // number between 1 to 100
    int guess;
    int attempts = 0;

    cout << " Number Guessing Game\n";
    cout << "Guess a number between 1 and 100\n";

    while (true) {

        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too high \n";
        }
        else if (guess < number) {
            cout << "Too low \n";
        }
        else {
            cout << "Correct  You won!\n";
            cout << "Attempts: " << attempts << endl;
            break;
        }
    }

    return 0;
}