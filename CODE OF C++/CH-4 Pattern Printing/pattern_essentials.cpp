#include <iostream>
using namespace std;

int main()
{
     cout << "=== Essential Pattern Programs ===" << endl
          << endl;

     int n = 5;

     // Pattern 1: Square of Stars
     cout << "Pattern 1: Square" << endl;
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }

     // Pattern 2: Right Triangle
     cout << "\nPattern 2: Right Triangle" << endl;
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }

     // Pattern 3: Inverted Right Triangle
     cout << "\nPattern 3: Inverted Right Triangle" << endl;
     for (int i = n; i >= 1; i--)
     {
          for (int j = 1; j <= i; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }

     // Pattern 4: Pyramid
     cout << "\nPattern 4: Pyramid" << endl;
     for (int i = 1; i <= n; i++)
     {
          // Print spaces
          for (int j = 1; j <= n - i; j++)
          {
               cout << "  ";
          }
          // Print stars
          for (int j = 1; j <= 2 * i - 1; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }

     // Pattern 5: Inverted Pyramid
     cout << "\nPattern 5: Inverted Pyramid" << endl;
     for (int i = n; i >= 1; i--)
     {
          for (int j = 1; j <= n - i; j++)
          {
               cout << "  ";
          }
          for (int j = 1; j <= 2 * i - 1; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }

     // Pattern 6: Diamond
     cout << "\nPattern 6: Diamond" << endl;
     // Upper half
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n - i; j++)
          {
               cout << "  ";
          }
          for (int j = 1; j <= 2 * i - 1; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }
     // Lower half
     for (int i = n - 1; i >= 1; i--)
     {
          for (int j = 1; j <= n - i; j++)
          {
               cout << "  ";
          }
          for (int j = 1; j <= 2 * i - 1; j++)
          {
               cout << "* ";
          }
          cout << endl;
     }

     // Pattern 7: Hollow Rectangle
     cout << "\nPattern 7: Hollow Rectangle" << endl;
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               if (i == 1 || i == n || j == 1 || j == n)
               {
                    cout << "* ";
               }
               else
               {
                    cout << "  ";
               }
          }
          cout << endl;
     }

     // Pattern 8: Number Triangle
     cout << "\nPattern 8: Number Triangle" << endl;
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               cout << j << " ";
          }
          cout << endl;
     }

     // Pattern 9: Floyd's Triangle
     cout << "\nPattern 9: Floyd's Triangle" << endl;
     int num = 1;
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               cout << num++ << " ";
          }
          cout << endl;
     }

     // Pattern 10: Alphabet Triangle
     cout << "\nPattern 10: Alphabet Triangle" << endl;
     for (int i = 1; i <= n; i++)
     {
          char ch = 'A';
          for (int j = 1; j <= i; j++)
          {
               cout << ch++ << " ";
          }
          cout << endl;
     }

     return 0;
}
