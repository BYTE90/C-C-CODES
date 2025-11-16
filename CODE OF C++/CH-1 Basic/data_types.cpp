#include <iostream>
using namespace std;

int main()
{
     // Integer types
     int age = 25;
     short marks = 95;
     long population = 1000000000L;
     long long distance = 9223372036854775807LL;

     // Floating point types
     float price = 99.99f;
     double pi = 3.14159265359;

     // Character type
     char grade = 'A';
     char initial = 'J';

     // Boolean type
     bool isActive = true;
     bool isDeleted = false;

     // Unsigned types
     unsigned int count = 4294967295U;

     cout << "=== Data Types in C++ ===" << endl
          << endl;

     cout << "Integer: " << age << endl;
     cout << "Short: " << marks << endl;
     cout << "Long: " << population << endl;
     cout << "Long Long: " << distance << endl;

     cout << "\nFloat: " << price << endl;
     cout << "Double: " << pi << endl;

     cout << "\nCharacter: " << grade << endl;
     cout << "ASCII value: " << (int)grade << endl;

     cout << "\nBoolean: " << boolalpha << isActive << endl;
     cout << "Unsigned int: " << count << endl;

     cout << "\n=== Size of Data Types ===" << endl;
     cout << "sizeof(int): " << sizeof(int) << " bytes" << endl;
     cout << "sizeof(short): " << sizeof(short) << " bytes" << endl;
     cout << "sizeof(long): " << sizeof(long) << " bytes" << endl;
     cout << "sizeof(long long): " << sizeof(long long) << " bytes" << endl;
     cout << "sizeof(float): " << sizeof(float) << " bytes" << endl;
     cout << "sizeof(double): " << sizeof(double) << " bytes" << endl;
     cout << "sizeof(char): " << sizeof(char) << " bytes" << endl;
     cout << "sizeof(bool): " << sizeof(bool) << " bytes" << endl;

     return 0;
}
