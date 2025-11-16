#include <iostream>
using namespace std;

int main()
{
     cout << "=== Ternary Operator (? :) ===" << endl
          << endl;

     // Basic syntax: condition ? value_if_true : value_if_false

     // Example 1: Find maximum
     int a = 10, b = 20;
     int max = (a > b) ? a : b;
     cout << "Maximum of " << a << " and " << b << " is: " << max << endl;

     // Example 2: Even or Odd
     int num = 7;
     cout << num << " is " << ((num % 2 == 0) ? "Even" : "Odd") << endl;

     // Example 3: Pass or Fail
     int marks = 75;
     cout << "Result: " << ((marks >= 40) ? "Pass" : "Fail") << endl;

     // Example 4: Nested ternary
     int score = 85;
     char grade = (score >= 90) ? 'A' : (score >= 80) ? 'B'
                                    : (score >= 70)   ? 'C'
                                                      : 'D';
     cout << "Score " << score << " -> Grade: " << grade << endl;

     return 0;
}
