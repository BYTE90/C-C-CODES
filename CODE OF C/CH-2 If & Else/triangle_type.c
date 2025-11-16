#include <stdio.h>

int main()
{
     int side1, side2, side3;

     printf("=== Triangle Type Checker ===\n\n");
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
