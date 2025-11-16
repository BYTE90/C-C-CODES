#include <iostream>
using namespace std;

int main()
{
     cout << "=== Number Triangle ===" << endl
          << endl;

     int n;
     cout << "Enter height: ";
     cin >> n;

     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               cout << j << " ";
          }
          cout << endl;
     }

     return 0;
}
