#include <stdio.h>

int main()
{
     printf("=== Break and Continue Statements ===\n\n");

     // ========== BREAK STATEMENT ==========
     printf("========== BREAK STATEMENT ==========\n\n");

     // Example 1: Break in for loop
     printf("--- Break in For Loop ---\n");
     printf("Print numbers 1 to 10, but stop at 5:\n");
     for (int i = 1; i <= 10; i++)
     {
          if (i == 5)
          {
               break; // Exit loop when i is 5
          }
          printf("%d ", i);
     }
     printf("\nLoop terminated at 5\n");

     // Example 2: Find first multiple of 7
     printf("\n--- Find First Multiple of 7 ---\n");
     for (int i = 1; i <= 100; i++)
     {
          if (i % 7 == 0)
          {
               printf("First multiple of 7: %d\n", i);
               break;
          }
     }

     // Example 3: Break in while loop - Search in array
     printf("\n--- Search in Array ---\n");
     int arr[] = {10, 20, 30, 40, 50};
     int search = 30;
     int found = 0;
     int i = 0;
     while (i < 5)
     {
          if (arr[i] == search)
          {
               printf("Found %d at index %d\n", search, i);
               found = 1;
               break;
          }
          i++;
     }
     if (!found)
     {
          printf("%d not found\n", search);
     }

     // Example 4: Break in nested loop
     printf("\n--- Break in Nested Loop ---\n");
     printf("Finding first pair where i*j = 24:\n");
     for (int i = 1; i <= 10; i++)
     {
          for (int j = 1; j <= 10; j++)
          {
               if (i * j == 24)
               {
                    printf("Found: %d * %d = 24\n", i, j);
                    goto outer; // Break outer loop using goto
               }
          }
     }
outer:
     printf("Search complete\n");

     // Example 5: Menu with break
     printf("\n--- Menu with Break ---\n");
     int iteration = 0;
     while (1)
     { // Infinite loop
          printf("\nIteration %d:\n", iteration + 1);
          printf("1. Continue\n");
          printf("2. Exit\n");

          int choice = (iteration < 2) ? 1 : 2; // Simulate choice
          printf("Choice: %d (simulated)\n", choice);

          if (choice == 2)
          {
               printf("Breaking out of loop...\n");
               break; // Exit infinite loop
          }
          iteration++;
     }

     // ========== CONTINUE STATEMENT ==========
     printf("\n========== CONTINUE STATEMENT ==========\n\n");

     // Example 6: Skip even numbers
     printf("--- Skip Even Numbers ---\n");
     printf("Print odd numbers from 1 to 10:\n");
     for (int i = 1; i <= 10; i++)
     {
          if (i % 2 == 0)
          {
               continue; // Skip even numbers
          }
          printf("%d ", i);
     }
     printf("\n");

     // Example 7: Skip multiples of 3
     printf("\n--- Skip Multiples of 3 ---\n");
     printf("Numbers from 1 to 20, skipping multiples of 3:\n");
     for (int i = 1; i <= 20; i++)
     {
          if (i % 3 == 0)
          {
               continue;
          }
          printf("%d ", i);
     }
     printf("\n");

     // Example 8: Continue in while loop
     printf("\n--- Sum of Positive Numbers Only ---\n");
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
     printf("Sum of positive numbers: %d\n", sum);

     // Example 9: Skip specific values
     printf("\n--- Skip Specific Values ---\n");
     printf("Print 1-10, skip 3, 5, and 7:\n");
     for (int i = 1; i <= 10; i++)
     {
          if (i == 3 || i == 5 || i == 7)
          {
               continue;
          }
          printf("%d ", i);
     }
     printf("\n");

     // Example 10: Continue in nested loop
     printf("\n--- Multiplication Table (Skip 5) ---\n");
     for (int i = 1; i <= 5; i++)
     {
          if (i == 5)
               continue; // Skip row 5
          for (int j = 1; j <= 5; j++)
          {
               if (j == 5)
                    continue; // Skip column 5
               printf("%2d ", i * j);
          }
          printf("\n");
     }

     // Example 11: Combined break and continue
     printf("\n--- Combined Break and Continue ---\n");
     printf("Print numbers 1-20, skip multiples of 3, stop at first multiple of 13:\n");
     for (int i = 1; i <= 20; i++)
     {
          if (i % 13 == 0)
          {
               printf("\nStopping at %d\n", i);
               break;
          }
          if (i % 3 == 0)
          {
               continue;
          }
          printf("%d ", i);
     }
     printf("\n");

     return 0;
}
