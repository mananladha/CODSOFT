#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    srand(time(0));
    int randomNumber = rand() % 100+1;
    int userGuess;

    cout << "Welcome to Number Guessing Game by mananladha" << endl;
    cout << "I have picked a number between 1 and 100." << endl;
    cout << "Now,You try to guess it" << endl;

    do {
        cout << "Enter your Guess:";
        cin >> userGuess;

        if(userGuess > randomNumber) {
            cout << "Too High, Try again." << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too Low, Try again." << endl;
        } else {
            cout << "Congratulations!! you guessed it right." << endl;
        }
    } while (userGuess != randomNumber);
    return 0; 
}