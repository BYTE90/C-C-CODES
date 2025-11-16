#include <stdio.h>

int main()
{
     printf("=== Pyramid Pattern ===\n\n");

     int n;
     printf("Enter height: ");
     scanf("%d", &n);

     for (int i = 1; i <= n; i++)
     {
          // Print spaces
          for (int j = 1; j <= n - i; j++)
          {
               printf(" ");
          }
          // Print stars
          for (int j = 1; j <= 2 * i - 1; j++)
          {
               printf("*");
          }
          printf("\n");
     }

     return 0;
}
