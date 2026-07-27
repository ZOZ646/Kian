#include <iostream>
using namespace std;

int main () {
    int a[100] {}, b[100] {}, c[100] {};
    int sa, sb;

    cout << "Enter Size Of The First Array: ";
    cin >> sa;

    cout << "Enter Items Of The First Array" << endl;
    for (int i = 0; i < sa; i++) {
        cin >> a [i];
    }
    
    cout << "Enter Size Of The Second Array: ";
    cin >> sb;

    cout << "Enter Items Of The Second Array" << endl;
    for (int i = 0; i < sb; i++) {
        cin >> b [i];
    }

    for (int i = 0; i < sa; i++) {
        c[i] = a[i];
    }
    for (int j = 0; j < sb; j++) {
        c[sa + j] = b[j];
    }

    cout << "Merged Array Is\n[ ";
    for (int i = 0; i < (sa + sb); i++) {
        cout << c[i];
        if (i != ((sa + sb) - 1)){
            cout << ", ";
        }
    }
    cout << " ]" << endl;


    int rows, cols;
    int mat[100][100];

    cout << "Enter Rows: ";
    cin >> rows;

    cout << "Enter Columns: ";
    cin >> cols;

    cout << "Enter Matrix Items\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }

    int max = mat[0][0];
    int min = mat[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] > max) {
                max = mat[i][j];
            }
            if (mat[i][j] < min) {
                min = mat[i][j];
            }
        }
    }

    cout << "Largest Element Is: " << max << endl;
    cout << "Smallest Element Is: " << min << endl;

}