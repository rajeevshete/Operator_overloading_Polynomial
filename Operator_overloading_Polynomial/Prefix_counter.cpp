#include <iostream>
using namespace std;

class Counter {
    int count;
public:
    Counter(int c = 0) : count(c) {}

    // Prefix ++
    Counter operator++() {
        ++count;
        return *this;
    }

    void show() const {
        cout << "Count = " << count << endl;
    }
};

//int main() {
//    Counter c1(5);    // initialize with 5
//
//    cout << "Before increment: ";
//    c1.show();
//
//    ++c1;   // Calls the overloaded prefix ++ operator
//
//    cout << "After prefix ++: ";
//    c1.show();
//
//    // You can also chain it because it returns a Counter object
//    ++(++c1);
//
//    cout << "After chaining (++(++c1)): ";
//    c1.show();
//
//    return 0;
//}
