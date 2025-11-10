#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class String {
    char* str;
public:
    // Constructor
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy assignment operator
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    // Display function (to check content)
    void show() const {
        cout << str << endl;
    }

    // Destructor
    ~String() {
        delete[] str;
    }
};

//int main() {
//    String s1("Hello");
//    String s2("World");
//
//    cout << "Before assignment:" << endl;
//    cout << "s1 = "; s1.show();
//    cout << "s2 = "; s2.show();
//
//    s2 = s1;  // Uses overloaded copy assignment operator
//
//    cout << "\nAfter assignment:" << endl;
//    cout << "s1 = "; s1.show();
//    cout << "s2 = "; s2.show();
//
//    // Modify s1  
//    String s3("C++");
//    s1 = s3;
//
//    cout << "\nAfter modifying s1: " << endl;
//    cout << "s1 = "; s1.show();
//    cout << "s2 = "; s2.show(); // should remain unchanged
//
//    return 0;
//}
