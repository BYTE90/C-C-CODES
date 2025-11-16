#include <iostream>
using namespace std;

// Function to print array using pointer
void printArrayPtr(int *arr, int size)
{
     cout << "Array elements: ";
     for (int i = 0; i < size; i++)
     {
          cout << *(arr + i) << " ";
     }
     cout << endl;
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
     cout << "=== Array and Pointers ===" << endl
          << endl;

     // Example 1: Array name as pointer
     cout << "--- Array Name as Pointer ---" << endl;
     int arr[] = {10, 20, 30, 40, 50};
     cout << "arr[0] = " << arr[0] << endl;
     cout << "*arr = " << *arr << endl;
     cout << "arr[2] = " << arr[2] << endl;
     cout << "*(arr + 2) = " << *(arr + 2) << endl;

     // Example 2: Pointer arithmetic with arrays
     cout << "\n--- Pointer Arithmetic ---" << endl;
     int *ptr = arr;
     cout << "Using pointer arithmetic:" << endl;
     for (int i = 0; i < 5; i++)
     {
          cout << "Element " << i << ": " << *(ptr + i)
               << " (at address " << (ptr + i) << ")" << endl;
     }

     // Example 3: Array traversal using pointer increment
     cout << "\n--- Pointer Increment ---" << endl;
     ptr = arr;
     cout << "Using pointer increment:" << endl;
     for (int i = 0; i < 5; i++)
     {
          cout << *ptr << " ";
          ptr++;
     }
     cout << endl;

     // Example 4: Function with array pointer
     cout << "\n--- Function with Array Pointer ---" << endl;
     int numbers[] = {5, 10, 15, 20, 25};
     printArrayPtr(numbers, 5);
     cout << "Sum: " << sumArrayPtr(numbers, 5) << endl;

     // Example 5: Reverse array
     cout << "\n--- Reverse Array ---" << endl;
     int data[] = {1, 2, 3, 4, 5};
     cout << "Before reverse: ";
     printArrayPtr(data, 5);
     reverseArray(data, 5);
     cout << "After reverse: ";
     printArrayPtr(data, 5);

     // Example 6: Pointer to array
     cout << "\n--- Pointer to Array ---" << endl;
     int matrix[3] = {100, 200, 300};
     int (*ptrArray)[3] = &matrix;
     cout << "Using pointer to array:" << endl;
     for (int i = 0; i < 3; i++)
     {
          cout << "(*ptrArray)[" << i << "] = " << (*ptrArray)[i] << endl;
     }

     // Example 7: Array of pointers
     cout << "\n--- Array of Pointers ---" << endl;
     int a = 10, b = 20, c = 30;
     int *ptrArr[3] = {&a, &b, &c};
     cout << "Using array of pointers:" << endl;
     for (int i = 0; i < 3; i++)
     {
          cout << "*ptrArr[" << i << "] = " << *ptrArr[i] << endl;
     }

     // Example 8: Character array (string) and pointer
     cout << "\n--- Character Array and Pointer ---" << endl;
     char str[] = "Hello";
     char *charPtr = str;
     cout << "Using char pointer:" << endl;
     while (*charPtr != '\0')
     {
          cout << *charPtr << " ";
          charPtr++;
     }
     cout << endl;

     // Example 9: 2D array and pointer
     cout << "\n--- 2D Array and Pointer ---" << endl;
     int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
     int *p = &mat[0][0];
     cout << "2D array using pointer:" << endl;
     for (int i = 0; i < 6; i++)
     {
          cout << *(p + i) << " ";
          if ((i + 1) % 3 == 0)
               cout << endl;
     }

     return 0;
}
