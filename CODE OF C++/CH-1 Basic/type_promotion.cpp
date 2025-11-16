#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     cout << "=== Type Promotion in Expressions ===" << endl
          << endl;

     // Smaller types promoted to larger types in expressions

     // Example 1: char promoted to int
     char c1 = 100, c2 = 50;
     int result = c1 + c2;
     cout << "char + char: " << (int)c1 << " + " << (int)c2 << " = " << result << endl;
     cout << "(char values promoted to int for calculation)" << endl;

     // Example 2: int promoted to float
     cout << "\n--- int + float ---" << endl;
     int i = 5;
     float f = 2.5;
     float mixedResult = i + f;
     cout << fixed << setprecision(1);
     cout << "int + float: " << i << " + " << f << " = " << mixedResult << endl;
     cout << "(int promoted to float)" << endl;

     // Example 3: int promoted to double
     cout << "\n--- int * double ---" << endl;
     int x = 3;
     double d = 1.5;
     double product = x * d;
     cout << "int * double: " << x << " * " << d << " = " << product << endl;

     return 0;
}
