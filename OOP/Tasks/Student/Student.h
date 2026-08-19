#pragma once
#include <string>
using namespace std;


class Student {
    private:
        string name;
        int age;
        float grade;

    public:
        Student();
        Student(string n, int a, float g);
        void set_name (string n);
        string get_name ();

        void set_age (int a);
        int get_age ();

        void set_grade (float g);
        float get_grade ();

        ~Student();
};