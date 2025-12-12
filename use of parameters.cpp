#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int roll;

public:
    Student(string n, int r) {
        name = n;
        roll = r;
        cout << "Parameterized constructor called" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {

    Student s1("Alice", 101);
    s1.display();

    Student s2("Bob", 102);
    s2.display();

    return 0;
}

