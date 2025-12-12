#include <iostream>
using namespace std;


namespace GP {
    class GrandParent {
    public:
        void display() {
            cout << "This is GrandParent class (namespace GP)" << endl;
        }
    };
}


namespace P {
    class Parent : public GP::GrandParent {
    public:
        void display() {
            cout << "This is Parent class (namespace P)" << endl;
        }
    };
}


namespace C {
    class Child : public P::Parent {
    public:
        void display() {
            cout << "This is Child class (namespace C)" << endl;
        }
    };
}

int main() {
    // Using namespace classes
    GP::GrandParent gp;
    P::Parent p;
    C::Child c;

    cout << "---- Multilevel Inheritance Example ----" << endl;

    gp.display();
    p.display();
    c.display();

    return 0;
}

