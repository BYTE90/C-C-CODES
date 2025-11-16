#include <stdio.h>

int main()
{
     printf("=== Do-While Loop Examples ===\n\n");

     // Example 1: Basic do-while - Print 1 to 10
     printf("--- Print 1 to 10 ---\n");
     int i = 1;
     do
     {
          printf("%d ", i);
          i++;
     } while (i <= 10);
     printf("\n");

     // Example 2: Menu-driven program (runs at least once)
     printf("\n--- Menu Driven Program ---\n");
     int choice;
     int iteration = 0;
     do
     {
          printf("\n=== Menu ===\n");
          printf("1. Display Hello\n");
          printf("2. Display World\n");
          printf("3. Exit\n");
          printf("Enter choice: ");

          // Simulating user input for demonstration
          if (iteration == 0)
               choice = 1;
          else if (iteration == 1)
               choice = 2;
          else
               choice = 3;
          printf("%d (simulated)\n", choice);

          switch (choice)
          {
          case 1:
               printf("Hello!\n");
               break;
          case 2:
               printf("World!\n");
               break;
          case 3:
               printf("Exiting...\n");
               break;
          default:
               printf("Invalid choice!\n");
          }
          iteration++;
     } while (choice != 3 && iteration < 10);

     // Example 3: Input validation (runs until valid input)
     printf("\n--- Input Validation (Demo) ---\n");
     int num;
     int attempts = 0;
     do
     {
          printf("Enter a positive number: ");
          // Simulating inputs: -5, 0, 10
          if (attempts == 0)
               num = -5;
          else if (attempts == 1)
               num = 0;
          else
               num = 10;
          printf("%d (simulated)\n", num);

          if (num <= 0)
          {
               printf("Invalid! Number must be positive.\n");
          }
          attempts++;
     } while (num <= 0 && attempts < 3);
     printf("Valid number entered: %d\n", num);

     // Example 4: Sum of numbers until 0
     printf("\n--- Sum Until 0 ---\n");
     int sum = 0;
     int numbers[] = {5, 10, 15, 20, 0};
     int index = 0;
     do
     {
          num = numbers[index];
          printf("Enter number: %d (simulated)\n", num);
          sum += num;
          index++;
     } while (num != 0 && index < 5);
     printf("Sum = %d\n", sum);

     // Example 5: Password checker
     printf("\n--- Password Checker (Demo) ---\n");
     char password[] = "pass123";
     char input[20];
     char *attempts_arr[] = {"wrong1", "wrong2", "pass123"};
     attempts = 0;
     int maxAttempts = 3;
     do
     {
          printf("Enter password: ");
          // Simulating password input
          int j = 0;
          while (attempts_arr[attempts][j] != '\0')
          {
               input[j] = attempts_arr[attempts][j];
               j++;
          }
          input[j] = '\0';
          printf("%s (simulated)\n", input);

          // Compare strings manually
          int match = 1;
          for (int k = 0; password[k] != '\0' || input[k] != '\0'; k++)
          {
               if (password[k] != input[k])
               {
                    match = 0;
                    break;
               }
          }

          if (match)
          {
               printf("Access Granted!\n");
               break;
          }
          else
          {
               attempts++;
               printf("Wrong password! Attempts left: %d\n", maxAttempts - attempts);
          }
     } while (attempts < maxAttempts);

     if (attempts >= maxAttempts)
     {
          printf("Account locked!\n");
     }

     // Example 6: Generate series
     printf("\n--- Generate Series ---\n");
     int term = 1;
     do
     {
          printf("%d ", term);
          term *= 2; // Double each term
     } while (term <= 100);
     printf("\n");

     // Example 7: Countdown
     printf("\n--- Countdown ---\n");
     int count = 5;
     do
     {
          printf("%d... ", count);
          count--;
     } while (count > 0);
     printf("Blast off!\n");

     // Example 8: Factorial using do-while
     printf("\n--- Factorial of 5 ---\n");
     int n = 5;
     long long factorial = 1;
     i = 1;
     do
     {
          factorial *= i;
          i++;
     } while (i <= n);
     printf("%d! = %lld\n", n, factorial);

     return 0;
}
