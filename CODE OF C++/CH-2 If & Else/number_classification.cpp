#include <iostream>
using namespace std;

int main()
{
     int num;

     cout << "=== Number Classification ===" << endl
          << endl;
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

     return 0;
}
