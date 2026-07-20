#include <iostream>
using namespace std;

int main () {
    cout << "\n|--------------- Task 1 ---------------|\n";

    int num1;
    cout << "\nEnter The Ending Number: ";
    cin >> num1;

    for (int i = 1; i <= num1; i++) {
        cout << i << endl;
    }

    cout << "\n|--------------- Task 2 ---------------|\n";
    
    int num2;
    cout << "\nEnter The Ending Number: ";
    cin >> num2;

    cout << "\nEven Numbers\n";
    for (int i = 1; i <= num2; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    cout << "\n|--------------- Task 3 ---------------|\n";

    int even = 0, odd = 0, positive = 0, negative = 0, num3, arr [100] {};
    cout << "\nEnter The Number Of Values: ";
    cin >> num3;

    for (int i = 1; i <= num3; i++) {
        cout << "\n Enter The Value [" << i << "]\n";
        cin >> arr [i];
    }

    for (int i = 1; i <= num3; i++) {
        if (arr [i] % 2 == 0){
            even += 1;
        } 
        if (arr [i] > 0) {
            positive += 1;
        }
        if (arr [i] % 2 != 0) {
            odd += 1;
        }
        if (arr [i] < 0) {
            negative += 1;
        }
    }

    cout << "\nEven: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Psitive: " << positive << endl;
    cout << "Negative: " << negative << endl;


    cout << "\n|--------------- Task 3 ---------------|\n";

    int num4;
    cout << "\nEnter The Number: ";
    cin >> num4;

    for (int i = num4; i >=1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}