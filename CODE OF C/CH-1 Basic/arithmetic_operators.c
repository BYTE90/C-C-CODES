#include <stdio.h>

int main()
{
     int a = 10, b = 3;

     printf("=== Arithmetic Operators ===\n\n");
     printf("a = %d, b = %d\n\n", a, b);

     printf("Addition: a + b = %d\n", a + b);
     printf("Subtraction: a - b = %d\n", a - b);
     printf("Multiplication: a * b = %d\n", a * b);
     printf("Division: a / b = %d\n", a / b);
     printf("Modulus: a %% b = %d\n", a % b);

     // Float division
     printf("\n--- Float Division ---\n");
     float result = (float)a / b;
     printf("Float division: %.2f / %d = %.2f\n", (float)a, b, result);

     return 0;
}
