#include <iostream>
using namespace std;

int main()
{
    float celsius, fahrenheit;

    // Asking user to enter temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Converting Celsius to Fahrenheit using formula
    fahrenheit = (celsius * 9/5) + 32;

    // Displaying result
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0; // End of program
}