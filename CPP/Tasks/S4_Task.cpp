#include <iostream>
using namespace std;

int LastTwoNumberSum(int n1, int n2);
int max_num(int n1, int n2, int n3);
int min_num(int n1, int n2, int n3);

int main () {

    int num1, num2;
    cout << "Enter 2 Numbers: \n";
    cin >> num1 >> num2;
    cout << "Sum Of Last 2 Digits: ";
    cout << LastTwoNumberSum(num1, num2);

    cout << "\n========================================\n";

    int x, y, z;
    cout << "Enter 3 Numbers: \n";
    cin >> x >> y >> z;
    cout << "Minimum: " << min_num(x, y, z) << ", " << "Maximum: " << max_num(x, y, z);

    return 0;
}

int LastTwoNumberSum(int n1, int n2) {
    return (n1 % 10) + (n2 % 10);
}

int max_num(int n1, int n2, int n3) {
    int max;
    if (n1 > n2 && n1 > n3) {
        max = n1;
    }
    else if (n2 > n3) {
        max = n2;
    }
    else {
        max = n3;
    }

    return max;
}

int min_num(int n1, int n2, int n3) {
    int min;
    if (n1 < n2 && n1 < n3) {
        min = n1;
    }
    else if (n2 < n3) {
        min = n2;
    }
    else {
        min = n3;
    }

    return min;
}

