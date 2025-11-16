#include <stdio.h>

int main()
{
     printf("=== Pointer Basics ===\n\n");

     // Example 1: Basic pointer declaration and initialization
     printf("--- Basic Pointer Usage ---\n");
     int num = 10;
     int *ptr = &num;

     printf("Value of num: %d\n", num);
     printf("Address of num: %p\n", (void *)&num);
     printf("Value of ptr (address it holds): %p\n", (void *)ptr);
     printf("Value at ptr (dereferencing): %d\n", *ptr);

     // Example 2: Modifying value through pointer
     printf("\n--- Modifying Value Through Pointer ---\n");
     printf("Before: num = %d\n", num);
     *ptr = 20;
     printf("After *ptr = 20: num = %d\n", num);

     // Example 3: Pointer arithmetic
     printf("\n--- Pointer Arithmetic ---\n");
     int arr[] = {10, 20, 30, 40, 50};
     int *p = arr; // Points to first element

     printf("Array elements using pointer:\n");
     for (int i = 0; i < 5; i++)
     {
          printf("arr[%d] = %d, *(p+%d) = %d, Address: %p\n",
                 i, arr[i], i, *(p + i), (void *)(p + i));
     }

     // Example 4: Pointer to pointer
     printf("\n--- Pointer to Pointer ---\n");
     int value = 100;
     int *ptr1 = &value;
     int **ptr2 = &ptr1;

     printf("Value: %d\n", value);
     printf("*ptr1: %d\n", *ptr1);
     printf("**ptr2: %d\n", **ptr2);
     printf("Address of value: %p\n", (void *)&value);
     printf("ptr1 holds: %p\n", (void *)ptr1);
     printf("ptr2 holds: %p\n", (void *)ptr2);

     // Example 5: NULL pointer
     printf("\n--- NULL Pointer ---\n");
     int *nullPtr = NULL;
     printf("nullPtr = %p\n", (void *)nullPtr);
     if (nullPtr == NULL)
     {
          printf("Pointer is NULL - safe to check before dereferencing\n");
     }

     // Example 6: Pointer size
     printf("\n--- Pointer Size ---\n");
     printf("Size of int: %zu bytes\n", sizeof(int));
     printf("Size of int*: %zu bytes\n", sizeof(int *));
     printf("Size of char*: %zu bytes\n", sizeof(char *));
     printf("Size of double*: %zu bytes\n", sizeof(double *));

     // Example 7: Array and pointer relationship
     printf("\n--- Array and Pointer Relationship ---\n");
     int numbers[] = {1, 2, 3, 4, 5};
     printf("Array name as pointer: %p\n", (void *)numbers);
     printf("Address of first element: %p\n", (void *)&numbers[0]);
     printf("Both are same!\n");

     // Example 8: Pointer comparison
     printf("\n--- Pointer Comparison ---\n");
     int a = 10, b = 20;
     int *ptrA = &a;
     int *ptrB = &b;
     int *ptrA2 = &a;

     if (ptrA == ptrA2)
     {
          printf("ptrA and ptrA2 point to same address\n");
     }
     if (ptrA != ptrB)
     {
          printf("ptrA and ptrB point to different addresses\n");
     }

     return 0;
}
