#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
void printTable(int n);
int factorial(int n);
int power(int base, int exp);
int isEven(int n);
int isPrime(int n);

int main()
{
     printf("=== Function Basics ===\n\n");

     // Example 1: Simple arithmetic functions
     printf("--- Arithmetic Operations ---\n");
     int a = 10, b = 5;
     printf("%d + %d = %d\n", a, b, add(a, b));
     printf("%d - %d = %d\n", a, b, subtract(a, b));
     printf("%d * %d = %d\n", a, b, multiply(a, b));
     printf("%d / %d = %.2f\n", a, b, divide(a, b));

     // Example 2: Void function
     printf("\n--- Multiplication Table ---\n");
     printTable(7);

     // Example 3: Factorial
     printf("\n--- Factorial ---\n");
     int num = 5;
     printf("%d! = %d\n", num, factorial(num));

     // Example 4: Power function
     printf("\n--- Power Calculation ---\n");
     printf("2^8 = %d\n", power(2, 8));

     // Example 5: Boolean functions
     printf("\n--- Even/Odd Checker ---\n");
     for (int i = 1; i <= 10; i++)
     {
          printf("%d is %s\n", i, isEven(i) ? "Even" : "Odd");
     }

     // Example 6: Prime checker
     printf("\n--- Prime Number Checker ---\n");
     for (int i = 1; i <= 20; i++)
     {
          if (isPrime(i))
          {
               printf("%d ", i);
          }
     }
     printf("\n");

     return 0;
}

// Function definitions
int add(int a, int b)
{
     return a + b;
}

int subtract(int a, int b)
{
     return a - b;
}

int multiply(int a, int b)
{
     return a * b;
}

float divide(int a, int b)
{
     if (b == 0)
     {
          printf("Error: Division by zero!\n");
          return 0;
     }
     return (float)a / b;
}

void printTable(int n)
{
     for (int i = 1; i <= 10; i++)
     {
          printf("%d x %d = %d\n", n, i, n * i);
     }
}

int factorial(int n)
{
     if (n <= 1)
          return 1;
     int fact = 1;
     for (int i = 2; i <= n; i++)
     {
          fact *= i;
     }
     return fact;
}

int power(int base, int exp)
{
     int result = 1;
     for (int i = 0; i < exp; i++)
     {
          result *= base;
     }
     return result;
}

int isEven(int n)
{
     return (n % 2 == 0);
}

int isPrime(int n)
{
     if (n <= 1)
          return 0;
     if (n == 2)
          return 1;
     if (n % 2 == 0)
          return 0;
     for (int i = 3; i * i <= n; i += 2)
     {
          if (n % i == 0)
               return 0;
     }
     return 1;
}
