// Program to Swap two Variables .


#include <iostream>
using namespace std;

int main()
{
    int a , b , temp;                                                   // a = first variable , b = second variable , temp = temporary variable .

    cout << "Enter first number = ";
    cin >> a;

    cout << "Enter second number = ";
    cin >> b;

    cout << "Before swapping : a = " << a << ", b = " << b << endl;

    temp = a;                                                          // Stores the value of a in temp .
    a = b;                                                             // Assigns the value of b to a .
    b = temp;                                                          // Assigns the value of temp (original a) to b .

    cout << "After swapping : a = " << a << ", b = " << b << endl;

    return 0;
}



/*

Output -

Enter first number = 4
Enter second number = 3
Before swapping : a = 4, b = 3
After swapping : a = 3, b = 4

*/