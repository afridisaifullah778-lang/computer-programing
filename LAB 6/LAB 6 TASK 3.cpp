#include <iostream>
using namespace std;

int main() {
    int rows;

    // Get user input for the number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for the number of rows
    for (int i = 1; i <= rows; ++i) {
        
        // Inner loop to print asterisks in each row
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        
        // Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}