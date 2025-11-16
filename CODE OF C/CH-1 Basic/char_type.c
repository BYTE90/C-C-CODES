#include <stdio.h>

int main()
{
     // Character type
     char grade = 'A';
     char initial = 'J';
     char digit = '5';
     char symbol = '@';

     printf("=== Character Type ===\n\n");

     printf("Character: %c\n", grade);
     printf("ASCII value: %d\n", grade);

     printf("\nMore characters:\n");
     printf("Initial: %c (ASCII: %d)\n", initial, initial);
     printf("Digit: %c (ASCII: %d)\n", digit, digit);
     printf("Symbol: %c (ASCII: %d)\n", symbol, symbol);

     printf("\nSize of char: %zu byte\n", sizeof(char));

     // Character arithmetic
     printf("\n--- Character Arithmetic ---\n");
     char lower = 'a';
     char upper = lower - 32;
     printf("Lowercase: %c -> Uppercase: %c\n", lower, upper);

     return 0;
}
