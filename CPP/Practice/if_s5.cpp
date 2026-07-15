#include <iostream>
using namespace std;

int main ()
{
    int x;
    cin >> x;

    if (x % 2 == 0) {
        cout << "Even";
    }
    else{
        cout << "Odd";
    }

    cout << "\n================================\n";

    int grade;
    cout << "Enter Your Grade: \n";
    cin >> grade;

    if (grade < 0 || grade > 100){
        cout << "Invalid Grade";
    }

    if (grade >= 0 && grade < 50) {
        cout << "Failed";
    }
    else if (grade >= 50 && grade < 65){
        cout << "Fair";
    }

    else if (grade >= 65 && grade < 75){
        cout << "Good";
    }

    else if (grade >= 75 && grade < 85){
        cout << "Very Good";
    }

    else if (grade >= 85 && grade < 100){
        cout << "Excellent";
    }

}