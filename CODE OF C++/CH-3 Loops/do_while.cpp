#include <iostream>
#include <string>
using namespace std;

int main()
{
     cout << "=== Do-While Loop Examples ===" << endl
          << endl;

     // Example 1: Basic do-while - Print 1 to 10
     cout << "--- Print 1 to 10 ---" << endl;
     int i = 1;
     do
     {
          cout << i << " ";
          i++;
     } while (i <= 10);
     cout << endl;

     // Example 2: Menu-driven program (runs at least once)
     cout << "\n--- Menu Driven Program ---" << endl;
     int choice;
     int iteration = 0;
     do
     {
          cout << "\n=== Menu ===" << endl;
          cout << "1. Display Hello" << endl;
          cout << "2. Display World" << endl;
          cout << "3. Exit" << endl;
          cout << "Enter choice: ";

          // Simulating user input for demonstration
          if (iteration == 0)
               choice = 1;
          else if (iteration == 1)
               choice = 2;
          else
               choice = 3;
          cout << choice << " (simulated)" << endl;

          switch (choice)
          {
          case 1:
               cout << "Hello!" << endl;
               break;
          case 2:
               cout << "World!" << endl;
               break;
          case 3:
               cout << "Exiting..." << endl;
               break;
          default:
               cout << "Invalid choice!" << endl;
          }
          iteration++;
     } while (choice != 3 && iteration < 10);

     // Example 3: Input validation (runs until valid input)
     cout << "\n--- Input Validation (Demo) ---" << endl;
     int num;
     int attempts = 0;
     do
     {
          cout << "Enter a positive number: ";
          // Simulating inputs: -5, 0, 10
          if (attempts == 0)
               num = -5;
          else if (attempts == 1)
               num = 0;
          else
               num = 10;
          cout << num << " (simulated)" << endl;

          if (num <= 0)
          {
               cout << "Invalid! Number must be positive." << endl;
          }
          attempts++;
     } while (num <= 0 && attempts < 3);
     cout << "Valid number entered: " << num << endl;

     // Example 4: Sum of numbers until 0
     cout << "\n--- Sum Until 0 ---" << endl;
     int sum = 0;
     int numbers[] = {5, 10, 15, 20, 0};
     int index = 0;
     do
     {
          num = numbers[index];
          cout << "Enter number: " << num << " (simulated)" << endl;
          sum += num;
          index++;
     } while (num != 0 && index < 5);
     cout << "Sum = " << sum << endl;

     // Example 5: Password checker
     cout << "\n--- Password Checker (Demo) ---" << endl;
     string password = "pass123";
     string input;
     string attempts_arr[] = {"wrong1", "wrong2", "pass123"};
     attempts = 0;
     int maxAttempts = 3;
     do
     {
          cout << "Enter password: ";
          // Simulating password input
          input = attempts_arr[attempts];
          cout << input << " (simulated)" << endl;

          if (input == password)
          {
               cout << "Access Granted!" << endl;
               break;
          }
          else
          {
               attempts++;
               cout << "Wrong password! Attempts left: " << (maxAttempts - attempts) << endl;
          }
     } while (attempts < maxAttempts);

     if (attempts >= maxAttempts)
     {
          cout << "Account locked!" << endl;
     }

     // Example 6: Generate series
     cout << "\n--- Generate Series ---" << endl;
     int term = 1;
     do
     {
          cout << term << " ";
          term *= 2; // Double each term
     } while (term <= 100);
     cout << endl;

     // Example 7: Countdown
     cout << "\n--- Countdown ---" << endl;
     int count = 5;
     do
     {
          cout << count << "... ";
          count--;
     } while (count > 0);
     cout << "Blast off!" << endl;

     // Example 8: Factorial using do-while
     cout << "\n--- Factorial of 5 ---" << endl;
     int n = 5;
     long long factorial = 1;
     i = 1;
     do
     {
          factorial *= i;
          i++;
     } while (i <= n);
     cout << n << "! = " << factorial << endl;

     return 0;
}
