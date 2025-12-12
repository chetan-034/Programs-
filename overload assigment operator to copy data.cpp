#include <iostream>
#include <cstring>
using namespace std;

class Person {
    char* name;
    int age;
public:
    Person(const char* n = "", int a = 0) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        age = a;
    }

    
    Person(const Person& p) {
        name = new char[strlen(p.name) + 1];
        strcpy(name, p.name);
        age = p.age;
    }

    
    Person& operator=(const Person& p) {
        if (this != &p) {  
            delete[] name;
            name = new char[strlen(p.name) + 1];
            strcpy(name, p.name);
            age = p.age;
        }
        return *this;
    }

    
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    
    ~Person() {
        delete[] name;
    }
};

int main() {
    Person p1("Alice", 45);
    Person p2("Bob", 60);

    cout << "Before assignment:\n";
    p1.display();
    p2.display();

    p2 = p1; 

    cout << "\nAfter assignment (p2 = p1):\n";
    p1.display();
    p2.display();

    return 0;
}

