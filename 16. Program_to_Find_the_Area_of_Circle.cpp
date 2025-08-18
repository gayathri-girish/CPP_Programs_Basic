// Program to Find the Area of a Circle ( given the Radius ) .


#include <iostream>
using namespace std;

int main()
{
    double r, area;                                          // r = radius of the circle , area = area of the circle .

    const double pi = 3.14159;                               // Constant value of pi .

    cout << "Enter the radius of the circle = ";
    cin >> r;

    area = pi * r * r;                                       // Area of the circle formula = pi * r^2 .

    cout << "Area of the circle = " << area << endl;

    return 0;
}



/*

Output -

Enter the radius of the circle = 10
Area of the circle = 314.159

*/