#include <stdio.h>

// Pass by value - doesn't swap
void swapByValue(int a, int b)
{
     int temp = a;
     a = b;
     b = temp;
}

// Pass by reference using pointers - swaps
void swapByPointer(int *a, int *b)
{
     int temp = *a;
     *a = *b;
     *b = temp;
}

int main()
{
     printf("=== Pass by Value vs Pass by Pointer ===\n\n");

     int x = 10, y = 20;

     printf("Before: x = %d, y = %d\n", x, y);

     swapByValue(x, y);
     printf("After swapByValue: x = %d, y = %d (No change)\n", x, y);

     swapByPointer(&x, &y);
     printf("After swapByPointer: x = %d, y = %d (Swapped!)\n", x, y);

     return 0;
}
