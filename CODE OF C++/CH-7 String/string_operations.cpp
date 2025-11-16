#include <iostream>
#include <string>
using namespace std;

int main()
{
     cout << "=== String Operations ===" << endl
          << endl;

     string str1 = "Hello";
     string str2 = "World";
     string str3;

     // Length
     cout << "str1: " << str1 << " (length: " << str1.length() << ")" << endl;
     cout << "str2: " << str2 << " (length: " << str2.length() << ")" << endl;

     // Concatenate
     str3 = str1 + " " + str2;
     cout << "\nAfter concatenation:" << endl;
     cout << "str3: " << str3 << endl;

     // Compare
     if (str1 == "Hello")
     {
          cout << "\nstr1 is equal to \"Hello\"" << endl;
     }

     // Substring
     string sub = str3.substr(0, 5);
     cout << "Substring(0, 5): " << sub << endl;

     // Find
     size_t pos = str3.find("World");
     if (pos != string::npos)
     {
          cout << "\"World\" found at position " << pos << endl;
     }

     return 0;
}
