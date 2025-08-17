// Program to Check if a Number is Even or Odd .


#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter a number = ";
    cin >> a;

    if (a % 2 == 0)                                      // To check if the number is even .
    {
        cout << a << " is an even number ." << endl;
    }

    else
    {
        cout << a << " is an odd number ." << endl;
    }

    return 0;
}



/*

Output (1) -

Enter a number = 2
2 is an even number .

Output (2) -

Enter a number = 7
7 is an odd number .

*/