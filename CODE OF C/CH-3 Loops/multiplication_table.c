#include <stdio.h>

int main()
{
     printf("=== For Loop - Multiplication Table ===\n\n");

     int num;
     printf("Enter a number: ");
     scanf("%d", &num);

     printf("\nMultiplication table of %d:\n", num);
     for (int i = 1; i <= 10; i++)
     {
          printf("%d x %d = %d\n", num, i, num * i);
     }

     return 0;
}
