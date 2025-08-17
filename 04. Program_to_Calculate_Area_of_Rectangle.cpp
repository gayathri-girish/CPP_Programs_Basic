// Program to Calculate the area of a Rectangle ( given length and breadth ).


#include <iostream>
using namespace std;

int main()
{
    double l , b , area;                                   // l=length , b=breadth , a = area of a rectangle .

    cout << "Enter the Length of the Rectangle = ";
    cin >> l;

    cout << "Enter the Breadth of the Rectangle = ";
    cin >> b;

    area = l * b;                                         // Area of Rectangle = length * breadth .

    cout << "Area of Rectangle = " << area << endl;

    return 0;
}



/*

Output -

Enter the Length of the Rectangle = 2
Enter the Breadth of the Rectangle = 4
Area of Rectangle = 8

*/