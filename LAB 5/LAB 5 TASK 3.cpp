#include <iostream>
using namespace std;

int main()
{
    int num, i = 1, sum = 0;

    // Ask user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> num;

    // Loop from 1 to the entered number
    while(i <= num)
    {
        sum = sum + i;   // Add current number to sum
        i++;             // Increase i by 1
    }

    // Display the final sum
    cout << "Sum of numbers from 1 to " << num << " is: " << sum << endl;

    return 0;  // End program
}