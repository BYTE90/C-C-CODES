#include <stdio.h>

// Simple function to add two numbers
int add(int a, int b)
{
     return a + b;
}

// Function to find maximum
int max(int a, int b)
{
     return (a > b) ? a : b;
}

// Function with no return (void)
void greet()
{
     printf("Hello, World!\n");
}

int main()
{
     printf("=== Function Examples ===\n\n");

     int num1 = 10, num2 = 20;

     printf("Add: %d + %d = %d\n", num1, num2, add(num1, num2));
     printf("Max: max(%d, %d) = %d\n", num1, num2, max(num1, num2));

     printf("\nCalling greet function:\n");
     greet();

     return 0;
}
