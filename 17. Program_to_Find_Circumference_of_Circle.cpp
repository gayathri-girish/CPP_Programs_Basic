// Program to Find the Circumference of a Circle ( given the Radius ) .


#include <iostream>
using namespace std;

int main()
{
    double r , c;                                               // r = radius , c = circumference .

    const double pi = 3.14159;

    cout << "Enter the radius of the circle = ";
    cin >> r;

    c = 2 * pi * r;                                             // Circumference of a circle formula = 2 * pi * r .

    cout << "Circumference of the circle = " << c << endl;

    return 0;
}



/*

Output -

Enter the radius of the circle = 9
Circumference of the circle = 56.5486

*/