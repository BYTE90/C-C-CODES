#include <stdio.h>

// Function to print array using pointer
void printArrayPtr(int *arr, int size)
{
     printf("Array elements: ");
     for (int i = 0; i < size; i++)
     {
          printf("%d ", *(arr + i));
     }
     printf("\n");
}

// Function to find sum using pointer
int sumArrayPtr(int *arr, int size)
{
     int sum = 0;
     for (int i = 0; i < size; i++)
     {
          sum += *(arr + i);
     }
     return sum;
}

// Reverse array using pointers
void reverseArray(int *arr, int size)
{
     int *start = arr;
     int *end = arr + size - 1;

     while (start < end)
     {
          int temp = *start;
          *start = *end;
          *end = temp;
          start++;
          end--;
     }
}

int main()
{
     printf("=== Array and Pointers ===\n\n");

     // Example 1: Array name as pointer
     printf("--- Array Name as Pointer ---\n");
     int arr[] = {10, 20, 30, 40, 50};
     printf("arr[0] = %d\n", arr[0]);
     printf("*arr = %d\n", *arr);
     printf("arr[2] = %d\n", arr[2]);
     printf("*(arr + 2) = %d\n", *(arr + 2));

     // Example 2: Pointer arithmetic with arrays
     printf("\n--- Pointer Arithmetic ---\n");
     int *ptr = arr;
     printf("Using pointer arithmetic:\n");
     for (int i = 0; i < 5; i++)
     {
          printf("Element %d: %d (at address %p)\n", i, *(ptr + i), (void *)(ptr + i));
     }

     // Example 3: Array traversal using pointer increment
     printf("\n--- Pointer Increment ---\n");
     ptr = arr;
     printf("Using pointer increment:\n");
     for (int i = 0; i < 5; i++)
     {
          printf("%d ", *ptr);
          ptr++;
     }
     printf("\n");

     // Example 4: Function with array pointer
     printf("\n--- Function with Array Pointer ---\n");
     int numbers[] = {5, 10, 15, 20, 25};
     printArrayPtr(numbers, 5);
     printf("Sum: %d\n", sumArrayPtr(numbers, 5));

     // Example 5: Reverse array
     printf("\n--- Reverse Array ---\n");
     int data[] = {1, 2, 3, 4, 5};
     printf("Before reverse: ");
     printArrayPtr(data, 5);
     reverseArray(data, 5);
     printf("After reverse: ");
     printArrayPtr(data, 5);

     // Example 6: Pointer to array
     printf("\n--- Pointer to Array ---\n");
     int matrix[3] = {100, 200, 300};
     int (*ptrArray)[3] = &matrix;
     printf("Using pointer to array:\n");
     for (int i = 0; i < 3; i++)
     {
          printf("(*ptrArray)[%d] = %d\n", i, (*ptrArray)[i]);
     }

     // Example 7: Array of pointers
     printf("\n--- Array of Pointers ---\n");
     int a = 10, b = 20, c = 30;
     int *ptrArr[3] = {&a, &b, &c};
     printf("Using array of pointers:\n");
     for (int i = 0; i < 3; i++)
     {
          printf("*ptrArr[%d] = %d\n", i, *ptrArr[i]);
     }

     // Example 8: Character array (string) and pointer
     printf("\n--- Character Array and Pointer ---\n");
     char str[] = "Hello";
     char *charPtr = str;
     printf("Using char pointer:\n");
     while (*charPtr != '\0')
     {
          printf("%c ", *charPtr);
          charPtr++;
     }
     printf("\n");

     // Example 9: 2D array and pointer
     printf("\n--- 2D Array and Pointer ---\n");
     int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
     int *p = &mat[0][0];
     printf("2D array using pointer:\n");
     for (int i = 0; i < 6; i++)
     {
          printf("%d ", *(p + i));
          if ((i + 1) % 3 == 0)
               printf("\n");
     }

     return 0;
}
