#include <stdio.h>

int main()
{
     printf("=== While Loop - Reverse Number ===\n\n");

     int num, reversed = 0, temp;

     printf("Enter a number: ");
     scanf("%d", &num);

     temp = num;
     while (temp > 0)
     {
          reversed = reversed * 10 + temp % 10;
          temp /= 10;
     }

     printf("Original: %d\n", num);
     printf("Reversed: %d\n", reversed);

     return 0;
}
