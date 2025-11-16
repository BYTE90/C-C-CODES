#include <iostream>
using namespace std;

int main()
{
     cout << "=== Type Casting in C++ ===" << endl
          << endl;

     // Implicit type casting (automatic)
     cout << "--- Implicit Type Casting ---" << endl;
     int intNum = 10;
     float floatNum = intNum; // int to float
     cout << "int to float: " << intNum << " -> " << floatNum << endl;

     char ch = 'A';
     int asciiValue = ch; // char to int
     cout << "char to int: " << ch << " -> " << asciiValue << endl;

     // C-style casting
     cout << "\n--- C-Style Casting ---" << endl;
     float pi = 3.14159;
     int truncatedPi = (int)pi; // float to int
     cout << "float to int: " << pi << " -> " << truncatedPi << endl;

     // C++ style casting (recommended)
     cout << "\n--- C++ Style Casting ---" << endl;

     // static_cast (compile-time casting)
     double dNum = 9.8;
     int iNum = static_cast<int>(dNum);
     cout << "static_cast<int>: " << dNum << " -> " << iNum << endl;

     int a = 10, b = 3;
     float division = static_cast<float>(a) / b;
     cout << "Division without casting: " << a << " / " << b << " = " << a / b << endl;
     cout << "Division with casting: " << a << " / " << b << " = " << division << endl;

     // Type promotion in expressions
     cout << "\n--- Type Promotion ---" << endl;
     char c1 = 100, c2 = 50;
     int result = c1 + c2; // char promoted to int
     cout << "char + char: " << (int)c1 << " + " << (int)c2 << " = " << result << endl;

     int i = 5;
     float f = 2.5;
     float mixedResult = i + f; // int promoted to float
     cout << "int + float: " << i << " + " << f << " = " << mixedResult << endl;

     // Practical examples
     cout << "\n--- Practical Examples ---" << endl;

     // Calculating percentage
     int marks = 450;
     int total = 500;
     float percentage = (static_cast<float>(marks) / total) * 100;
     cout << "Percentage: " << marks << "/" << total << " = " << percentage << "%" << endl;

     // Converting Celsius to Fahrenheit
     int celsius = 25;
     float fahrenheit = (celsius * 9.0 / 5.0) + 32;
     cout << "Temperature: " << celsius << "°C = " << fahrenheit << "°F" << endl;

     // Character arithmetic
     char lowercase = 'a';
     char uppercase = lowercase - 32; // ASCII manipulation
     cout << "Lowercase to uppercase: " << lowercase << " -> " << uppercase << endl;

     return 0;
}
