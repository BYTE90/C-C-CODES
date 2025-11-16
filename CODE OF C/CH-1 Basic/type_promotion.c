#include <stdio.h>

int main()
{
     printf("=== Type Promotion in Expressions ===\n\n");

     // Smaller types promoted to larger types in expressions

     // Example 1: char promoted to int
     char c1 = 100, c2 = 50;
     int result = c1 + c2;
     printf("char + char: %d + %d = %d\n", c1, c2, result);
     printf("(char values promoted to int for calculation)\n");

     // Example 2: int promoted to float
     printf("\n--- int + float ---\n");
     int i = 5;
     float f = 2.5;
     float mixedResult = i + f;
     printf("int + float: %d + %.1f = %.1f\n", i, f, mixedResult);
     printf("(int promoted to float)\n");

     // Example 3: int promoted to double
     printf("\n--- int * double ---\n");
     int x = 3;
     double d = 1.5;
     double product = x * d;
     printf("int * double: %d * %.1lf = %.1lf\n", x, d, product);

     return 0;
}
