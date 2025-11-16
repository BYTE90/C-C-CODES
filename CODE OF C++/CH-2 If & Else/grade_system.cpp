#include <iostream>
using namespace std;

int main()
{
     int marks;

     cout << "=== Grade System ===" << endl
          << endl;
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

     return 0;
}
