#include <iostream>
#include <cmath>
using namespace std;

int main () {
    cout << "               Task 1" << endl;

    cout <<"|------- Enter '10' Employee Salaries -------|" << endl;
    
    int salary [10] ;
    for (int i = 0; i < 10; i++) {
        cout << "Enter Salary Of Employee [" << i + 1 << "]: ";
        cin >> salary [i];
    }

    // Salary After Bonus
    for (int i = 0; i < 10; i++) {
        salary [i] += (0.1 * salary [i]);
    }

    float sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += salary [i];
    }

    cout << "Average Salary Is: " << sum / 10 << endl;


    cout <<"|------- Matrix Operations -------|" << endl;
    
    int matSum = 0;
    int diagonalSum = 0;
    int matrix [5][3] {};
    cout << "Enter Matrix Items\n";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix [i] [j];
        }
    }

    cout <<"\n====== Your Matrix Is ======" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix [i] [j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            matSum += matrix [i] [j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                diagonalSum += matrix [i] [j];
            }
        }
    }

    cout << "Sum Of All Ements : " << matSum << endl;
    cout << "Main Diagonal Sum : " << diagonalSum << endl;

    cout <<"|------- Matrix Operations -------|" << endl;

    int absValue = 0, endNum;
    int arr1 [100];

    cout << "Enter The Size Of Your Array: ";
    cin >> endNum;

    cout << "\nEnter Array Elements" << endl;
    for (int i = 0; i < endNum; i++) {
        cin >> arr1 [i];
    }

    for (int i = 0; i < endNum; i++) {
        absValue += arr1 [i];
    }

    cout << "The Absolute Summation Is: " << abs(absValue) << endl;

    cout <<"|------- Search For Item -------|" << endl;

    int A [100] {};
    int s;
    int searchItem;
    bool found = 0;

    cout << "Enter The Size Of Your Array: ";
    cin >> s;

    cout << "\nEnter Array Elements" << endl;
    for (int i = 0; i < s; i++) {
        cin >> A [i];
    }

    cout << "\nEnter The Search Item: ";
    cin >> searchItem;


    for (int i = 0; i < s; i++) {
         if (searchItem == A [i]) {
            found = 1;
            cout << "Item Found In Index [" << i << "]\n";
            continue;
         }
    }

    if (found == 0) {
        cout << "-1\nItem Doesn't Exist\n";
    }

    cout << "               Task 2" << endl;

    cout <<"|------- Print Array -------|" << endl;
    int arr2 [100] {};
    int s2;

    cout << "Enter The Size Of Your Array: ";
    cin >> s2;

    cout << "Enter The Elements Of Your Array\n";
    for (int i = 0; i < s2; i++) {
        cin >> arr2 [i];
    }

    cout << "Your Array Is\n[ ";
    for (int i = 0; i < s2; i++) {
        cout << arr2 [i];
        if (i != (s2 - 1)){
            cout << ", ";
        }
    }
    cout << " ]" << endl;

    return 0;
}