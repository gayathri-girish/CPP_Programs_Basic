// Program to Calculate the Simple Interest .


#include <iostream>
using namespace std;

int main()
{
    double P , R , T , SI;                            // P = Principal , R = Rate of Interest , T = Time , SI = Simple Interest .

    cout << "Enter Principal Amount = ";
    cin >> P;

    cout << "Enter Rate of Ineterest = ";
    cin >> R;

    cout << "Enter Time in Years = ";
    cin >> T;

    SI = (P * R * T) / 100;                           // Formula for calculating Simple Interest .

    cout << "Simple Interest = " << SI << endl;

    return 0;
}



/*

Output -

Enter Principal Amount = 2500000
Enter Rate of Ineterest = 3
Enter Time in Years = 4
Simple Interest = 300000

*/