#include <stdio.h>
#include <string.h>

// Define a structure
struct Student
{
     int rollNo;
     char name[50];
     float marks;
};

// Structure with array
struct Book
{
     char title[100];
     char author[50];
     int year;
     float price;
};

// Nested structure
struct Address
{
     char street[100];
     char city[50];
     int pincode;
};

struct Person
{
     char name[50];
     int age;
     struct Address address;
};

// Function to display student
void displayStudent(struct Student s)
{
     printf("Roll No: %d\n", s.rollNo);
     printf("Name: %s\n", s.name);
     printf("Marks: %.2f\n", s.marks);
}

// Function using pointer to structure
void updateMarks(struct Student *s, float newMarks)
{
     s->marks = newMarks;
}

int main()
{
     printf("=== Structures in C ===\n\n");

     // Example 1: Basic structure
     printf("--- Basic Structure ---\n");
     struct Student s1;
     s1.rollNo = 101;
     strcpy(s1.name, "John");
     s1.marks = 85.5;
     displayStudent(s1);

     // Example 2: Structure initialization
     printf("\n--- Structure Initialization ---\n");
     struct Student s2 = {102, "Alice", 92.0};
     displayStudent(s2);

     // Example 3: Array of structures
     printf("\n--- Array of Structures ---\n");
     struct Student students[3] = {
         {101, "John", 85.5},
         {102, "Alice", 92.0},
         {103, "Bob", 78.5}};

     printf("Student Records:\n");
     for (int i = 0; i < 3; i++)
     {
          printf("\nStudent %d:\n", i + 1);
          displayStudent(students[i]);
     }

     // Example 4: Pointer to structure
     printf("\n--- Pointer to Structure ---\n");
     struct Student *ptr = &s1;
     printf("Using pointer:\n");
     printf("Roll No: %d\n", ptr->rollNo);
     printf("Name: %s\n", ptr->name);
     printf("Marks: %.2f\n", ptr->marks);

     // Example 5: Modify structure using pointer
     printf("\n--- Modify Structure ---\n");
     printf("Before: Marks = %.2f\n", s1.marks);
     updateMarks(&s1, 95.0);
     printf("After: Marks = %.2f\n", s1.marks);

     // Example 6: Nested structure
     printf("\n--- Nested Structure ---\n");
     struct Person p1;
     strcpy(p1.name, "David");
     p1.age = 25;
     strcpy(p1.address.street, "123 Main St");
     strcpy(p1.address.city, "New York");
     p1.address.pincode = 10001;

     printf("Name: %s\n", p1.name);
     printf("Age: %d\n", p1.age);
     printf("Address: %s, %s - %d\n",
            p1.address.street, p1.address.city, p1.address.pincode);

     // Example 7: Structure with multiple data types
     printf("\n--- Book Structure ---\n");
     struct Book book1 = {
         "C Programming",
         "Dennis Ritchie",
         1978,
         599.99};

     printf("Title: %s\n", book1.title);
     printf("Author: %s\n", book1.author);
     printf("Year: %d\n", book1.year);
     printf("Price: %.2f\n", book1.price);

     // Example 8: Structure size
     printf("\n--- Structure Size ---\n");
     printf("Size of Student structure: %zu bytes\n", sizeof(struct Student));
     printf("Size of Book structure: %zu bytes\n", sizeof(struct Book));
     printf("Size of Person structure: %zu bytes\n", sizeof(struct Person));

     // Example 9: Typedef with structure
     printf("\n--- Using Typedef ---\n");
     typedef struct
     {
          int x;
          int y;
     } Point;

     Point p = {10, 20};
     printf("Point coordinates: (%d, %d)\n", p.x, p.y);

     return 0;
}
