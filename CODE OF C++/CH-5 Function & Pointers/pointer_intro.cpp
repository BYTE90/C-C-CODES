#include <iostream>
using namespace std;

int main()
{
     cout << "=== Pointer Basics ===" << endl
          << endl;

     int num = 10;
     int *ptr = &num;

     cout << "Variable num = " << num << endl;
     cout << "Address of num = " << &num << endl;
     cout << "\nPointer ptr = " << ptr << endl;
     cout << "Value at ptr (*ptr) = " << *ptr << endl;

     // Modify value through pointer
     *ptr = 20;
     cout << "\nAfter *ptr = 20:" << endl;
     cout << "num = " << num << endl;

     return 0;
}
