// Program to Find the Smallest of Two Numbers .


#include <iostream>
using namespace std;

int main()
{
    int a , b;

    cout << "Enter first number = ";
    cin >> a;

    cout << "Enter second number = ";
    cin >> b;

    if (a < b)
    {
        cout << "Smallest number is = " << a << endl;
    }

    else if (b < a)
    {
        cout << "Smallest number is = " << b << endl;
    }

    else
    {
        cout << "Both numbers are equal ." << endl;
    }

    return 0;
}



/*

Output -

Enter first number = 4
Enter second number = 6
Smallest number is = 4

*/