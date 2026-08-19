#include <Student.h>
#include <iostream>
using namespace std;

int main () {
    Student s1("Ali", 18, 85.5);
    Student s2("Mazen", 20, 89.2);
    Student s3("Samy", 16, 70.4);

    s1.set_age(21);
    s3.set_name("Mohammed");

    cout << "Student 2 Name: " << s2.get_name() << endl;
    cout << "Student 3 Grade: " << s3.get_grade() << endl;
    cout << "Student 1 Age: " << s1.get_age();

    return 0;
}