#include<iostream>
using namespace std;

class vehicle {
    public:
        void move() {
            cout << "Vehicle is moving" << endl;
        }
};

class car : public vehicle {
    public:
        void start() {
            cout << "Car started" << endl;
        }
};

class sportscar : public car {
    public:
        void turbo() {
            cout << "Sports car in turbo mode!" << endl;
        }
};

int main() {
    sportscar s;    
    s.move();       
    s.start();     
    s.turbo();      
    return 0;
}

