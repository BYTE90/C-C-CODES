#include <stdio.h>

int main()
{
     printf("=== Pointer Basics ===\n\n");

     int num = 10;
     int *ptr = &num;

     printf("Variable num = %d\n", num);
     printf("Address of num = %p\n", (void *)&num);
     printf("\nPointer ptr = %p\n", (void *)ptr);
     printf("Value at ptr (*ptr) = %d\n", *ptr);

     // Modify value through pointer
     *ptr = 20;
     printf("\nAfter *ptr = 20:\n");
     printf("num = %d\n", num);

     return 0;
}
