#include <iostream>
#include <time.h>
using namespace std;

void show();
int choice ();
bool play (int max_tries);

int main () {
show();
int max_tries = choice();
bool win = play (max_tries);

while (true) {
    bool playAgain;
    cout << "Want to  play again ?" << endl;
    cout << "1 => Yes\n";
    cout << "0 => No\n";
    cin >> playAgain;
    system ("cls");

    if (playAgain == 1) {
        max_tries = choice();
        win = play (max_tries);
    }
    else {
        cout << "Good bye" << endl;
        break;
    }
}
}

void show() {
    cout << "\t\t\t\t==============================\n";
    cout << "\t\t\t\t    GUESS THE NUMBER GAME\n";
    cout << "\t\t\t\t==============================\n\n";
}

int choice () {
    int tries = 0;
    int max_tries;
    cout << "Choose a difficulty level:\n";
    cout << "  1 - Easy   \n";
    cout << "  2 - Medium \n";
    cout << "  3 - Hard   \n";
    cout << "\nEnter 1, 2, or 3: ";
    int choice;
    cin >> choice;
    system ("cls");
    while (choice != 1 && choice != 2 && choice != 3){ 
    cout << "Choose a difficulty level:\n";
    cout << "  1 - Easy   \n";
    cout << "  2 - Medium \n";
    cout << "  3 - Hard   \n";
    cout << "\nEnter 1, 2, or 3: ";
    cin >> choice;
    system ("cls");
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

    return max_tries;
}

bool play (int max_tries) {
    int tries = 0;

    int secret_num;
    int guessed_num;
    bool win = false;

    srand(time(0));
    secret_num = rand() % 100 + 1;

    while (tries < max_tries) {
        int tries_left = max_tries - tries;
        cout << "You Have '" << tries_left << "' tries left\n" << endl;
        cout << "Guess a number between 1 and 100" << endl;
        cin >> guessed_num;
        system ("cls");
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
        cout << "Correct ! You got that Within " << tries << " tries of " << max_tries << endl;
        cout << "The Number Was: " << secret_num << endl;
    }
    else {
        cout << "Hard Luck" << endl;
        cout << "The Number Was: " << secret_num << endl;
    }

    return win;
}