#include <iostream>
using namespace std;

int main() {
    int numbers[5];  // Array to store user input
    int sum = 0;

    // Take input from user
    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];  // Store input in array
    }

    // Calculate sum
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];  // Add each element to sum
    }

    // Display result
    cout << "Sum of numbers = " << sum << endl;

    return 0;
}
