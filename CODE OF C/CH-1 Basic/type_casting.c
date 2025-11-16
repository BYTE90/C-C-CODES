#include <stdio.h>

int main()
{
     printf("=== Type Casting in C ===\n\n");

     // Implicit type casting (automatic)
     printf("--- Implicit Type Casting ---\n");
     int intNum = 10;
     float floatNum = intNum; // int to float
     printf("int to float: %d -> %.2f\n", intNum, floatNum);

     char ch = 'A';
     int asciiValue = ch; // char to int
     printf("char to int: %c -> %d\n", ch, asciiValue);

     // Explicit type casting (manual)
     printf("\n--- Explicit Type Casting ---\n");
     float pi = 3.14159;
     int truncatedPi = (int)pi; // float to int (loses decimal)
     printf("float to int: %.5f -> %d\n", pi, truncatedPi);

     int a = 10, b = 3;
     float division = (float)a / b; // int to float for accurate division
     printf("Division without casting: %d / %d = %d\n", a, b, a / b);
     printf("Division with casting: %d / %d = %.2f\n", a, b, division);

     // Type promotion in expressions
     printf("\n--- Type Promotion ---\n");
     char c1 = 100, c2 = 50;
     int result = c1 + c2; // char promoted to int
     printf("char + char: %d + %d = %d\n", c1, c2, result);

     int i = 5;
     float f = 2.5;
     float mixedResult = i + f; // int promoted to float
     printf("int + float: %d + %.1f = %.1f\n", i, f, mixedResult);

     // Practical examples
     printf("\n--- Practical Examples ---\n");

     // Calculating percentage
     int marks = 450;
     int total = 500;
     float percentage = ((float)marks / total) * 100;
     printf("Percentage: %d/%d = %.2f%%\n", marks, total, percentage);

     // Converting Celsius to Fahrenheit
     int celsius = 25;
     float fahrenheit = (celsius * 9.0 / 5.0) + 32;
     printf("Temperature: %d°C = %.2f°F\n", celsius, fahrenheit);

     // Character arithmetic
     char lowercase = 'a';
     char uppercase = lowercase - 32; // ASCII manipulation
     printf("Lowercase to uppercase: %c -> %c\n", lowercase, uppercase);

     return 0;
}
