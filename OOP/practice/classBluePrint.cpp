#include <iostream>
using namespace std;

class Car {
    private:
        string factory;
        int year;
        string model;

    public:
        void setFactory (string f) {
            factory = f;
        }
        void setYear (int y) {
            year = y;
        }
        void setModel (string m) {
            model = m;
        }

        string getFactory () {
            return factory;
        }
        string getModel () {
            return model;
        }
        int getYear () {
            return year;
        }
};

int main () {

    Car c;
    c.setFactory ("Tyota");
    c.setYear (2013);
    c.setModel ("Corolla");

    cout << "Factory: " << c.getFactory() << endl;
    cout << "Year: " << c.getYear() << endl;
    cout << "Model: " << c.getModel() << endl;

}