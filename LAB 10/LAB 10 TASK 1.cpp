#include <iostream>
using namespace std;

// Function declaration: takes one integer parameter "number"
// This function calculates the square and RETURNS the result
int getSquare(int number) {
    
    // Calculate the square of the number
    int square = number * number;
    
    // Return the result back to the calling function
    return square;
}

int main() {
    
    int num;
    
    // Ask user to enter a number
    cout << "Enter a number: ";
    cin >> num;
    
    // Call getSquare(), store the returned value, then display it
    int result = getSquare(num);
    
    cout << "Square of " << num << " = " << result << endl;
    
    return 0;
}