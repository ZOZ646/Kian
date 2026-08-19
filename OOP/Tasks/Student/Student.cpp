#include <Student.h>
#include <iostream>
#include <string>
using namespace std;

Student::Student() {
    name = "UnKnown";
    age = NULL;
    grade = NULL;
}

Student::Student(string n, int a, float g) {
    Student::name = n;
    Student::age = a;
    Student::grade = g;
}

void Student::set_name (string n) {
    name = n;
}
string Student::get_name () {
    return name;
}

void Student::set_age (int a) {
    age = a;
}
int Student::get_age () {
    return age;
}

void Student::set_grade (float g) {
    grade = g;
}
float Student::get_grade () {
    return grade;
}

Student::~Student () {

}
