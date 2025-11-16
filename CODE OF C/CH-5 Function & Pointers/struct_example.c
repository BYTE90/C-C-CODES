#include <stdio.h>

struct Student
{
     char name[50];
     int roll;
     float marks;
};

int main()
{
     printf("=== Structure Example ===\n\n");

     struct Student s1;

     printf("Enter student name: ");
     scanf("%s", s1.name);
     printf("Enter roll number: ");
     scanf("%d", &s1.roll);
     printf("Enter marks: ");
     scanf("%f", &s1.marks);

     printf("\n--- Student Details ---\n");
     printf("Name: %s\n", s1.name);
     printf("Roll: %d\n", s1.roll);
     printf("Marks: %.2f\n", s1.marks);

     return 0;
}
