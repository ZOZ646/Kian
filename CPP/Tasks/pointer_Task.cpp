#include <iostream>
using namespace std;

int increment (int *p1) {
    return *p1 + 10;
}

int main () {
    int var1 = 10;
    int *p = &var1;
    cout << *p << endl;


    int var2 = 5;
    int *ptr = &var2;
    cout << "Before modification: " << *ptr << endl;
    *ptr = 7;
    cout << "After modification: " << *ptr << endl;


    cout << "Array items using pointer" << endl;
    int arr1 [5] {1, 2, 3, 4, 5};
    int *ptr2  = arr1;
    for (int i = 0; i < 5; i++){
    cout << *ptr2 + i << " ";
    }
    cout << endl;


    int var3 = 15;
    int *ptr1 = &var3;
    int *ptr3 = ptr1;
    cout << *ptr3 << endl;

    
    int num = 38;
    cout << "Before increment: " << num << endl;
    cout << "After increment: " << increment(&num) << endl;

}

