#include <iostream>   // This header file allows us to use input and output functions like cout and cin
using namespace std;  // This allows us to write cout and cin instead of std::cout and std::cin

int main() {          // The main function is the starting point of every C++ program

    int dayNumber;    // Declare an integer variable named dayNumber to store the user's input

    // Ask the user to enter a number representing a day of the week
    cout << "Enter a number between 1 and 7 (1 = Monday, 7 = Sunday): ";

    // Read the number entered by the user from the keyboard
    cin >> dayNumber;

    // Use a switch statement to check the value stored in dayNumber
    // The switch statement compares the variable with different case values
    switch(dayNumber) {

        case 1:  // If the user entered 1
            cout << "Monday" << endl;  // Display Monday
            break;  // Exit the switch statement to prevent checking other cases

        case 2:  // If the user entered 2
            cout << "Tuesday" << endl;  // Display Tuesday
            break;  // Stop executing further cases

        case 3:  // If the user entered 3
            cout << "Wednesday" << endl;  // Display Wednesday
            break;  // Exit switch

        case 4:  // If the user entered 4
            cout << "Thursday" << endl;  // Display Thursday
            break;  // Exit switch

        case 5:  // If the user entered 5
            cout << "Friday" << endl;  // Display Friday
            break;  // Exit switch

        case 6:  // If the user entered 6
            cout << "Saturday" << endl;  // Display Saturday
            break;  // Exit switch

        case 7:  // If the user entered 7
            cout << "Sunday" << endl;  // Display Sunday
            break;  // Exit switch

        default:  
            // The default case runs if the user enters a number
            // that does not match any of the above cases (not between 1 and 7)
            cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }

    // Return 0 indicates that the program executed successfully
    return 0;
}