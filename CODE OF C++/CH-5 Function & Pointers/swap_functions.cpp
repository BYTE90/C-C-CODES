#include <iostream>
using namespace std;

// Pass by value - doesn't swap
void swapByValue(int a, int b)
{
     int temp = a;
     a = b;
     b = temp;
}

// Pass by reference - swaps
void swapByReference(int &a, int &b)
{
     int temp = a;
     a = b;
     b = temp;
}

int main()
{
     cout << "=== Pass by Value vs Pass by Reference ===" << endl
          << endl;

     int x = 10, y = 20;

     cout << "Before: x = " << x << ", y = " << y << endl;

     swapByValue(x, y);
     cout << "After swapByValue: x = " << x << ", y = " << y << " (No change)" << endl;

     swapByReference(x, y);
     cout << "After swapByReference: x = " << x << ", y = " << y << " (Swapped!)" << endl;

     return 0;
}
