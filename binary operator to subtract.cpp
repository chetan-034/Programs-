#include <iostream>
using namespace std;

class Distance {
    int feet, inches;
public:
    Distance(int f=0, int i=0) : feet(f), inches(i) {}

    Distance operator-(const Distance &d) {
        int f = feet - d.feet;
        int i = inches - d.inches;
        if(i < 0) {  
            i += 15;
            f--;
        }
        return Distance(f, i);
    }

    void display() {
        cout << feet << " feet " << inches << " inches\n";
    }
};

int main() {
    Distance d1(10, 5), d2(6, 8);
    Distance d3 = d1 - d2;
    d3.display();
    return 0;
}

