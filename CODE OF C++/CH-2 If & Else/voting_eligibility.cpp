#include <iostream>
using namespace std;

int main()
{
     int age;
     char nationality;

     cout << "=== Voting Eligibility Checker ===" << endl
          << endl;
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

     return 0;
}
