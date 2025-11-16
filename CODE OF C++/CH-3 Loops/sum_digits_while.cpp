#include <iostream>
using namespace std;

int main()
{
     cout << "=== While Loop - Sum of Digits ===" << endl
          << endl;

     int num, sum = 0, temp;

     cout << "Enter a number: ";
     cin >> num;

     temp = num;
     while (temp > 0)
     {
          sum += temp % 10;
          temp /= 10;
     }

     cout << "Sum of digits of " << num << " = " << sum << endl;

     return 0;
}
