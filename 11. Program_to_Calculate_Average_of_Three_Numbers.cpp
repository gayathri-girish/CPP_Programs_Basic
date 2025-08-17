// Program to Calculate the Average of Three Numbers .


#include <iostream>
using namespace std;

int main()
{
    double a , b , c , avg;                                     // a = first number , b = second number , c = third number , avg = average of three numbers .

    cout << "Enter first number = ";
    cin >> a;

    cout << "Enter second number = ";
    cin >> b;

    cout << "Enter third number = ";
    cin >> c;

    avg = (a + b + c) / 3;                                     // The formula to calculate the average of three numbers .

    cout << "Average of three numbers = " << avg << endl;

    return 0;
}



/*

Output -

Enter first number = 5
Enter second number = 7
Enter third number = 9
Average of three numbers = 7

*/