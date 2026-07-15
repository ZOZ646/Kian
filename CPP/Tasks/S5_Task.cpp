#include <iostream>
using namespace std;

int main () {

    cout <<"============== Even Or Odd ==============\n";

    int num;
    cout << "Enter The Number: \n";
    cin >> num;
    string evenOdd = (num % 2 == 0)? "Even":"Odd";
    cout << evenOdd;

    cout <<"\n============== Positive Or Negative ==============\n";
    
    int a;
    cout << "Enter The Number: \n";
    cin >> a;
    string positiveNegative = (a > 0)? "Positive":(a < 0)?"Negative":"Number Is Zero";
    cout << positiveNegative;

    cout <<"\n============== Student Grade ==============\n";

    int grade;
    cout << "Enter Your Grade: \n";
    cin >> grade;

    if (grade < 0 || grade > 100 ){
        cout << "Enter A Valid Grade" << endl;
    }
    else if (grade >= 90 && grade <= 100){
        cout << "A";
    }
    else if (grade >= 80 && grade < 90){
        cout << "B";
    }
    else if (grade >= 70 && grade < 80){
        cout << "C";
    }
    else if (grade >= 60 && grade < 70){
        cout << "D";
    }
    else {
        cout << "F";
    }

    cout <<"\n============== Largest of Three Numbers ==============\n";

    int max, n1, n2, n3;
    cout << "Enter Three Numbers: \n";
    cin >> n1 >> n2 >> n3;
    if (n1 > n2 && n1 > n3) {
        max = n1;
    }
    else if (n2 > n3) {
        max = n2;
    }
    else {
        max = n3;
    }
    cout << max << endl;

    cout <<"\n============== Leap Year ==============\n";

    int year;
    cout << "Enter The Year: \n";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        cout << "Leap Year";
    }
    else cout << "Normal Year";

    cout <<"\n============== Day of the Week ==============\n";

    int day;
    cout << "Enter Number Of The Day: \n";
    cin >> day;

    switch (day){
        case 1 : 
        cout << "Saturday" << endl;
        break;
        case 2 : 
        cout << "Sunday" << endl;
        break;
        case 3 : 
        cout << "Monday" << endl;
        break;
        case 4 : 
        cout << "Tuesday" << endl;
        break;
        case 5 : 
        cout << "Wednesday" << endl;
        break;
        case 6 : 
        cout << "Thursday" << endl;
        break;
        case 7 : 
        cout << "friday" << endl;
        break;
        default:
        cout << "Invalid Day";
    }

    cout <<"\n============== Simple Calculator ==============\n";

    int num1, num2;
    int op;
    cout << "Enter First Number: \n";
    cin >> num1;
    cout << "Choose Operation: \n - [1] '+'\n - [2] '-'\n - [3] '*'\n - [4] '/'\n";
    cin >> op;

    switch (op){
        case 1:
        cout << "Enter Second Number: \n";
        cin >> num2;
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
        case 2:
        cout << "Enter Second Number: \n";
        cin >> num2;
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
        case 3:
        cout << "Enter Second Number: \n";
        cin >> num2;
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
        case 4:
        cout << "Enter Second Number: \n";
        cin >> num2;
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
        default:
        cout << "Enter A Valid Operation" << endl;
    }

    return 0;
}