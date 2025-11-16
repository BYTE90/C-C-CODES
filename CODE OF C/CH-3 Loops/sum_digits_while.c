#include <stdio.h>

int main()
{
     printf("=== While Loop - Sum of Digits ===\n\n");

     int num, sum = 0, temp;

     printf("Enter a number: ");
     scanf("%d", &num);

     temp = num;
     while (temp > 0)
     {
          sum += temp % 10;
          temp /= 10;
     }

     printf("Sum of digits of %d = %d\n", num, sum);

     return 0;
}
