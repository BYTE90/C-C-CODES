#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
     cout << "=== Palindrome String Check ===" << endl
          << endl;

     string str;
     cout << "Enter a string: ";
     cin >> str;

     string rev = str;
     reverse(rev.begin(), rev.end());

     if (str == rev)
     {
          cout << str << " is a palindrome" << endl;
     }
     else
     {
          cout << str << " is not a palindrome" << endl;
     }

     return 0;
}
