#include <iostream>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNo;
    float marks;

public:
    void setStudentDetails(string n, int a, int r, float m) {
        setPersonDetails(n, a);  
        rollNo = r;
        marks = m;
    }

    void displayStudent() {
        cout << "---- Student Details ----" << endl;
        displayPerson();  
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks  : " << marks << endl;
    }
};

int main() {
    Student s;

    string name;
    int age, roll;
    float marks;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter marks: ";
    cin >> marks;

    s.setStudentDetails(name, age, roll, marks);
    cout << endl;
    s.displayStudent();

    return 0;
}

