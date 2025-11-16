#include <iostream>
using namespace std;

int main()
{
     cout << "=== Break and Continue Statements ===" << endl
          << endl;

     // ========== BREAK STATEMENT ==========
     cout << "========== BREAK STATEMENT ==========" << endl
          << endl;

     // Example 1: Break in for loop
     cout << "--- Break in For Loop ---" << endl;
     cout << "Print numbers 1 to 10, but stop at 5:" << endl;
     for (int i = 1; i <= 10; i++)
     {
          if (i == 5)
          {
               break; // Exit loop when i is 5
          }
          cout << i << " ";
     }
     cout << "\nLoop terminated at 5" << endl;

     // Example 2: Find first multiple of 7
     cout << "\n--- Find First Multiple of 7 ---" << endl;
     for (int i = 1; i <= 100; i++)
     {
          if (i % 7 == 0)
          {
               cout << "First multiple of 7: " << i << endl;
               break;
          }
     }

     // Example 3: Break in while loop - Search in array
     cout << "\n--- Search in Array ---" << endl;
     int arr[] = {10, 20, 30, 40, 50};
     int search = 30;
     bool found = false;
     int i = 0;
     while (i < 5)
     {
          if (arr[i] == search)
          {
               cout << "Found " << search << " at index " << i << endl;
               found = true;
               break;
          }
          i++;
     }
     if (!found)
     {
          cout << search << " not found" << endl;
     }

     // Example 4: Break in nested loop
     cout << "\n--- Break in Nested Loop ---" << endl;
     cout << "Finding first pair where i*j = 24:" << endl;
     bool foundPair = false;
     for (int i = 1; i <= 10 && !foundPair; i++)
     {
          for (int j = 1; j <= 10; j++)
          {
               if (i * j == 24)
               {
                    cout << "Found: " << i << " * " << j << " = 24" << endl;
                    foundPair = true;
                    break;
               }
          }
     }
     cout << "Search complete" << endl;

     // Example 5: Menu with break
     cout << "\n--- Menu with Break ---" << endl;
     int iteration = 0;
     while (true)
     { // Infinite loop
          cout << "\nIteration " << (iteration + 1) << ":" << endl;
          cout << "1. Continue" << endl;
          cout << "2. Exit" << endl;

          int choice = (iteration < 2) ? 1 : 2; // Simulate choice
          cout << "Choice: " << choice << " (simulated)" << endl;

          if (choice == 2)
          {
               cout << "Breaking out of loop..." << endl;
               break; // Exit infinite loop
          }
          iteration++;
     }

     // ========== CONTINUE STATEMENT ==========
     cout << "\n========== CONTINUE STATEMENT ==========" << endl
          << endl;

     // Example 6: Skip even numbers
     cout << "--- Skip Even Numbers ---" << endl;
     cout << "Print odd numbers from 1 to 10:" << endl;
     for (int i = 1; i <= 10; i++)
     {
          if (i % 2 == 0)
          {
               continue; // Skip even numbers
          }
          cout << i << " ";
     }
     cout << endl;

     // Example 7: Skip multiples of 3
     cout << "\n--- Skip Multiples of 3 ---" << endl;
     cout << "Numbers from 1 to 20, skipping multiples of 3:" << endl;
     for (int i = 1; i <= 20; i++)
     {
          if (i % 3 == 0)
          {
               continue;
          }
          cout << i << " ";
     }
     cout << endl;

     // Example 8: Continue in while loop
     cout << "\n--- Sum of Positive Numbers Only ---" << endl;
     int numbers[] = {5, -3, 10, -7, 15, -2, 20};
     int sum = 0;
     i = 0;
     while (i < 7)
     {
          if (numbers[i] < 0)
          {
               i++;
               continue; // Skip negative numbers
          }
          sum += numbers[i];
          i++;
     }
     cout << "Sum of positive numbers: " << sum << endl;

     // Example 9: Skip specific values
     cout << "\n--- Skip Specific Values ---" << endl;
     cout << "Print 1-10, skip 3, 5, and 7:" << endl;
     for (int i = 1; i <= 10; i++)
     {
          if (i == 3 || i == 5 || i == 7)
          {
               continue;
          }
          cout << i << " ";
     }
     cout << endl;

     // Example 10: Continue in nested loop
     cout << "\n--- Multiplication Table (Skip 5) ---" << endl;
     for (int i = 1; i <= 5; i++)
     {
          if (i == 5)
               continue; // Skip row 5
          for (int j = 1; j <= 5; j++)
          {
               if (j == 5)
                    continue; // Skip column 5
               cout << i * j << " ";
          }
          cout << endl;
     }

     // Example 11: Combined break and continue
     cout << "\n--- Combined Break and Continue ---" << endl;
     cout << "Print numbers 1-20, skip multiples of 3, stop at first multiple of 13:" << endl;
     for (int i = 1; i <= 20; i++)
     {
          if (i % 13 == 0)
          {
               cout << "\nStopping at " << i << endl;
               break;
          }
          if (i % 3 == 0)
          {
               continue;
          }
          cout << i << " ";
     }
     cout << endl;

     return 0;
}
