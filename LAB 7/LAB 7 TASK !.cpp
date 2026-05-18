#include <iostream>
using namespace std;

int main() {
    // Declare an integer array of size 5
    int numbers[5] = {10, 20, 30, 40, 50};

    // Display array elements using a loop
    cout << "Array Elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";  // Print each element
    }

    return 0;
}