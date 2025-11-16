#include <stdio.h>

int main()
{
     printf("=== While Loop Examples ===\n\n");

     // Example 1: Print numbers 1 to 10
     printf("--- Print 1 to 10 ---\n");
     int i = 1;
     while (i <= 10)
     {
          printf("%d ", i);
          i++;
     }
     printf("\n");

     // Example 2: Sum of digits
     printf("\n--- Sum of Digits ---\n");
     int num = 12345;
     int sum = 0;
     int temp = num;
     while (temp > 0)
     {
          sum += temp % 10;
          temp /= 10;
     }
     printf("Sum of digits of %d = %d\n", num, sum);

     // Example 3: Reverse a number
     printf("\n--- Reverse a Number ---\n");
     int number = 12345;
     int reversed = 0;
     temp = number;
     while (temp > 0)
     {
          reversed = reversed * 10 + temp % 10;
          temp /= 10;
     }
     printf("Original: %d\n", number);
     printf("Reversed: %d\n", reversed);

     // Example 4: Check palindrome
     printf("\n--- Palindrome Checker ---\n");
     int original = 12321;
     reversed = 0;
     temp = original;
     while (temp > 0)
     {
          reversed = reversed * 10 + temp % 10;
          temp /= 10;
     }
     if (original == reversed)
     {
          printf("%d is a palindrome\n", original);
     }
     else
     {
          printf("%d is not a palindrome\n", original);
     }

     // Example 5: Count digits
     printf("\n--- Count Digits ---\n");
     int n = 54321;
     int count = 0;
     temp = n;
     while (temp > 0)
     {
          count++;
          temp /= 10;
     }
     printf("Number of digits in %d = %d\n", n, count);

     // Example 6: Power calculation
     printf("\n--- Power Calculation ---\n");
     int base = 2, exp = 5;
     long long result = 1;
     int e = exp;
     while (e > 0)
     {
          result *= base;
          e--;
     }
     printf("%d^%d = %lld\n", base, exp, result);

     // Example 7: GCD using Euclidean algorithm
     printf("\n--- GCD Calculation ---\n");
     int a = 48, b = 18;
     int x = a, y = b;
     while (y != 0)
     {
          int temp = y;
          y = x % y;
          x = temp;
     }
     printf("GCD of %d and %d = %d\n", a, b, x);

     // Example 8: Find Armstrong number
     printf("\n--- Armstrong Number Checker ---\n");
     int num1 = 153;
     sum = 0;
     temp = num1;
     while (temp > 0)
     {
          int digit = temp % 10;
          sum += digit * digit * digit;
          temp /= 10;
     }
     if (sum == num1)
     {
          printf("%d is an Armstrong number\n", num1);
     }
     else
     {
          printf("%d is not an Armstrong number\n", num1);
     }

     // Example 9: Print Fibonacci until limit
     printf("\n--- Fibonacci until 100 ---\n");
     a = 0;
     b = 1;
     printf("%d %d ", a, b);
     while (1)
     {
          int next = a + b;
          if (next > 100)
               break;
          printf("%d ", next);
          a = b;
          b = next;
     }
     printf("\n");

     // Example 10: Menu driven program
     printf("\n--- Menu Driven (Demo) ---\n");
     int choice = 1;
     int counter = 0;
     while (choice != 0 && counter < 3)
     {
          printf("\nIteration %d:\n", counter + 1);
          printf("1. Option 1\n");
          printf("2. Option 2\n");
          printf("0. Exit\n");
          printf("Demo: Auto-selecting option...\n");
          choice = (counter == 2) ? 0 : counter + 1;
          counter++;
     }

     return 0;
}
