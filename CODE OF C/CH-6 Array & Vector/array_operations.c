#include <stdio.h>

int main()
{
     printf("=== Array Operations ===\n\n");

     int arr[] = {10, 20, 30, 40, 50};
     int size = 5;

     // Display array
     printf("Array: ");
     for (int i = 0; i < size; i++)
     {
          printf("%d ", arr[i]);
     }
     printf("\n");

     // Sum
     int sum = 0;
     for (int i = 0; i < size; i++)
     {
          sum += arr[i];
     }
     printf("Sum: %d\n", sum);

     // Average
     printf("Average: %.2f\n", sum / (float)size);

     // Max and Min
     int max = arr[0], min = arr[0];
     for (int i = 1; i < size; i++)
     {
          if (arr[i] > max)
               max = arr[i];
          if (arr[i] < min)
               min = arr[i];
     }
     printf("Max: %d, Min: %d\n", max, min);

     return 0;
}
