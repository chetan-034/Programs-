#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int roll;

public:
    Student() {
        name = "ram";
        roll = 0;
        cout << "Default constructor called" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student s1;
    s1.display();

    return 0;
}

