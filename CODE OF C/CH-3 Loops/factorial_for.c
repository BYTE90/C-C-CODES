#include <stdio.h>

int main()
{
     printf("=== For Loop - Factorial ===\n\n");

     int num;
     long long factorial = 1;

     printf("Enter a number: ");
     scanf("%d", &num);

     for (int i = 1; i <= num; i++)
     {
          factorial *= i;
     }

     printf("Factorial of %d = %lld\n", num, factorial);

     return 0;
}
