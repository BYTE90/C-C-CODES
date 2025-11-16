#include <stdio.h>

int main()
{
     // Floating point types
     float price = 99.99f;
     double pi = 3.14159265359;
     long double bigNum = 3.141592653589793238L;

     printf("=== Floating Point Types ===\n\n");

     printf("float: %.2f\n", price);
     printf("double: %.10lf\n", pi);
     printf("long double: %.15Lf\n", bigNum);

     printf("\nSize of floating point types:\n");
     printf("sizeof(float): %zu bytes\n", sizeof(float));
     printf("sizeof(double): %zu bytes\n", sizeof(double));
     printf("sizeof(long double): %zu bytes\n", sizeof(long double));

     // Precision demonstration
     printf("\n--- Precision Comparison ---\n");
     float f = 1.23456789f;
     double d = 1.23456789;
     printf("float:  %.10f\n", f);
     printf("double: %.10lf\n", d);

     return 0;
}
