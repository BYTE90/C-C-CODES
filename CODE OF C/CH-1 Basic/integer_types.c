#include <stdio.h>

int main()
{
     // Integer types
     int age = 25;
     short marks = 95;
     long population = 1000000000L;
     long long distance = 9223372036854775807LL;

     printf("=== Integer Types ===\n\n");

     printf("int: %d\n", age);
     printf("short: %hd\n", marks);
     printf("long: %ld\n", population);
     printf("long long: %lld\n", distance);

     printf("\nSize of integer types:\n");
     printf("sizeof(int): %zu bytes\n", sizeof(int));
     printf("sizeof(short): %zu bytes\n", sizeof(short));
     printf("sizeof(long): %zu bytes\n", sizeof(long));
     printf("sizeof(long long): %zu bytes\n", sizeof(long long));

     // Unsigned integers
     unsigned int count = 4294967295U;
     printf("\nUnsigned int: %u\n", count);
     printf("sizeof(unsigned int): %zu bytes\n", sizeof(unsigned int));

     return 0;
}
