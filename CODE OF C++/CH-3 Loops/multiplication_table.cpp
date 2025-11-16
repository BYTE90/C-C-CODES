#include <iostream>
using namespace std;

int main()
{
     cout << "=== For Loop - Multiplication Table ===" << endl
          << endl;

     int num;
     cout << "Enter a number: ";
     cin >> num;

     cout << "\nMultiplication table of " << num << ":" << endl;
     for (int i = 1; i <= 10; i++)
     {
          cout << num << " x " << i << " = " << (num * i) << endl;
     }

     return 0;
}
