#include <iostream>
using namespace std;

int main()
{
    int num;

    // Take table number from user
    cout << "Enter a number (1 to 10): ";
    cin >> num;

    // Display multiplication table
    for(int j = 1; j <= 10; j++)
    {
        cout << num << " x " << j << " = " << num * j << endl;
    }

    return 0;
}