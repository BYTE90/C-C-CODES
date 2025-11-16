#include <stdio.h>

int main()
{
     // Integer types
     int age = 25;
     short marks = 95;
     long population = 1000000000L;
     long long distance = 9223372036854775807LL;

     // Floating point types
     float price = 99.99f;
     double pi = 3.14159265359;

     // Character type
     char grade = 'A';
     char initial = 'J';

     // Boolean (using int in C)
     int isActive = 1;  // true
     int isDeleted = 0; // false

     // Unsigned types
     unsigned int count = 4294967295U;

     printf("=== Data Types in C ===\n\n");

     printf("Integer: %d\n", age);
     printf("Short: %hd\n", marks);
     printf("Long: %ld\n", population);
     printf("Long Long: %lld\n", distance);

     printf("\nFloat: %.2f\n", price);
     printf("Double: %.10lf\n", pi);

     printf("\nCharacter: %c\n", grade);
     printf("ASCII value: %d\n", grade);

     printf("\nBoolean (as int): %d\n", isActive);
     printf("Unsigned int: %u\n", count);

     printf("\n=== Size of Data Types ===\n");
     printf("sizeof(int): %zu bytes\n", sizeof(int));
     printf("sizeof(short): %zu bytes\n", sizeof(short));
     printf("sizeof(long): %zu bytes\n", sizeof(long));
     printf("sizeof(long long): %zu bytes\n", sizeof(long long));
     printf("sizeof(float): %zu bytes\n", sizeof(float));
     printf("sizeof(double): %zu bytes\n", sizeof(double));
     printf("sizeof(char): %zu bytes\n", sizeof(char));

     return 0;
}
