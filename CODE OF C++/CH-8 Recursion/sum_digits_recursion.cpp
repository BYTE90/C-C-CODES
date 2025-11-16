#include <iostream>
using namespace std;

int sumDigits(int n)
{
     if (n == 0)
          return 0;
     return (n % 10) + sumDigits(n / 10);
}

int main()
{
     cout << "=== Sum of Digits using Recursion ===" << endl
          << endl;

     int num;
     cout << "Enter a number: ";
     cin >> num;

     cout << "Sum of digits of " << num << " = " << sumDigits(num) << endl;

     return 0;
}
