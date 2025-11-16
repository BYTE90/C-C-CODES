#include <stdio.h>

// Pass by value
void passByValue(int x)
{
     printf("Inside passByValue (before): x = %d\n", x);
     x = 100;
     printf("Inside passByValue (after): x = %d\n", x);
}

// Pass by reference (using pointers in C)
void passByReference(int *x)
{
     printf("Inside passByReference (before): *x = %d\n", *x);
     *x = 100;
     printf("Inside passByReference (after): *x = %d\n", *x);
}

// Swap using pass by value (doesn't work)
void swapByValue(int a, int b)
{
     int temp = a;
     a = b;
     b = temp;
}

// Swap using pass by reference (works)
void swapByReference(int *a, int *b)
{
     int temp = *a;
     *a = *b;
     *b = temp;
}

// Modify array elements
void modifyArray(int arr[], int size)
{
     printf("Inside modifyArray:\n");
     for (int i = 0; i < size; i++)
     {
          arr[i] *= 2;
          printf("%d ", arr[i]);
     }
     printf("\n");
}

// Calculate sum and product using pointers
void sumAndProduct(int a, int b, int *sum, int *product)
{
     *sum = a + b;
     *product = a * b;
}

// Get min and max
void getMinMax(int arr[], int size, int *min, int *max)
{
     *min = *max = arr[0];
     for (int i = 1; i < size; i++)
     {
          if (arr[i] < *min)
               *min = arr[i];
          if (arr[i] > *max)
               *max = arr[i];
     }
}

int main()
{
     printf("=== Pass by Value vs Pass by Reference ===\n\n");

     // Example 1: Pass by value
     printf("--- Pass by Value ---\n");
     int num1 = 10;
     printf("Before function call: num1 = %d\n", num1);
     passByValue(num1);
     printf("After function call: num1 = %d\n", num1);
     printf("(Value unchanged in main)\n");

     // Example 2: Pass by reference
     printf("\n--- Pass by Reference ---\n");
     int num2 = 10;
     printf("Before function call: num2 = %d\n", num2);
     passByReference(&num2);
     printf("After function call: num2 = %d\n", num2);
     printf("(Value changed in main)\n");

     // Example 3: Swap by value (doesn't work)
     printf("\n--- Swap by Value (Doesn't Work) ---\n");
     int a = 5, b = 10;
     printf("Before swap: a = %d, b = %d\n", a, b);
     swapByValue(a, b);
     printf("After swap: a = %d, b = %d\n", a, b);

     // Example 4: Swap by reference (works)
     printf("\n--- Swap by Reference (Works) ---\n");
     printf("Before swap: a = %d, b = %d\n", a, b);
     swapByReference(&a, &b);
     printf("After swap: a = %d, b = %d\n", a, b);

     // Example 5: Modify array
     printf("\n--- Modify Array ---\n");
     int arr[] = {1, 2, 3, 4, 5};
     printf("Before: ");
     for (int i = 0; i < 5; i++)
          printf("%d ", arr[i]);
     printf("\n");

     modifyArray(arr, 5);

     printf("After: ");
     for (int i = 0; i < 5; i++)
          printf("%d ", arr[i]);
     printf("\n");

     // Example 6: Multiple return values
     printf("\n--- Multiple Return Values ---\n");
     int sum, product;
     sumAndProduct(5, 7, &sum, &product);
     printf("Sum: %d, Product: %d\n", sum, product);

     // Example 7: Get min and max
     printf("\n--- Get Min and Max ---\n");
     int numbers[] = {45, 23, 67, 12, 89, 34};
     int min, max;
     getMinMax(numbers, 6, &min, &max);
     printf("Array: ");
     for (int i = 0; i < 6; i++)
          printf("%d ", numbers[i]);
     printf("\nMin: %d, Max: %d\n", min, max);

     return 0;
}
