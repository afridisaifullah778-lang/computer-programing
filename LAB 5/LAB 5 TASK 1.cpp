#include <iostream>
using namespace std;

int main()
{
    int i = 1;   // Initialize variable

    // do block executes first before checking condition
    do
    {
        cout << i << endl;  // Display number
        i++;                // Increase value of i
    }
    while(i <= 10);         // Condition check

    return 0;   // Program ends
}