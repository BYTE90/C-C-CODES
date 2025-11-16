#include <stdio.h>

int main()
{
     printf("=== Do-While Loop - Menu System ===\n\n");

     int choice;

     do
     {
          printf("\n--- Menu ---\n");
          printf("1. Print Hello\n");
          printf("2. Print World\n");
          printf("3. Print C Programming\n");
          printf("4. Exit\n");
          printf("Enter your choice: ");
          scanf("%d", &choice);

          switch (choice)
          {
          case 1:
               printf("\nHello!\n");
               break;
          case 2:
               printf("\nWorld!\n");
               break;
          case 3:
               printf("\nC Programming!\n");
               break;
          case 4:
               printf("\nExiting...\n");
               break;
          default:
               printf("\nInvalid choice!\n");
          }
     } while (choice != 4);

     return 0;
}
