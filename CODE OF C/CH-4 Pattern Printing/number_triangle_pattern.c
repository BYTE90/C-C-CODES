#include <stdio.h>

int main()
{
     printf("=== Number Triangle ===\n\n");

     int n;
     printf("Enter height: ");
     scanf("%d", &n);

     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               printf("%d ", j);
          }
          printf("\n");
     }

     return 0;
}
