#include <stdio.h>

int main()
{
     printf("=== 2D Array ===\n\n");

     int matrix[3][3] = {
         {1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}};

     printf("Matrix:\n");
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               printf("%d ", matrix[i][j]);
          }
          printf("\n");
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
     printf("\nSum of all elements: %d\n", sum);

     // Diagonal sum
     int diagSum = 0;
     for (int i = 0; i < 3; i++)
     {
          diagSum += matrix[i][i];
     }
     printf("Diagonal sum: %d\n", diagSum);

     return 0;
}
