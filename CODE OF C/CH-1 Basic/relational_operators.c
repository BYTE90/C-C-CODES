#include <stdio.h>

int main()
{
     int a = 10, b = 5;

     printf("=== Relational Operators ===\n\n");
     printf("a = %d, b = %d\n\n", a, b);

     printf("a == b (Equal to): %d\n", a == b);
     printf("a != b (Not equal to): %d\n", a != b);
     printf("a > b (Greater than): %d\n", a > b);
     printf("a < b (Less than): %d\n", a < b);
     printf("a >= b (Greater than or equal): %d\n", a >= b);
     printf("a <= b (Less than or equal): %d\n", a <= b);

     printf("\nNote: 1 = true, 0 = false\n");

     return 0;
}
