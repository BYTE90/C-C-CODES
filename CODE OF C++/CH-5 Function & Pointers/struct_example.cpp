#include <iostream>
#include <string>
using namespace std;

struct Student
{
     string name;
     int roll;
     float marks;
};

int main()
{
     cout << "=== Structure Example ===" << endl
          << endl;

     Student s1;

     cout << "Enter student name: ";
     cin >> s1.name;
     cout << "Enter roll number: ";
     cin >> s1.roll;
     cout << "Enter marks: ";
     cin >> s1.marks;

     cout << "\n--- Student Details ---" << endl;
     cout << "Name: " << s1.name << endl;
     cout << "Roll: " << s1.roll << endl;
     cout << "Marks: " << s1.marks << endl;

     return 0;
}
