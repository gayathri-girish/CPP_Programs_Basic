// Program to Calculate the Power of a Number ( using the exponent operator ) .


#include <iostream>
using namespace std;

int main()
{
    int base , exponent;                                                                        // base = number to be raised to a power , exponent = power to which the base is raised .

    cout << "Enter the base = ";
    cin >> base;

    cout << "Enter the exponent = ";
    cin >> exponent;

    int result = base;                                                                          // Intializing result with base value .

    for ( int i = 1; i < exponent; i++ )                                                        // Loop to multiply the base with itself exponent - 1 times .
    {
        result *= base;                                                                         // result = result * base .
    }

    cout << base << " raised to the power of " << exponent << " is " << result << endl;

    return 0;
}



/*

Output -

Enter the base = 2
Enter the exponent = 2
2 raised to the power of 2 is 4

*/