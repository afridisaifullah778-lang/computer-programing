
#include <iostream>   // This header file is needed to use input/output functions like cout and cin
#include <cctype>     // This header file is needed to use the toupper() function
using namespace std;  // Allows us to use standard library names without writing std:: before them

int main() {          // The main function is the starting point of program execution

    char grade;       // Declare a character variable named 'grade' to store the user's input

    // Ask the user to enter a grade
    cout << "Enter your grade (A, B, C, D, F): ";

    // Take a single character input from the user and store it in 'grade'
    cin >> grade;

    // Convert the entered character to uppercase
    // This ensures that if the user enters lowercase (a, b, c, etc.)
    // it will still be treated correctly
    grade = toupper(grade);

    // Use a switch statement to compare the value of 'grade'
    // The switch checks each case one by one
    switch(grade) {

        case 'A':   // If the grade entered is 'A'
            cout << "Excellent" << endl;  // Display "Excellent"
            break;  // Exit the switch statement to prevent execution of other cases

        case 'B':   // If the grade entered is 'B'
            cout << "Very Good" << endl;  // Display "Very Good"
            break;  // Stop further checking

        case 'C':   // If the grade entered is 'C'
            cout << "Good" << endl;  // Display "Good"
            break;

        case 'D':   // If the grade entered is 'D'
            cout << "Pass" << endl;  // Display "Pass"
            break;

        case 'F':   // If the grade entered is 'F'
            cout << "Fail" << endl;  // Display "Fail"
            break;

        default:
            // The default case runs if the entered character
            // does not match any of the valid grades (A, B, C, D, F)
            cout << "Invalid grade entered!" << endl;
    }

    // Return 0 indicates that the program ended successfully
    return 0;
}