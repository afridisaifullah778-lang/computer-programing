#include <iostream>
using namespace std;

int main()
{
    // Declaring a 4x4 matrix
    int matrix[4][4];

    // Taking input from user
    cout << "Enter 16 elements for 4x4 matrix:\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Assuming first element is maximum
    int max = matrix[0][0];

    // Finding maximum value
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }

    // Displaying maximum value
    cout << "\nMaximum Value in Matrix = " << max;

    return 0;
}