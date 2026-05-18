#include <iostream>
using namespace std;

int main()
{
    // Declaring a 3x3 array
    int matrix[3][3];

    // Variable for total sum
    int totalSum = 0;

    // Taking input from user
    cout << "Enter 9 elements for 3x3 matrix:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Displaying matrix
    cout << "\nMatrix is:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    // Calculating sum of each row
    cout << "\nSum of Rows:\n";

    for (int i = 0; i < 3; i++)
    {
        int rowSum = 0;

        for (int j = 0; j < 3; j++)
        {
            rowSum = rowSum + matrix[i][j];
        }

        cout << "Row " << i + 1 << " Sum = " << rowSum << endl;
    }

    // Calculating sum of each column
    cout << "\nSum of Columns:\n";

    for (int j = 0; j < 3; j++)
    {
        int colSum = 0;

        for (int i = 0; i < 3; i++)
        {
            colSum = colSum + matrix[i][j];
        }

        cout << "Column " << j + 1 << " Sum = " << colSum << endl;
    }

    // Calculating total sum of matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            totalSum = totalSum + matrix[i][j];
        }
    }

    cout << "\nTotal Sum of all Elements = " << totalSum;

    return 0;
}