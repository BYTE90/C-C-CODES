#include <stdio.h>

int main()
{
     printf("=== Increment/Decrement Operators ===\n\n");

     // Post-increment
     printf("--- Post-increment (x++) ---\n");
     int x = 5;
     printf("x = %d\n", x);
     printf("x++ = %d (use current value, then increment)\n", x++);
     printf("After x++: x = %d\n\n", x);

     // Pre-increment
     printf("--- Pre-increment (++x) ---\n");
     x = 5;
     printf("x = %d\n", x);
     printf("++x = %d (increment first, then use)\n", ++x);
     printf("After ++x: x = %d\n\n", x);

     // Post-decrement
     printf("--- Post-decrement (x--) ---\n");
     x = 5;
     printf("x = %d\n", x);
     printf("x-- = %d (use current value, then decrement)\n", x--);
     printf("After x--: x = %d\n\n", x);

     // Pre-decrement
     printf("--- Pre-decrement (--x) ---\n");
     x = 5;
     printf("x = %d\n", x);
     printf("--x = %d (decrement first, then use)\n", --x);
     printf("After --x: x = %d\n", x);

     return 0;
}
