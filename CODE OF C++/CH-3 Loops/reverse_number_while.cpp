#include <iostream>
using namespace std;

int main()
{
     cout << "=== While Loop - Reverse Number ===" << endl
          << endl;

     int num, reversed = 0, temp;

     cout << "Enter a number: ";
     cin >> num;

     temp = num;
     while (temp > 0)
     {
          reversed = reversed * 10 + temp % 10;
          temp /= 10;
     }

     cout << "Original: " << num << endl;
     cout << "Reversed: " << reversed << endl;

     return 0;
}
