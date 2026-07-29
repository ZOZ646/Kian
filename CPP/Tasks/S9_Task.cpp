#include <iostream>
using namespace std;

int sum (int n1, int n2);
void swap (int a, int b);
void printNums (int n);
void sumAvg (int n1, int n2, int n3);
int recSum(int n);

int main () {

    int x, y;
    cout << "Enter Num1: ";
    cin >> x;
    cout << "\nEnter Num2: ";
    cin >> y;
    cout << '\n' << x << " + "  << y  << " = " << sum(x, y) << endl;

    int a, b;
    cout << "Enter A: ";
    cin >> a;
    cout << "\nEnter B: ";
    cin >> b;
    swap (a, b);

    int number;
    cout << "Enter The Number: ";
    cin >> number;
    printNums (number);

    int n1, n2, n3;
    cout << "Enter First Number: ";
    cin >> n1;
    cout << "\nEnter Second Number: ";
    cin >> n2;
    cout << "\nEnter Third Number: ";
    cin >> n3;
    sumAvg (n1, n2, n3);

    int n;
    cout << "Enter The Number: ";
    cin >> n;

    cout << "Summation Is: " << recSum(n) << endl;
}

int sum (int x, int y) {
    return x + y;
}

// int swap (int a, int b) {
//     int z;
//     z = b;
//     b = a;
//     a = z;
//     cout << "\nAfter Swap\nA = " << a << " B = " << b << endl;
// }

void swap (int a, int b) {
    b = a + b;
    a = b - a;
    b = b - a;
    cout << "\nAfter Swap\nA = " << a << " B = " << b << endl;
}

void printNums (int n) {
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

void sumAvg (int n1, int n2, int n3) {
    int sum = n1 + n2 + n3;
    float average = sum / 3; 

    cout << "Sum Is " << sum << "\nAverage Is " << average << endl;
}

int recSum(int n) {
    int sum = 0;
    if (n == 1) {
        return 1;
    }
    return n + recSum(n - 1);
}