#include <stdio.h>

int main()
{
     printf("=== Nested If Statements ===\n\n");

     // Example 1: Grade system with nested conditions
     int marks;
     printf("Enter your marks (0-100): ");
     scanf("%d", &marks);

     if (marks >= 0 && marks <= 100)
     {
          if (marks >= 90)
          {
               printf("Grade: A+ (Excellent!)\n");
          }
          else if (marks >= 80)
          {
               printf("Grade: A (Very Good)\n");
          }
          else if (marks >= 70)
          {
               printf("Grade: B (Good)\n");
          }
          else if (marks >= 60)
          {
               printf("Grade: C (Average)\n");
          }
          else if (marks >= 50)
          {
               printf("Grade: D (Below Average)\n");
          }
          else
          {
               printf("Grade: F (Fail)\n");
          }
     }
     else
     {
          printf("Invalid marks! Enter between 0-100\n");
     }

     // Example 2: Number classification
     printf("\n--- Number Classification ---\n");
     int num;
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

     // Example 3: Age and eligibility checker
     printf("\n--- Eligibility Checker ---\n");
     int age;
     char nationality;
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

     // Example 4: Triangle type checker
     printf("\n--- Triangle Type Checker ---\n");
     int side1, side2, side3;
     printf("Enter three sides of triangle: ");
     scanf("%d %d %d", &side1, &side2, &side3);

     if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
     {
          printf("Valid triangle!\n");
          if (side1 == side2 && side2 == side3)
          {
               printf("Type: Equilateral Triangle\n");
          }
          else if (side1 == side2 || side2 == side3 || side1 == side3)
          {
               printf("Type: Isosceles Triangle\n");
          }
          else
          {
               printf("Type: Scalene Triangle\n");
          }
     }
     else
     {
          printf("Not a valid triangle!\n");
     }

     return 0;
}
