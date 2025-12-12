#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char str[100];
public:
    MyString(const char* s = "") {
        strcpy(str, s);
    }

    
    friend bool operator>(const MyString &s1, const MyString &s2);
    friend bool operator<(const MyString &s1, const MyString &s2);
    friend bool operator==(const MyString &s1, const MyString &s2);

    void display() {
        cout << str << endl;
    }
};

bool operator>(const MyString &s1, const MyString &s2) {
    return strcmp(s1.str, s2.str) > 0;
}

bool operator<(const MyString &s1, const MyString &s2) {
    return strcmp(s1.str, s2.str) < 0;
}

bool operator==(const MyString &s1, const MyString &s2) {
    return strcmp(s1.str, s2.str) == 0;
}

int main() {
    MyString s1("Apple");
    MyString s2("grape");

    cout << "String 1: "; s1.display();
    cout << "String 2: "; s2.display();

    if (s1 > s2)
        cout << "String 1 is greater than String 2\n";
    else if (s1 < s2)
        cout << "String 1 is smaller than String 2\n";
    else if (s1 == s2)
        cout << "Both strings are equal\n";

    return 0;
}

