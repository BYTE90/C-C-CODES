#include <iostream>
using namespace std;

int main()
{
     cout << "=== Increment/Decrement Operators ===" << endl
          << endl;

     // Post-increment
     cout << "--- Post-increment (x++) ---" << endl;
     int x = 5;
     cout << "x = " << x << endl;
     cout << "x++ = " << x++ << " (use current value, then increment)" << endl;
     cout << "After x++: x = " << x << endl
          << endl;

     // Pre-increment
     cout << "--- Pre-increment (++x) ---" << endl;
     x = 5;
     cout << "x = " << x << endl;
     cout << "++x = " << ++x << " (increment first, then use)" << endl;
     cout << "After ++x: x = " << x << endl
          << endl;

     // Post-decrement
     cout << "--- Post-decrement (x--) ---" << endl;
     x = 5;
     cout << "x = " << x << endl;
     cout << "x-- = " << x-- << " (use current value, then decrement)" << endl;
     cout << "After x--: x = " << x << endl
          << endl;

     // Pre-decrement
     cout << "--- Pre-decrement (--x) ---" << endl;
     x = 5;
     cout << "x = " << x << endl;
     cout << "--x = " << --x << " (decrement first, then use)" << endl;
     cout << "After --x: x = " << x << endl;

     return 0;
}
