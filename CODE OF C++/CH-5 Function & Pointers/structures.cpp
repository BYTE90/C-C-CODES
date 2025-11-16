#include <iostream>
#include <string>
using namespace std;

// Define a structure
struct Student
{
     int rollNo;
     string name;
     float marks;
};

// Structure with multiple data types
struct Book
{
     string title;
     string author;
     int year;
     float price;
};

// Nested structure
struct Address
{
     string street;
     string city;
     int pincode;
};

struct Person
{
     string name;
     int age;
     Address address;
};

// Function to display student
void displayStudent(Student s)
{
     cout << "Roll No: " << s.rollNo << endl;
     cout << "Name: " << s.name << endl;
     cout << "Marks: " << s.marks << endl;
}

// Function using reference to structure
void updateMarks(Student &s, float newMarks)
{
     s.marks = newMarks;
}

int main()
{
     cout << "=== Structures in C++ ===" << endl
          << endl;

     // Example 1: Basic structure
     cout << "--- Basic Structure ---" << endl;
     Student s1;
     s1.rollNo = 101;
     s1.name = "John";
     s1.marks = 85.5;
     displayStudent(s1);

     // Example 2: Structure initialization
     cout << "\n--- Structure Initialization ---" << endl;
     Student s2 = {102, "Alice", 92.0};
     displayStudent(s2);

     // Example 3: Array of structures
     cout << "\n--- Array of Structures ---" << endl;
     Student students[3] = {
         {101, "John", 85.5},
         {102, "Alice", 92.0},
         {103, "Bob", 78.5}};

     cout << "Student Records:" << endl;
     for (int i = 0; i < 3; i++)
     {
          cout << "\nStudent " << (i + 1) << ":" << endl;
          displayStudent(students[i]);
     }

     // Example 4: Pointer to structure
     cout << "\n--- Pointer to Structure ---" << endl;
     Student *ptr = &s1;
     cout << "Using pointer:" << endl;
     cout << "Roll No: " << ptr->rollNo << endl;
     cout << "Name: " << ptr->name << endl;
     cout << "Marks: " << ptr->marks << endl;

     // Example 5: Modify structure using reference
     cout << "\n--- Modify Structure ---" << endl;
     cout << "Before: Marks = " << s1.marks << endl;
     updateMarks(s1, 95.0);
     cout << "After: Marks = " << s1.marks << endl;

     // Example 6: Nested structure
     cout << "\n--- Nested Structure ---" << endl;
     Person p1;
     p1.name = "David";
     p1.age = 25;
     p1.address.street = "123 Main St";
     p1.address.city = "New York";
     p1.address.pincode = 10001;

     cout << "Name: " << p1.name << endl;
     cout << "Age: " << p1.age << endl;
     cout << "Address: " << p1.address.street << ", "
          << p1.address.city << " - " << p1.address.pincode << endl;

     // Example 7: Structure with multiple data types
     cout << "\n--- Book Structure ---" << endl;
     Book book1 = {
         "C++ Programming",
         "Bjarne Stroustrup",
         1985,
         799.99};

     cout << "Title: " << book1.title << endl;
     cout << "Author: " << book1.author << endl;
     cout << "Year: " << book1.year << endl;
     cout << "Price: " << book1.price << endl;

     // Example 8: Structure size
     cout << "\n--- Structure Size ---" << endl;
     cout << "Size of Student structure: " << sizeof(Student) << " bytes" << endl;
     cout << "Size of Book structure: " << sizeof(Book) << " bytes" << endl;
     cout << "Size of Person structure: " << sizeof(Person) << " bytes" << endl;

     // Example 9: Using struct keyword (optional in C++)
     cout << "\n--- Direct Declaration ---" << endl;
     struct Point
     {
          int x;
          int y;
     };

     Point p = {10, 20};
     cout << "Point coordinates: (" << p.x << ", " << p.y << ")" << endl;

     return 0;
}
