#include <iostream>
using namespace std;

int main () {

    int arr1 [100];
    int s1;
    int by3 = 0, by5 = 0;

    cout << "Enter Size Of Your Array: ";
    cin >> s1;

    cout << "Enter Array Items\n";
    for (int i = 0; i < s1; i++) {
        cin >> arr1 [i];
        if (arr1 [i] % 3 == 0) {
            by3++;
        }
        if (arr1 [i] % 5 == 0) {
            by5++;
        }
    }

    cout << by3 << " Elements Are divisible by 3" << endl;
    cout << by5 << " Elements Are divisible by 5" << endl;



     int a, b, sum2 = 0;
     cout << "Enter 2 Integers To Give The Sum Between Them\nA: ";
     cin >> a;
     cout << "B: ";
     cin >> b;
     if (a > b) {
         for (int i = b; i <= a; i++) {
             sum2 += i;
         }
         cout << "The Sum Between Them Is: " << sum2 << endl;
     }
     else if (a < b) {
         for (int j = a; j <= b; j++) {
             sum2 += j;
         }
         cout << "The Sum Between Them Is: " << sum2 << endl;
     }
     else cout << "They Are Equal" << endl;


     

    int s3;
    int largest;
    int second_largest;
    int arr3 [100];
    cout << "Enter Array Size: ";
    cin >> s3;

    for (int i = 0; i < s3; i++) {
        cin >> arr3 [i];
    }
    for (int i = 0; i < s3; i++) {
            if (arr3 [i] > arr3 [i + 1]) {
                second_largest = arr3 [i];
                largest = arr3 [i + 1];
            }
            else {
                second_largest = arr3 [i + 1];
                largest = arr3 [i];
            }
        }

        cout << "largest: " << largest << endl;
        cout << "Second largest: " << second_largest << endl;

    return 0;
}