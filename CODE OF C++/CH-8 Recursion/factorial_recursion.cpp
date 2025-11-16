#include <iostream>
using namespace std;

int factorial(int n)
{
     if (n <= 1)
          return 1;
     return n * factorial(n - 1);
}

int main()
{
     cout << "=== Factorial using Recursion ===" << endl
          << endl;

     int num;
     cout << "Enter a number: ";
     cin >> num;

     cout << num << "! = " << factorial(num) << endl;

     return 0;
}
