#include <iostream>
using namespace std;

int main () {
        cout <<"|------- Merge Two Arrays -------|" << endl;
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

    // Merging
    for (int i = 0; i < sa; i++) {
        c [i] = a [i];
    }
    for (int j = (sa + sb); j < sb; j--) {
        c [j] = b [j];
    }



    cout << "Merged Array Is\n[ ";
    for (int i = 0; i < (sa + sb); i++) {
        cout << c [i];
        if (i != ((sa + sb) - 1)){
            cout << ", ";
        }
    }
    cout << " ]" << endl;

}