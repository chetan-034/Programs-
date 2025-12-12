#include <iostream>  
using namespace std;

class A {
public:
    int x;
    A() {  
        x = 10;
        cout << "\nIn A constructor";
    }
};

class B {
public:
    int y;
    A a;   

    B() {   
        y = 20;
        cout << "\nIn B constructor";
    }

    void show() {
        cout << "\nX = " << a.x << "  Y = " << y;
    }
};

int main() {
    B b;       
    b.show();  
    return 0;
}

