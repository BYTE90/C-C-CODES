#include <iostream>
#include <string>
using namespace std;

int main()
{
     cout << "=== Conditional (Ternary) Operator ===" << endl
          << endl;

     // Syntax: condition ? value_if_true : value_if_false

     // Example 1: Find maximum of two numbers
     cout << "--- Maximum of Two Numbers ---" << endl;
     int a = 10, b = 20;
     int max = (a > b) ? a : b;
     cout << "a = " << a << ", b = " << b << endl;
     cout << "Maximum: " << max << endl;

     // Example 2: Check even or odd
     cout << "\n--- Even or Odd ---" << endl;
     int num = 15;
     cout << "Number: " << num << endl;
     cout << num << " is " << ((num % 2 == 0) ? "Even" : "Odd") << endl;

     // Example 3: Check positive, negative, or zero
     cout << "\n--- Sign Checker ---" << endl;
     int n = -5;
     cout << "Number: " << n << endl;
     string result = (n > 0) ? "Positive" : (n < 0) ? "Negative"
                                                    : "Zero";
     cout << "Result: " << result << endl;

     // Example 4: Grade assignment
     cout << "\n--- Grade Assignment ---" << endl;
     int marks = 85;
     char grade = (marks >= 90) ? 'A' : (marks >= 80) ? 'B'
                                    : (marks >= 70)   ? 'C'
                                    : (marks >= 60)   ? 'D'
                                                      : 'F';
     cout << "Marks: " << marks << endl;
     cout << "Grade: " << grade << endl;

     // Example 5: Absolute value
     cout << "\n--- Absolute Value ---" << endl;
     int number = -42;
     int absolute = (number < 0) ? -number : number;
     cout << "Number: " << number << endl;
     cout << "Absolute value: " << absolute << endl;

     // Example 6: Leap year check
     cout << "\n--- Leap Year Checker ---" << endl;
     int year = 2024;
     string isLeap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? "Leap Year" : "Not a Leap Year";
     cout << "Year: " << year << endl;
     cout << isLeap << endl;

     // Example 7: Discount calculator
     cout << "\n--- Discount Calculator ---" << endl;
     float price = 1000.0;
     int quantity = 6;
     float discount = (quantity > 5) ? 0.10 : (quantity > 2) ? 0.05
                                                             : 0.0;
     float finalPrice = price * quantity * (1 - discount);
     cout << "Price: " << price << ", Quantity: " << quantity << endl;
     cout << "Discount: " << (discount * 100) << "%" << endl;
     cout << "Final Price: " << finalPrice << endl;

     // Example 8: Minimum of three numbers
     cout << "\n--- Minimum of Three Numbers ---" << endl;
     int x = 15, y = 10, z = 20;
     int min = (x < y) ? ((x < z) ? x : z) : ((y < z) ? y : z);
     cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
     cout << "Minimum: " << min << endl;

     // Example 9: Voting eligibility
     cout << "\n--- Voting Eligibility ---" << endl;
     int age = 17;
     cout << "Age: " << age << endl;
     cout << "Eligible to vote: " << ((age >= 18) ? "Yes" : "No") << endl;

     // Example 10: Character case converter
     cout << "\n--- Case Converter ---" << endl;
     char ch = 'a';
     char converted = (ch >= 'a' && ch <= 'z') ? (ch - 32) : (ch >= 'A' && ch <= 'Z') ? (ch + 32)
                                                                                      : ch;
     cout << "Original: " << ch << endl;
     cout << "Converted: " << converted << endl;

     return 0;
}
