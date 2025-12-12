#include<iostream>
using namespace std;

class student {
private:
    string name;
    int roll;

public:
    
    student(string n, int r) {
        name = n;
        roll = r;
    }

    
    student(const student &s) {
        name = s.name;
        roll = s.roll;
        cout << "Copy constructor called" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    
    student s1("Alice", 101);

    
    student s2 = s1;

    s1.display();
    s2.display();

    return 0;
}

