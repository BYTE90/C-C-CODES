#include <stdio.h>

int main()
{
     int p = 1, q = 0; // 1 = true, 0 = false

     printf("=== Logical Operators ===\n\n");
     printf("p = %d (true), q = %d (false)\n\n", p, q);

     printf("AND (p && q): %d\n", p && q);
     printf("OR (p || q): %d\n", p || q);
     printf("NOT p (!p): %d\n", !p);
     printf("NOT q (!q): %d\n", !q);

     printf("\n--- Truth Table ---\n");
     printf("true && true = %d\n", 1 && 1);
     printf("true && false = %d\n", 1 && 0);
     printf("false && false = %d\n", 0 && 0);
     printf("true || false = %d\n", 1 || 0);
     printf("false || false = %d\n", 0 || 0);

     return 0;
}
