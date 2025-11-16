#include <stdio.h>

int main()
{
     printf("=== Right Triangle Pattern ===\n\n");

     int n;
     printf("Enter height: ");
     scanf("%d", &n);

     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               printf("* ");
          }
          printf("\n");
     }

     return 0;
}
