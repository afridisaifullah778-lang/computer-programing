#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;   // User enters number

    // Checking if number is positive
    if (num > 0)
    {
        cout << "Number is positive.";
    }

    // Checking if number is negative
    else if (num < 0)
    {
        cout << "Number is negative.";
    }

    // If neither positive nor negative
    else
    {
        cout << "Number is zero.";
    }

    return 0;
}