#include <iostream>
#include <cstdlib>

using namespace std;

void play (int num); // additional function for game mechanics

int get_magic_number(); // one func for getting a random number

int main() {
    int magic, option; // magic - created number, option - user choise

    magic = get_magic_number(); // get a randon number
    do {
        cout << "Greeting! Welcome to magic number game!\n\n";
        cout << "1. Get start the game - enter 1\n"; // options
        cout << "2. Get new magic number - enter 2\n"; // options
        cout << "3. To stop game - enter 3\n"; // optiions
        
        
        do {
            cout << "Enter your choice: "; cin >> option; // get the user choice
            if (option < 1 || option > 3) cout << "Please enter the number from 1 to 3\n";
        } while (option < 1 || option > 3); // expect the 1, 2, 3 the user input

        switch(option) { // reaction and program works for user input
            case 1:
            cout << "\nThe magic number can be a number between 0 - 100\n";
            cout << "Be aware - Your have only 10 attempts\n";
            play(magic);
            break;

            case 2:
            magic = get_magic_number();
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
            cout << "\n**You are guees!**\n";
            return;
        }
        else 
            if (guess > num) cout << "Your number is bigger than magic\n";
            else cout << "Your number is less than magic\n";
    }
    
    cout << "\nSorry you used all attempts\n";
    cout << "Let`s try again?\n\n";
    
}

int get_magic_number() {
    int n = 100; // create a limit for rand number
    return rand()%n;
}