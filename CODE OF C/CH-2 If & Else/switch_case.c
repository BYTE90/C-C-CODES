#include <stdio.h>

int main()
{
     printf("=== Switch Case Examples ===\n\n");

     // Example 1: Calculator
     printf("--- Simple Calculator ---\n");
     char operator;
     float num1, num2, result;

     printf("Enter first number: ");
     scanf("%f", &num1);
     printf("Enter operator (+, -, *, /): ");
     scanf(" %c", &operator);
     printf("Enter second number: ");
     scanf("%f", &num2);

     switch (operator)
     {
     case '+':
          result = num1 + num2;
          printf("%.2f + %.2f = %.2f\n", num1, num2, result);
          break;
     case '-':
          result = num1 - num2;
          printf("%.2f - %.2f = %.2f\n", num1, num2, result);
          break;
     case '*':
          result = num1 * num2;
          printf("%.2f * %.2f = %.2f\n", num1, num2, result);
          break;
     case '/':
          if (num2 != 0)
          {
               result = num1 / num2;
               printf("%.2f / %.2f = %.2f\n", num1, num2, result);
          }
          else
          {
               printf("Error: Division by zero!\n");
          }
          break;
     default:
          printf("Invalid operator!\n");
     }

     // Example 2: Day of the week
     printf("\n--- Day of the Week ---\n");
     int day;
     printf("Enter day number (1-7): ");
     scanf("%d", &day);

     switch (day)
     {
     case 1:
          printf("Monday\n");
          break;
     case 2:
          printf("Tuesday\n");
          break;
     case 3:
          printf("Wednesday\n");
          break;
     case 4:
          printf("Thursday\n");
          break;
     case 5:
          printf("Friday\n");
          break;
     case 6:
          printf("Saturday\n");
          break;
     case 7:
          printf("Sunday\n");
          break;
     default:
          printf("Invalid day! Enter 1-7\n");
     }

     // Example 3: Month days
     printf("\n--- Days in Month ---\n");
     int month;
     printf("Enter month number (1-12): ");
     scanf("%d", &month);

     switch (month)
     {
     case 1:
     case 3:
     case 5:
     case 7:
     case 8:
     case 10:
     case 12:
          printf("31 days\n");
          break;
     case 4:
     case 6:
     case 9:
     case 11:
          printf("30 days\n");
          break;
     case 2:
          printf("28 or 29 days (leap year)\n");
          break;
     default:
          printf("Invalid month!\n");
     }

     // Example 4: Grade switch
     printf("\n--- Grade Evaluation ---\n");
     char grade;
     printf("Enter your grade (A/B/C/D/F): ");
     scanf(" %c", &grade);

     switch (grade)
     {
     case 'A':
     case 'a':
          printf("Excellent! Marks: 90-100\n");
          break;
     case 'B':
     case 'b':
          printf("Very Good! Marks: 80-89\n");
          break;
     case 'C':
     case 'c':
          printf("Good! Marks: 70-79\n");
          break;
     case 'D':
     case 'd':
          printf("Satisfactory! Marks: 60-69\n");
          break;
     case 'F':
     case 'f':
          printf("Failed! Marks: Below 60\n");
          break;
     default:
          printf("Invalid grade!\n");
     }

     // Example 5: Vowel or Consonant
     printf("\n--- Vowel or Consonant ---\n");
     char ch;
     printf("Enter a character: ");
     scanf(" %c", &ch);

     switch (ch)
     {
     case 'a':
     case 'A':
     case 'e':
     case 'E':
     case 'i':
     case 'I':
     case 'o':
     case 'O':
     case 'u':
     case 'U':
          printf("%c is a vowel\n", ch);
          break;
     default:
          if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
          {
               printf("%c is a consonant\n", ch);
          }
          else
          {
               printf("%c is not an alphabet\n", ch);
          }
     }

     return 0;
}
