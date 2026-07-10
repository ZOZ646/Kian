#include <iostream>
using namespace std;

int main(){
    // INFO

    string name;
    int age;
    float height;

    cout << "Enter Your Name: ";
    cin >> name;

    cout << "Enter Your Age: ";
    cin >> age;

    cout << "Enter Your Height: ";
    cin >> height;

    cout << "====================== INFO ========================\n";

    cout << "Name: " << name << "\t||\t" << "age: " << age << "\t||\t" << "Height: " << height << endl;

    // Data Types Sizes
    cout << "======================Data Types Sizes======================\n";

    cout << "- Size Of 'Integer': " << sizeof(int) << " Bytes" << endl;
    cout << "- Size Of 'Character': " << sizeof(char) << " Byte" << endl;
    cout << "- Size Of 'string': " << sizeof(string) << " Bytes" << endl;
    cout << "- Size Of 'float': " << sizeof(float) << " Bytes" << endl;
    cout << "- Size Of 'double': " << sizeof(double) << " Bytes" << endl;

    return 0;

}