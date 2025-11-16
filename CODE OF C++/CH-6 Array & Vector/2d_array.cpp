#include <iostream>
using namespace std;

int main()
{
     cout << "=== 2D Array ===" << endl
          << endl;

     int matrix[3][3] = {
         {1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}};

     cout << "Matrix:" << endl;
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               cout << matrix[i][j] << " ";
          }
          cout << endl;
     }

     // Sum of all elements
     int sum = 0;
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               sum += matrix[i][j];
          }
     }
     cout << "\nSum of all elements: " << sum << endl;

     // Diagonal sum
     int diagSum = 0;
     for (int i = 0; i < 3; i++)
     {
          diagSum += matrix[i][i];
     }
     cout << "Diagonal sum: " << diagSum << endl;

     return 0;
}
