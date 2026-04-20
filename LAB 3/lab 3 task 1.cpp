#include <iostream>   
using namespace std;

int main()
{
    int num1, num2;   // Variables to store two numbers

    cout << "Enter first number: ";
    cin >> num1;      // Taking first number from user

    cout << "Enter second number: ";
    cin >> num2;      // Taking second number from user

    // Checking if both numbers are equal
    if (num1 == num2)
    {
        cout << "Both numbers are equal.";
    }

    // Checking if first number is greater
    if (num1 > num2)
    {
        cout << "First number is greater than second.";
    }

    // Checking if first number is smaller
    if (num1 < num2)
    {
        cout << "First number is less than second.";
    }

    return 0;   // Program ends
}