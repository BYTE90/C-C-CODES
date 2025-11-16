#include <stdio.h>
#include <string.h>

int main()
{
     printf("=== String Basics ===\n\n");

     // Example 1: String declaration and initialization
     printf("--- String Declaration ---\n");
     char str1[] = "Hello";
     char str2[20] = "World";
     char str3[] = {'H', 'i', '\0'};

     printf("str1: %s\n", str1);
     printf("str2: %s\n", str2);
     printf("str3: %s\n", str3);

     // Example 2: String input/output
     printf("\n--- String I/O ---\n");
     char name[50] = "John Doe";
     printf("Name: %s\n", name);
     printf("First character: %c\n", name[0]);

     // Example 3: String length
     printf("\n--- String Length ---\n");
     char text[] = "Programming";
     printf("String: %s\n", text);
     printf("Length using strlen(): %zu\n", strlen(text));

     // Manual length calculation
     int len = 0;
     while (text[len] != '\0')
          len++;
     printf("Length (manual): %d\n", len);

     // Example 4: String copy
     printf("\n--- String Copy ---\n");
     char source[] = "Hello World";
     char dest[50];
     strcpy(dest, source);
     printf("Source: %s\n", source);
     printf("Destination: %s\n", dest);

     // Example 5: String concatenation
     printf("\n--- String Concatenation ---\n");
     char str_a[50] = "Hello ";
     char str_b[] = "World";
     strcat(str_a, str_b);
     printf("Concatenated: %s\n", str_a);

     // Example 6: String comparison
     printf("\n--- String Comparison ---\n");
     char s1[] = "Apple";
     char s2[] = "Apple";
     char s3[] = "Banana";

     printf("s1: %s, s2: %s\n", s1, s2);
     if (strcmp(s1, s2) == 0)
     {
          printf("s1 and s2 are equal\n");
     }

     printf("s1: %s, s3: %s\n", s1, s3);
     if (strcmp(s1, s3) < 0)
     {
          printf("s1 comes before s3\n");
     }

     // Example 7: Character counting
     printf("\n--- Character Counting ---\n");
     char sentence[] = "Hello World";
     int vowels = 0, consonants = 0, spaces = 0;

     for (int i = 0; sentence[i] != '\0'; i++)
     {
          char ch = sentence[i];
          if (ch == ' ')
          {
               spaces++;
          }
          else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
          {
               if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                   ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
               {
                    vowels++;
               }
               else
               {
                    consonants++;
               }
          }
     }

     printf("String: %s\n", sentence);
     printf("Vowels: %d, Consonants: %d, Spaces: %d\n", vowels, consonants, spaces);

     // Example 8: Reverse string
     printf("\n--- Reverse String ---\n");
     char original[] = "Programming";
     printf("Original: %s\n", original);

     int length = strlen(original);
     for (int i = 0; i < length / 2; i++)
     {
          char temp = original[i];
          original[i] = original[length - 1 - i];
          original[length - 1 - i] = temp;
     }
     printf("Reversed: %s\n", original);

     // Example 9: Palindrome check
     printf("\n--- Palindrome Check ---\n");
     char word[] = "madam";
     int isPalindrome = 1;
     int wordLen = strlen(word);

     for (int i = 0; i < wordLen / 2; i++)
     {
          if (word[i] != word[wordLen - 1 - i])
          {
               isPalindrome = 0;
               break;
          }
     }

     printf("Word: %s\n", word);
     printf("%s\n", isPalindrome ? "Is a palindrome" : "Not a palindrome");

     // Example 10: Convert case
     printf("\n--- Case Conversion ---\n");
     char mixed[] = "Hello World";
     printf("Original: %s\n", mixed);

     for (int i = 0; mixed[i] != '\0'; i++)
     {
          if (mixed[i] >= 'a' && mixed[i] <= 'z')
          {
               mixed[i] = mixed[i] - 32; // Convert to uppercase
          }
     }
     printf("Uppercase: %s\n", mixed);

     return 0;
}
