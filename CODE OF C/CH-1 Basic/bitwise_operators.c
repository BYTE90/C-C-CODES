#include <stdio.h>

int main()
{
     int m = 5, n = 3; // Binary: 5 = 101, 3 = 011

     printf("=== Bitwise Operators ===\n\n");
     printf("m = %d (binary: 101)\n", m);
     printf("n = %d (binary: 011)\n\n", n);

     printf("m & n (AND): %d\n", m & n);           // 001 = 1
     printf("m | n (OR): %d\n", m | n);            // 111 = 7
     printf("m ^ n (XOR): %d\n", m ^ n);           // 110 = 6
     printf("~m (NOT): %d\n", ~m);                 // Inverts all bits
     printf("m << 1 (Left shift): %d\n", m << 1);  // 1010 = 10
     printf("m >> 1 (Right shift): %d\n", m >> 1); // 10 = 2

     return 0;
}
