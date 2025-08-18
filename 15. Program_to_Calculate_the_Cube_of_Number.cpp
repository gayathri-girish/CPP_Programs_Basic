// Program to Calculate the Cube of a Number .


#include <iostream>
using namespace std;

int main()
{
    int a , cube;                                              // cube = cube of the number a .

    cout << "Enter a number = ";
    cin >> a;

    cube = a * a * a;                                          // Cube of a number formula = a^3 = a * a * a .

    cout << "Cube of " << a << " is = " << cube << endl;

    return 0;
}



/* Output -

Enter a number = 2
Cube of 2 is = 8

*/