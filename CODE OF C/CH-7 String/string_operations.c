#include <stdio.h>
#include <string.h>

int main()
{
     printf("=== String Operations ===\n\n");

     char str1[50] = "Hello";
     char str2[50] = "World";
     char str3[100];

     // Length
     printf("str1: %s (length: %zu)\n", str1, strlen(str1));
     printf("str2: %s (length: %zu)\n", str2, strlen(str2));

     // Copy
     strcpy(str3, str1);
     printf("\nAfter strcpy(str3, str1):\n");
     printf("str3: %s\n", str3);

     // Concatenate
     strcat(str1, " ");
     strcat(str1, str2);
     printf("\nAfter concatenation:\n");
     printf("str1: %s\n", str1);

     // Compare
     if (strcmp("Apple", "Apple") == 0)
     {
          printf("\n\"Apple\" and \"Apple\" are equal\n");
     }

     return 0;
}
