// Program to Find the Largest of Two Numbers .


#include <iostream>
using namespace std;

int main()
{
    int a , b;

    cout << "Enter first number = ";
    cin >> a;

    cout << "Enter second number = ";
    cin >> b;

    if (a > b)
    {
        cout << "Largest number is = " << a << endl;
    }

    else if (b > a)
    {
        cout << "Largest number is = " << b << endl;
    }

    else
    {
        cout << "Both numbers are equal ." << endl;
    }

    return 0;
}



/*

Output -

Enter first number = 6
Enter second number = 8
Largest number is = 8

*/