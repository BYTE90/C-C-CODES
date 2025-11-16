#include <iostream>
using namespace std;

int main()
{
     // Integer types
     int age = 25;
     short marks = 95;
     long population = 1000000000L;
     long long distance = 9223372036854775807LL;

     cout << "=== Integer Types ===" << endl
          << endl;

     cout << "int: " << age << endl;
     cout << "short: " << marks << endl;
     cout << "long: " << population << endl;
     cout << "long long: " << distance << endl;

     cout << "\nSize of integer types:" << endl;
     cout << "sizeof(int): " << sizeof(int) << " bytes" << endl;
     cout << "sizeof(short): " << sizeof(short) << " bytes" << endl;
     cout << "sizeof(long): " << sizeof(long) << " bytes" << endl;
     cout << "sizeof(long long): " << sizeof(long long) << " bytes" << endl;

     // Unsigned integers
     unsigned int count = 4294967295U;
     cout << "\nUnsigned int: " << count << endl;
     cout << "sizeof(unsigned int): " << sizeof(unsigned int) << " bytes" << endl;

     return 0;
}
