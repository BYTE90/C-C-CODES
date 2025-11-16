#include <stdio.h>

int main()
{
     int age;
     char nationality;

     printf("=== Voting Eligibility Checker ===\n\n");
     printf("Enter your age: ");
     scanf("%d", &age);
     printf("Are you an Indian citizen? (y/n): ");
     scanf(" %c", &nationality);

     if (age >= 18)
     {
          if (nationality == 'y' || nationality == 'Y')
          {
               printf("You are eligible to vote in India!\n");
          }
          else
          {
               printf("You must be an Indian citizen to vote.\n");
          }
     }
     else
     {
          printf("You must be 18 or older to vote.\n");
     }

     return 0;
}
