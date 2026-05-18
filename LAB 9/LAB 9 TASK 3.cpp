#include <iostream>
using namespace std;

// Function declaration
int calculateSum(int arr[], int size);

int main()
{
    // Declare array of size 10
    int numbers[10];
    int sum;
    float average;

    // Taking input from user
    cout << "Enter 10 integer values:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }

    // Calling function to calculate sum
    sum = calculateSum(numbers, 10);

    // Calculating average
    average = sum / 10.0;

    // Displaying results
    cout << "Sum of elements = " << sum << endl;
    cout << "Average of elements = " << average << endl;

    return 0;
}

// Function definition
int calculateSum(int arr[], int size)
{
    int total = 0;

    // Loop for calculating sum
    for (int i = 0; i < size; i++)
    {
        total = total + arr[i];
    }

    // Return total sum
    return total;
}