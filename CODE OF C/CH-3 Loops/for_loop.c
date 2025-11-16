#include <stdio.h>

int main()
{
     printf("=== For Loop Examples ===\n\n");

     // Example 1: Basic for loop - print numbers 1 to 10
     printf("--- Print 1 to 10 ---\n");
     for (int i = 1; i <= 10; i++)
     {
          printf("%d ", i);
     }
     printf("\n");

     // Example 2: Print even numbers from 1 to 20
     printf("\n--- Even numbers from 1 to 20 ---\n");
     for (int i = 2; i <= 20; i += 2)
     {
          printf("%d ", i);
     }
     printf("\n");

     // Example 3: Print odd numbers from 1 to 20
     printf("\n--- Odd numbers from 1 to 20 ---\n");
     for (int i = 1; i <= 20; i += 2)
     {
          printf("%d ", i);
     }
     printf("\n");

     // Example 4: Reverse counting
     printf("\n--- Countdown from 10 to 1 ---\n");
     for (int i = 10; i >= 1; i--)
     {
          printf("%d ", i);
     }
     printf("\n");

     // Example 5: Multiplication table
     printf("\n--- Multiplication Table of 5 ---\n");
     int num = 5;
     for (int i = 1; i <= 10; i++)
     {
          printf("%d x %d = %d\n", num, i, num * i);
     }

     // Example 6: Sum of first n numbers
     printf("\n--- Sum of first 10 numbers ---\n");
     int sum = 0;
     for (int i = 1; i <= 10; i++)
     {
          sum += i;
     }
     printf("Sum = %d\n", sum);

     // Example 7: Factorial
     printf("\n--- Factorial of 5 ---\n");
     int n = 5;
     long long factorial = 1;
     for (int i = 1; i <= n; i++)
     {
          factorial *= i;
     }
     printf("%d! = %lld\n", n, factorial);

     // Example 8: Nested for loop - pattern
     printf("\n--- Nested Loop Pattern ---\n");
     for (int i = 1; i <= 5; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               printf("* ");
          }
          printf("\n");
     }

     // Example 9: Array traversal
     printf("\n--- Array Traversal ---\n");
     int arr[] = {10, 20, 30, 40, 50};
     int size = 5;
     printf("Array elements: ");
     for (int i = 0; i < size; i++)
     {
          printf("%d ", arr[i]);
     }
     printf("\n");

     // Example 10: Find prime numbers from 1 to 50
     printf("\n--- Prime numbers from 1 to 50 ---\n");
     for (int i = 2; i <= 50; i++)
     {
          int isPrime = 1;
          for (int j = 2; j * j <= i; j++)
          {
               if (i % j == 0)
               {
                    isPrime = 0;
                    break;
               }
          }
          if (isPrime)
          {
               printf("%d ", i);
          }
     }
     printf("\n");

     // Example 11: Fibonacci series
     printf("\n--- Fibonacci Series (first 10 terms) ---\n");
     int a = 0, b = 1, next;
     printf("%d %d ", a, b);
     for (int i = 3; i <= 10; i++)
     {
          next = a + b;
          printf("%d ", next);
          a = b;
          b = next;
     }
     printf("\n");

     return 0;
}
