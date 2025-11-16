#include <stdio.h>

int main()
{
     printf("=== Array Basics ===\n\n");

     // Example 1: Array declaration and initialization
     printf("--- Array Declaration ---\n");
     int arr1[5] = {10, 20, 30, 40, 50};
     int arr2[] = {1, 2, 3, 4, 5, 6}; // Size determined automatically
     int arr3[5] = {1, 2};            // Remaining elements initialized to 0

     printf("arr1: ");
     for (int i = 0; i < 5; i++)
          printf("%d ", arr1[i]);
     printf("\narr2: ");
     for (int i = 0; i < 6; i++)
          printf("%d ", arr2[i]);
     printf("\narr3: ");
     for (int i = 0; i < 5; i++)
          printf("%d ", arr3[i]);
     printf("\n");

     // Example 2: Array input and output
     printf("\n--- Array Input/Output ---\n");
     int numbers[5] = {5, 10, 15, 20, 25};
     printf("Array elements:\n");
     for (int i = 0; i < 5; i++)
     {
          printf("numbers[%d] = %d\n", i, numbers[i]);
     }

     // Example 3: Sum of array elements
     printf("\n--- Sum of Array ---\n");
     int sum = 0;
     for (int i = 0; i < 5; i++)
     {
          sum += numbers[i];
     }
     printf("Sum = %d\n", sum);
     printf("Average = %.2f\n", sum / 5.0);

     // Example 4: Find maximum and minimum
     printf("\n--- Max and Min ---\n");
     int data[] = {45, 23, 67, 12, 89, 34};
     int size = 6;
     int max = data[0], min = data[0];
     for (int i = 1; i < size; i++)
     {
          if (data[i] > max)
               max = data[i];
          if (data[i] < min)
               min = data[i];
     }
     printf("Array: ");
     for (int i = 0; i < size; i++)
          printf("%d ", data[i]);
     printf("\nMax: %d, Min: %d\n", max, min);

     // Example 5: Linear search
     printf("\n--- Linear Search ---\n");
     int search = 67;
     int found = -1;
     for (int i = 0; i < size; i++)
     {
          if (data[i] == search)
          {
               found = i;
               break;
          }
     }
     if (found != -1)
     {
          printf("Element %d found at index %d\n", search, found);
     }
     else
     {
          printf("Element not found\n");
     }

     // Example 6: Reverse array
     printf("\n--- Reverse Array ---\n");
     int original[] = {1, 2, 3, 4, 5};
     printf("Before: ");
     for (int i = 0; i < 5; i++)
          printf("%d ", original[i]);

     for (int i = 0; i < 5 / 2; i++)
     {
          int temp = original[i];
          original[i] = original[5 - 1 - i];
          original[5 - 1 - i] = temp;
     }

     printf("\nAfter: ");
     for (int i = 0; i < 5; i++)
          printf("%d ", original[i]);
     printf("\n");

     // Example 7: Copy array
     printf("\n--- Copy Array ---\n");
     int source[] = {10, 20, 30};
     int destination[3];
     for (int i = 0; i < 3; i++)
     {
          destination[i] = source[i];
     }
     printf("Source: ");
     for (int i = 0; i < 3; i++)
          printf("%d ", source[i]);
     printf("\nDestination: ");
     for (int i = 0; i < 3; i++)
          printf("%d ", destination[i]);
     printf("\n");

     return 0;
}
