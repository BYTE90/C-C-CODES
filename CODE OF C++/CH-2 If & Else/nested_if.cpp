#include <iostream>
using namespace std;

int main()
{
     cout << "=== Nested If Statements ===" << endl
          << endl;

     // Example 1: Grade system with nested conditions
     int marks;
     cout << "Enter your marks (0-100): ";
     cin >> marks;

     if (marks >= 0 && marks <= 100)
     {
          if (marks >= 90)
          {
               cout << "Grade: A+ (Excellent!)" << endl;
          }
          else if (marks >= 80)
          {
               cout << "Grade: A (Very Good)" << endl;
          }
          else if (marks >= 70)
          {
               cout << "Grade: B (Good)" << endl;
          }
          else if (marks >= 60)
          {
               cout << "Grade: C (Average)" << endl;
          }
          else if (marks >= 50)
          {
               cout << "Grade: D (Below Average)" << endl;
          }
          else
          {
               cout << "Grade: F (Fail)" << endl;
          }
     }
     else
     {
          cout << "Invalid marks! Enter between 0-100" << endl;
     }

     // Example 2: Number classification
     cout << "\n--- Number Classification ---" << endl;
     int num;
     cout << "Enter a number: ";
     cin >> num;

     if (num > 0)
     {
          cout << num << " is positive" << endl;
          if (num % 2 == 0)
          {
               cout << "and it's even" << endl;
          }
          else
          {
               cout << "and it's odd" << endl;
          }
     }
     else if (num < 0)
     {
          cout << num << " is negative" << endl;
          if (num % 2 == 0)
          {
               cout << "and it's even" << endl;
          }
          else
          {
               cout << "and it's odd" << endl;
          }
     }
     else
     {
          cout << "Number is zero" << endl;
     }

     // Example 3: Age and eligibility checker
     cout << "\n--- Eligibility Checker ---" << endl;
     int age;
     char nationality;
     cout << "Enter your age: ";
     cin >> age;
     cout << "Are you an Indian citizen? (y/n): ";
     cin >> nationality;

     if (age >= 18)
     {
          if (nationality == 'y' || nationality == 'Y')
          {
               cout << "You are eligible to vote in India!" << endl;
          }
          else
          {
               cout << "You must be an Indian citizen to vote." << endl;
          }
     }
     else
     {
          cout << "You must be 18 or older to vote." << endl;
     }

     // Example 4: Triangle type checker
     cout << "\n--- Triangle Type Checker ---" << endl;
     int side1, side2, side3;
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
