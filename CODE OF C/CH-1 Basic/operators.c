#include <stdio.h>

int main()
{
     int a = 10, b = 3;

     printf("=== Arithmetic Operators ===\n");
     printf("a = %d, b = %d\n", a, b);
     printf("a + b = %d\n", a + b);
     printf("a - b = %d\n", a - b);
     printf("a * b = %d\n", a * b);
     printf("a / b = %d\n", a / b);
     printf("a %% b = %d\n", a % b);

     printf("\n=== Increment/Decrement Operators ===\n");
     int x = 5;
     printf("x = %d\n", x);
     printf("x++ = %d\n", x++);
     printf("After x++: x = %d\n", x);
     printf("++x = %d\n", ++x);
     printf("After ++x: x = %d\n", x);
     printf("x-- = %d\n", x--);
     printf("After x--: x = %d\n", x);

     printf("\n=== Relational Operators ===\n");
     printf("a == b: %d\n", a == b);
     printf("a != b: %d\n", a != b);
     printf("a > b: %d\n", a > b);
     printf("a < b: %d\n", a < b);
     printf("a >= b: %d\n", a >= b);
     printf("a <= b: %d\n", a <= b);

     printf("\n=== Logical Operators ===\n");
     int p = 1, q = 0;
     printf("p = %d, q = %d\n", p, q);
     printf("p && q: %d\n", p && q);
     printf("p || q: %d\n", p || q);
     printf("!p: %d\n", !p);
     printf("!q: %d\n", !q);

     printf("\n=== Assignment Operators ===\n");
     int num = 10;
     printf("num = %d\n", num);
     num += 5;
     printf("After num += 5: %d\n", num);
     num -= 3;
     printf("After num -= 3: %d\n", num);
     num *= 2;
     printf("After num *= 2: %d\n", num);
     num /= 4;
     printf("After num /= 4: %d\n", num);
     num %= 3;
     printf("After num %%= 3: %d\n", num);

     printf("\n=== Bitwise Operators ===\n");
     int m = 5, n = 3; // 5 = 101, 3 = 011
     printf("m = %d, n = %d\n", m, n);
     printf("m & n: %d\n", m & n);   // AND
     printf("m | n: %d\n", m | n);   // OR
     printf("m ^ n: %d\n", m ^ n);   // XOR
     printf("~m: %d\n", ~m);         // NOT
     printf("m << 1: %d\n", m << 1); // Left shift
     printf("m >> 1: %d\n", m >> 1); // Right shift

     printf("\n=== Ternary Operator ===\n");
     int max = (a > b) ? a : b;
     printf("Maximum of %d and %d is: %d\n", a, b, max);

     return 0;
}
