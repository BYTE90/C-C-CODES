#include <stdio.h>

int factorial(int n)
{
     if (n <= 1)
          return 1;
     return n * factorial(n - 1);
}

int main()
{
     printf("=== Factorial using Recursion ===\n\n");

     int num;
     printf("Enter a number: ");
     scanf("%d", &num);

     printf("%d! = %d\n", num, factorial(num));

     return 0;
}
