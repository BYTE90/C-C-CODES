#include <iostream>
using namespace std;

int main()
{
     int side1, side2, side3;

     cout << "=== Triangle Type Checker ===" << endl
          << endl;
     cout << "Enter three sides of triangle: ";
     cin >> side1 >> side2 >> side3;

     if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
     {
          cout << "Valid triangle!" << endl;
          if (side1 == side2 && side2 == side3)
          {
               cout << "Type: Equilateral Triangle" << endl;
          }
          else if (side1 == side2 || side2 == side3 || side1 == side3)
          {
               cout << "Type: Isosceles Triangle" << endl;
          }
          else
          {
               cout << "Type: Scalene Triangle" << endl;
          }
     }
     else
     {
          cout << "Not a valid triangle!" << endl;
     }

     return 0;
}
