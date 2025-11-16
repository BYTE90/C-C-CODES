#include <stdio.h>

int main()
{
     printf("=== Ternary Operator (? :) ===\n\n");

     // Basic syntax: condition ? value_if_true : value_if_false

     // Example 1: Find maximum
     int a = 10, b = 20;
     int max = (a > b) ? a : b;
     printf("Maximum of %d and %d is: %d\n", a, b, max);

     // Example 2: Even or Odd
     int num = 7;
     printf("%d is %s\n", num, (num % 2 == 0) ? "Even" : "Odd");

     // Example 3: Pass or Fail
     int marks = 75;
     printf("Result: %s\n", (marks >= 40) ? "Pass" : "Fail");

     // Example 4: Nested ternary
     int score = 85;
     char grade = (score >= 90) ? 'A' : (score >= 80) ? 'B'
                                    : (score >= 70)   ? 'C'
                                                      : 'D';
     printf("Score %d -> Grade: %c\n", score, grade);

     return 0;
}
