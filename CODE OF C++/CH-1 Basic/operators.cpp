#include <iostream>
using namespace std;

int main()
{
     int a = 10, b = 3;

     cout << "=== Arithmetic Operators ===" << endl;
     cout << "a = " << a << ", b = " << b << endl;
     cout << "a + b = " << (a + b) << endl;
     cout << "a - b = " << (a - b) << endl;
     cout << "a * b = " << (a * b) << endl;
     cout << "a / b = " << (a / b) << endl;
     cout << "a % b = " << (a % b) << endl;

     cout << "\n=== Increment/Decrement Operators ===" << endl;
     int x = 5;
     cout << "x = " << x << endl;
     cout << "x++ = " << x++ << endl;
     cout << "After x++: x = " << x << endl;
     cout << "++x = " << ++x << endl;
     cout << "After ++x: x = " << x << endl;
     cout << "x-- = " << x-- << endl;
     cout << "After x--: x = " << x << endl;

     cout << "\n=== Relational Operators ===" << endl;
     cout << "a == b: " << (a == b) << endl;
     cout << "a != b: " << (a != b) << endl;
     cout << "a > b: " << (a > b) << endl;
     cout << "a < b: " << (a < b) << endl;
     cout << "a >= b: " << (a >= b) << endl;
     cout << "a <= b: " << (a <= b) << endl;

     cout << "\n=== Logical Operators ===" << endl;
     bool p = true, q = false;
     cout << boolalpha;
     cout << "p = " << p << ", q = " << q << endl;
     cout << "p && q: " << (p && q) << endl;
     cout << "p || q: " << (p || q) << endl;
     cout << "!p: " << (!p) << endl;
     cout << "!q: " << (!q) << endl;

     cout << "\n=== Assignment Operators ===" << endl;
     int num = 10;
     cout << "num = " << num << endl;
     num += 5;
     cout << "After num += 5: " << num << endl;
     num -= 3;
     cout << "After num -= 3: " << num << endl;
     num *= 2;
     cout << "After num *= 2: " << num << endl;
     num /= 4;
     cout << "After num /= 4: " << num << endl;
     num %= 3;
     cout << "After num %= 3: " << num << endl;

     cout << "\n=== Bitwise Operators ===" << endl;
     int m = 5, n = 3; // 5 = 101, 3 = 011
     cout << "m = " << m << ", n = " << n << endl;
     cout << "m & n: " << (m & n) << endl;   // AND
     cout << "m | n: " << (m | n) << endl;   // OR
     cout << "m ^ n: " << (m ^ n) << endl;   // XOR
     cout << "~m: " << (~m) << endl;         // NOT
     cout << "m << 1: " << (m << 1) << endl; // Left shift
     cout << "m >> 1: " << (m >> 1) << endl; // Right shift

     cout << "\n=== Ternary Operator ===" << endl;
     int max = (a > b) ? a : b;
     cout << "Maximum of " << a << " and " << b << " is: " << max << endl;

     return 0;
}
