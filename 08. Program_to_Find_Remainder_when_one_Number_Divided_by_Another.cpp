// Program to Find the Remainder when one Number is Divided by Another .


#include <iostream>
using namespace std;

int main()
{
    int dividend , divisor , remainder;
    
    cout << "Enter the dividend = ";
    cin >> dividend;

    cout << "Enter the divisor = ";
    cin >> divisor;

    remainder = dividend % divisor;

    cout << "Remainder = " << remainder << endl;
    
    return 0;
}



/*

Output (1) -

Enter the dividend = 8
Enter the divisor = 4
Remainder = 0

Output (2) -

Enter the dividend = 2
Enter the divisor = 4
Remainder = 2

*/