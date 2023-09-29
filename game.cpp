#include <iostream>
#include <cstdlib>

using namespace std;

void play (int num); // additional function for game mechanics

int main() {
    int magic, option, n; // magic - created number, option - user choise, n - limit for rand

    n = 100;
    magic = rand()%n; // get a randon number
    do {
        cout << "Greeting!\n";
        cout << "1. Get start the game - enter 1\n"; // options
        cout << "2. Get new magic number - enter 2\n"; // options
        cout << "3. To stop game - enter 3\n"; // optiions
        cout << "The magic number can be a number between 0 - 100\n";
        
        
        do {
            cout << "Enter your choice: "; cin >> option; // get the user choice
            if (option < 1 || option > 3) cout << "Please enter the number from 1 to 3\n";
        } while (option < 1 || option > 3); // expect the 1, 2, 3 the user input

        switch(option) { // reaction and program works for user input
            case 1:
            play(magic);
            break;

            case 2:
            magic = rand()%n;
            break;

            case 3:
            cout << "Good bay! Thank you for playing!";
            break;

        }
        
    } while (option != 3);
    
    return 0;
}

void play(int num) {
    int counter, guess;

    for (counter = 0; counter < 10; counter++) { // counter for guess tries
        cout << "Let`s try to guess the magic number: "; cin >> guess; // user input
        if (guess==num) {
            cout << "**You are guees!**";
            return;
        }
        else 
            if (guess > num) cout << "Your number is bigger than magic\n";
            else cout << "Your number is less than magic\n";
    }
    
    cout << "Sorry you used all tries\n";
    cout << "Let`s try again?";
    return;
    
}