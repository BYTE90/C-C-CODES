#include <stdio.h>

int main()
{
     printf("=== Conditional (Ternary) Operator ===\n\n");

     // Syntax: condition ? value_if_true : value_if_false

     // Example 1: Find maximum of two numbers
     printf("--- Maximum of Two Numbers ---\n");
     int a = 10, b = 20;
     int max = (a > b) ? a : b;
     printf("a = %d, b = %d\n", a, b);
     printf("Maximum: %d\n", max);

     // Example 2: Check even or odd
     printf("\n--- Even or Odd ---\n");
     int num = 15;
     printf("Number: %d\n", num);
     printf("%d is %s\n", num, (num % 2 == 0) ? "Even" : "Odd");

     // Example 3: Check positive, negative, or zero
     printf("\n--- Sign Checker ---\n");
     int n = -5;
     printf("Number: %d\n", n);
     char *result = (n > 0) ? "Positive" : (n < 0) ? "Negative"
                                                   : "Zero";
     printf("Result: %s\n", result);

     // Example 4: Grade assignment
     printf("\n--- Grade Assignment ---\n");
     int marks = 85;
     char grade = (marks >= 90) ? 'A' : (marks >= 80) ? 'B'
                                    : (marks >= 70)   ? 'C'
                                    : (marks >= 60)   ? 'D'
                                                      : 'F';
     printf("Marks: %d\n", marks);
     printf("Grade: %c\n", grade);

     // Example 5: Absolute value
     printf("\n--- Absolute Value ---\n");
     int number = -42;
     int absolute = (number < 0) ? -number : number;
     printf("Number: %d\n", number);
     printf("Absolute value: %d\n", absolute);

     // Example 6: Leap year check
     printf("\n--- Leap Year Checker ---\n");
     int year = 2024;
     char *isLeap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? "Leap Year" : "Not a Leap Year";
     printf("Year: %d\n", year);
     printf("%s\n", isLeap);

     // Example 7: Discount calculator
     printf("\n--- Discount Calculator ---\n");
     float price = 1000.0;
     int quantity = 6;
     float discount = (quantity > 5) ? 0.10 : (quantity > 2) ? 0.05
                                                             : 0.0;
     float finalPrice = price * quantity * (1 - discount);
     printf("Price: %.2f, Quantity: %d\n", price, quantity);
     printf("Discount: %.0f%%\n", discount * 100);
     printf("Final Price: %.2f\n", finalPrice);

     // Example 8: Minimum of three numbers
     printf("\n--- Minimum of Three Numbers ---\n");
     int x = 15, y = 10, z = 20;
     int min = (x < y) ? ((x < z) ? x : z) : ((y < z) ? y : z);
     printf("x = %d, y = %d, z = %d\n", x, y, z);
     printf("Minimum: %d\n", min);

     // Example 9: Voting eligibility
     printf("\n--- Voting Eligibility ---\n");
     int age = 17;
     printf("Age: %d\n", age);
     printf("Eligible to vote: %s\n", (age >= 18) ? "Yes" : "No");

     // Example 10: Character case converter
     printf("\n--- Case Converter ---\n");
     char ch = 'a';
     char converted = (ch >= 'a' && ch <= 'z') ? (ch - 32) : (ch >= 'A' && ch <= 'Z') ? (ch + 32)
                                                                                      : ch;
     printf("Original: %c\n", ch);
     printf("Converted: %c\n", converted);

     return 0;
}
