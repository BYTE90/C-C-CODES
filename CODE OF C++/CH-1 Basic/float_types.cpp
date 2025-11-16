#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     // Floating point types
     float price = 99.99f;
     double pi = 3.14159265359;
     long double bigNum = 3.141592653589793238L;

     cout << "=== Floating Point Types ===" << endl
          << endl;

     cout << fixed << setprecision(2);
     cout << "float: " << price << endl;

     cout << setprecision(10);
     cout << "double: " << pi << endl;

     cout << setprecision(15);
     cout << "long double: " << bigNum << endl;

     cout << "\nSize of floating point types:" << endl;
     cout << "sizeof(float): " << sizeof(float) << " bytes" << endl;
     cout << "sizeof(double): " << sizeof(double) << " bytes" << endl;
     cout << "sizeof(long double): " << sizeof(long double) << " bytes" << endl;

     // Precision demonstration
     cout << "\n--- Precision Comparison ---" << endl;
     float f = 1.23456789f;
     double d = 1.23456789;
     cout << setprecision(10);
     cout << "float:  " << f << endl;
     cout << "double: " << d << endl;

     return 0;
}
