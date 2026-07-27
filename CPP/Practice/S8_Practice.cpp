#include <iostream>
using namespace std;

int main () {
    
    int matSum = 0;
    int diagonalSum = 0;
    int matrix [5][3];
    cout << "Enter Matrix Items\n";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix [i] [j];
            matSum += matrix [i] [j];
        }
    }

    cout <<"\n====== Your Matrix Is ======\n" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix [i] [j] << " ";
        }
        cout << endl;
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
    
}