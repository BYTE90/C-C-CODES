#include <iostream>
using namespace std;

int main()
{
     cout << "=== Assignment Operators ===" << endl
          << endl;

     int num = 10;
     cout << "Initial value: num = " << num << endl
          << endl;

     num += 5; // num = num + 5
     cout << "num += 5  =>  num = " << num << endl;

     num -= 3; // num = num - 3
     cout << "num -= 3  =>  num = " << num << endl;

     num *= 2; // num = num * 2
     cout << "num *= 2  =>  num = " << num << endl;

     num /= 4; // num = num / 4
     cout << "num /= 4  =>  num = " << num << endl;

     num %= 3; // num = num % 3
     cout << "num %= 3  =>  num = " << num << endl;

     return 0;
}
