

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Take input from user
    cout << "Enter a positive integer: ";
    cin >> n;

    // Loop from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i;  // Add each number to sum
    }

    // Display result
    cout << "Sum = " << sum;

    return 0;
}