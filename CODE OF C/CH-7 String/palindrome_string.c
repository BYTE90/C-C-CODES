#include <stdio.h>

int main()
{
     printf("=== Palindrome String Check ===\n\n");

     char str[100];
     int len, isPalindrome = 1;

     printf("Enter a string: ");
     scanf("%s", str);

     // Calculate length
     len = 0;
     while (str[len] != '\0')
          len++;

     // Check palindrome
     for (int i = 0; i < len / 2; i++)
     {
          if (str[i] != str[len - 1 - i])
          {
               isPalindrome = 0;
               break;
          }
     }

     printf("%s is %s palindrome\n", str, isPalindrome ? "a" : "not a");

     return 0;
}
