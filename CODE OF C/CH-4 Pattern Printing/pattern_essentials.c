#include <stdio.h>

int main()
{
     printf("=== Essential Pattern Programs ===\n\n");

     int n = 5;

     // Pattern 1: Square of Stars
     printf("Pattern 1: Square\n");
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               printf("* ");
          }
          printf("\n");
     }

     // Pattern 2: Right Triangle
     printf("\nPattern 2: Right Triangle\n");
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               printf("* ");
          }
          printf("\n");
     }

     // Pattern 3: Inverted Right Triangle
     printf("\nPattern 3: Inverted Right Triangle\n");
     for (int i = n; i >= 1; i--)
     {
          for (int j = 1; j <= i; j++)
          {
               printf("* ");
          }
          printf("\n");
     }

     // Pattern 4: Pyramid
     printf("\nPattern 4: Pyramid\n");
     for (int i = 1; i <= n; i++)
     {
          // Print spaces
          for (int j = 1; j <= n - i; j++)
          {
               printf("  ");
          }
          // Print stars
          for (int j = 1; j <= 2 * i - 1; j++)
          {
               printf("* ");
          }
          printf("\n");
     }

     // Pattern 5: Inverted Pyramid
     printf("\nPattern 5: Inverted Pyramid\n");
     for (int i = n; i >= 1; i--)
     {
          for (int j = 1; j <= n - i; j++)
          {
               printf("  ");
          }
          for (int j = 1; j <= 2 * i - 1; j++)
          {
               printf("* ");
          }
          printf("\n");
     }

     // Pattern 6: Diamond
     printf("\nPattern 6: Diamond\n");
     // Upper half
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n - i; j++)
          {
               printf("  ");
          }
          for (int j = 1; j <= 2 * i - 1; j++)
          {
               printf("* ");
          }
          printf("\n");
     }
     // Lower half
     for (int i = n - 1; i >= 1; i--)
     {
          for (int j = 1; j <= n - i; j++)
          {
               printf("  ");
          }
          for (int j = 1; j <= 2 * i - 1; j++)
          {
               printf("* ");
          }
          printf("\n");
     }

     // Pattern 7: Hollow Rectangle
     printf("\nPattern 7: Hollow Rectangle\n");
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               if (i == 1 || i == n || j == 1 || j == n)
               {
                    printf("* ");
               }
               else
               {
                    printf("  ");
               }
          }
          printf("\n");
     }

     // Pattern 8: Number Triangle
     printf("\nPattern 8: Number Triangle\n");
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               printf("%d ", j);
          }
          printf("\n");
     }

     // Pattern 9: Floyd's Triangle
     printf("\nPattern 9: Floyd's Triangle\n");
     int num = 1;
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               printf("%d ", num++);
          }
          printf("\n");
     }

     // Pattern 10: Alphabet Triangle
     printf("\nPattern 10: Alphabet Triangle\n");
     for (int i = 1; i <= n; i++)
     {
          char ch = 'A';
          for (int j = 1; j <= i; j++)
          {
               printf("%c ", ch++);
          }
          printf("\n");
     }

     return 0;
}
