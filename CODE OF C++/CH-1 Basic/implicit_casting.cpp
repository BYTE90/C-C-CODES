#include <iostream>
using namespace std;

int main()
{
     cout << "=== Implicit Type Casting ===" << endl
          << endl;

     // Automatic conversion by compiler

     // Example 1: int to float
     int intNum = 10;
     float floatNum = intNum;
     cout << "int to float: " << intNum << " -> " << floatNum << endl;

     // Example 2: char to int
     char ch = 'A';
     int asciiValue = ch;
     cout << "char to int: " << ch << " -> " << asciiValue << " (ASCII)" << endl;

     // Example 3: int to double
     int x = 5;
     double y = x;
     cout << "int to double: " << x << " -> " << y << endl;

     return 0;
}
