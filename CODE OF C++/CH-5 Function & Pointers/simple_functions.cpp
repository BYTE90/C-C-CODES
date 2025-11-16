#include <iostream>
using namespace std;

// Simple function to add two numbers
int add(int a, int b)
{
     return a + b;
}

// Function to find maximum
int max(int a, int b)
{
     return (a > b) ? a : b;
}

// Function with no return (void)
void greet()
{
     cout << "Hello, World!" << endl;
}

int main()
{
     cout << "=== Function Examples ===" << endl
          << endl;

     int num1 = 10, num2 = 20;

     cout << "Add: " << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
     cout << "Max: max(" << num1 << ", " << num2 << ") = " << max(num1, num2) << endl;

     cout << "\nCalling greet function:" << endl;
     greet();

     return 0;
}
