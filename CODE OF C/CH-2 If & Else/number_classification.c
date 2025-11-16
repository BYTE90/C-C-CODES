#include <stdio.h>

int main()
{
     int num;

     printf("=== Number Classification ===\n\n");
     printf("Enter a number: ");
     scanf("%d", &num);

     if (num > 0)
     {
          printf("%d is positive\n", num);
          if (num % 2 == 0)
          {
               printf("and it's even\n");
          }
          else
          {
               printf("and it's odd\n");
          }
     }
     else if (num < 0)
     {
          printf("%d is negative\n", num);
          if (num % 2 == 0)
          {
               printf("and it's even\n");
          }
          else
          {
               printf("and it's odd\n");
          }
     }
     else
     {
          printf("Number is zero\n");
     }

     return 0;
}
