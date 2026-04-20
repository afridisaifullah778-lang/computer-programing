#include <iostream>
using namespace std;

int main()
{
    // Declaring variables of different data types
    int a = 10;          // Integer variable
    float b = 5.5;       // Float variable
    char c = 'A';        // Character variable
    double d = 20.456;   // Double variable

    // Displaying values of variables
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;
    cout << "Value of d: " << d << endl;

    // Displaying memory size of each variable using sizeof()
    cout << "\nMemory Size of a: " << sizeof(a) << " bytes" << endl;
    cout << "Memory Size of b: " << sizeof(b) << " bytes" << endl;
    cout << "Memory Size of c: " << sizeof(c) << " bytes" << endl;
    cout << "Memory Size of d: " << sizeof(d) << " bytes" << endl;

    // Displaying memory location (address) of variables using & operator
    cout << "\nMemory Address of a: " << &a << endl;
    cout << "Memory Address of b: " << &b << endl;
    cout << "Memory Address of c: " << (void*)&c << endl;
    cout << "Memory Address of d: " << &d << endl;

    return 0; // End of program
}