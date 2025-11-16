#include <stdio.h>

int main()
{
     printf("=== Implicit Type Casting ===\n\n");

     // Automatic conversion by compiler

     // Example 1: int to float
     int intNum = 10;
     float floatNum = intNum;
     printf("int to float: %d -> %.2f\n", intNum, floatNum);

     // Example 2: char to int
     char ch = 'A';
     int asciiValue = ch;
     printf("char to int: %c -> %d (ASCII)\n", ch, asciiValue);

     // Example 3: int to double
     int x = 5;
     double y = x;
     printf("int to double: %d -> %.1lf\n", x, y);

     return 0;
}
