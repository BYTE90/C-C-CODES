#include <stdio.h>

int main()
{
     printf("=== Explicit Type Casting ===\n\n");

     // Manual conversion using (type)

     // Example 1: float to int
     float pi = 3.14159;
     int truncatedPi = (int)pi;
     printf("float to int: %.5f -> %d (decimal part lost)\n", pi, truncatedPi);

     // Example 2: Accurate division
     int a = 10, b = 3;
     printf("\nDivision without casting: %d / %d = %d\n", a, b, a / b);
     float division = (float)a / b;
     printf("Division with casting: %d / %d = %.2f\n", a, b, division);

     // Example 3: double to int
     double value = 99.99;
     int intValue = (int)value;
     printf("\ndouble to int: %.2lf -> %d\n", value, intValue);

     return 0;
}
