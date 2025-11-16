#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     cout << "=== Explicit Type Casting ===" << endl
          << endl;

     // Manual conversion using (type) or static_cast<type>()

     // Example 1: float to int
     float pi = 3.14159;
     int truncatedPi = (int)pi;
     cout << fixed << setprecision(5);
     cout << "float to int: " << pi << " -> " << truncatedPi << " (decimal part lost)" << endl;

     // Example 2: Accurate division
     int a = 10, b = 3;
     cout << "\nDivision without casting: " << a << " / " << b << " = " << (a / b) << endl;
     float division = static_cast<float>(a) / b;
     cout << setprecision(2);
     cout << "Division with casting: " << a << " / " << b << " = " << division << endl;

     // Example 3: double to int
     double value = 99.99;
     int intValue = static_cast<int>(value);
     cout << "\ndouble to int: " << value << " -> " << intValue << endl;

     return 0;
}
