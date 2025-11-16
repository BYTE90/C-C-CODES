#include <stdio.h>

int main()
{
     printf("=== Linear Search ===\n\n");

     int arr[] = {45, 23, 67, 12, 89, 34};
     int size = 6;
     int search, found = -1;

     printf("Array: ");
     for (int i = 0; i < size; i++)
     {
          printf("%d ", arr[i]);
     }

     printf("\nEnter element to search: ");
     scanf("%d", &search);

     for (int i = 0; i < size; i++)
     {
          if (arr[i] == search)
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
          printf("Element %d not found\n", search);
     }

     return 0;
}
