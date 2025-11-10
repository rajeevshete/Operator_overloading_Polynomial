#include <iostream>
using namespace std;

class Array {
    int arr[5];   // fixed-size array of 5 integers

public:
    // Default constructor
    Array() {
        for (int i = 0; i < 5; ++i)
            arr[i] = i + 1;   // Initialize array with values 1, 2, 3, 4, 5
    }

    // Overload [] (subscript operator)
    int& operator[](int index) {
        return arr[index];    // return reference to the element at given index
    }
};

//int main() {
//    Array a;
//
//    // Access elements using overloaded []
//    cout << "Initial elements: ";
//    for (int i = 0; i < 5; ++i)
//        cout << a[i] << " ";   // same as a.arr[i]
//    cout << endl;
//
//    // Modify using overloaded []
//    a[2] = 100;  // directly changes arr[2]
//
//    cout << "After modification: ";
//    for (int i = 0; i < 5; ++i)
//        cout << a[i] << " ";
//    cout << endl;
//
//    return 0;
//}