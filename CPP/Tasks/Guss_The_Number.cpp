#include <iostream>
#include <time.h>
using namespace std;

int main () {
    int secret_num;
    int tries = 0;
    int choice;
    int max_tries;
    int guessed_num;
    bool win = false;

    srand(time(0));
    secret_num = rand() % 100 + 1;

    cout << "==============================\n";
    cout << "    GUESS THE NUMBER GAME\n";
    cout << "==============================\n\n";

    cout << "Choose a difficulty level:\n";
    cout << "  1 - Easy   \n";
    cout << "  2 - Medium \n";
    cout << "  3 - Hard   \n";
    cout << "\nEnter 1, 2, or 3: ";
    cin >> choice;
    system ("clear");


    while (choice != 1 && choice != 2 && choice != 3){ 
    cout << "Choose a difficulty level:\n";
    cout << "  1 - Easy   \n";
    cout << "  2 - Medium \n";
    cout << "  3 - Hard   \n";
    cout << "\nEnter 1, 2, or 3: ";
    cin >> choice;
    system ("clear");
    }


    if (choice == 1){
        max_tries = 10;
        cout << "You Have 10 Chances\n" << endl;
    }
    else if (choice == 2) {
        max_tries = 7;
        cout << "You Have 7 Chances\n" << endl;
    }
    else if (choice == 3) {
        max_tries = 5;
        cout << "You Have 5 Chances\n" << endl;
    }

    
    while (tries < max_tries) {
        int tries_left = max_tries - tries;
        cout << "You Have '" << tries_left << "' tries left\n" << endl;
        cout << "Guess a number between 1 and 100" << endl;
        cin >> guessed_num;
        system ("clear");
        tries++;

        if (guessed_num == secret_num) {
            win = true;
            break;
        }
        else if (guessed_num < secret_num){
            if (tries <= (max_tries - 1))
            cout << "Too Low, Try a Higher Number" << endl;
        }
        else if (guessed_num > secret_num) {
            if (tries <= (max_tries - 1))
            cout << "Too High, Try a Lower Number" << endl;
        }
    }

    if (win == true) {
        cout << "Correct ! You got that Within '" << tries << "' tries" << endl;
    }
    else {
        cout << "Hard Luck" << endl;
        cout << "The Number Was: " << secret_num << endl;
    }

}