#include <iostream>
using namespace std;

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
void printTable(int n);
int factorial(int n);
int power(int base, int exp);
bool isEven(int n);
bool isPrime(int n);

int main()
{
     cout << "=== Function Basics ===" << endl
          << endl;

     // Example 1: Simple arithmetic functions
     cout << "--- Arithmetic Operations ---" << endl;
     int a = 10, b = 5;
     cout << a << " + " << b << " = " << add(a, b) << endl;
     cout << a << " - " << b << " = " << subtract(a, b) << endl;
     cout << a << " * " << b << " = " << multiply(a, b) << endl;
     cout << a << " / " << b << " = " << divide(a, b) << endl;

     // Example 2: Void function
     cout << "\n--- Multiplication Table ---" << endl;
     printTable(7);

     // Example 3: Factorial
     cout << "\n--- Factorial ---" << endl;
     int num = 5;
     cout << num << "! = " << factorial(num) << endl;

     // Example 4: Power function
     cout << "\n--- Power Calculation ---" << endl;
     cout << "2^8 = " << power(2, 8) << endl;

     // Example 5: Boolean functions
     cout << "\n--- Even/Odd Checker ---" << endl;
     for (int i = 1; i <= 10; i++)
     {
          cout << i << " is " << (isEven(i) ? "Even" : "Odd") << endl;
     }

     // Example 6: Prime checker
     cout << "\n--- Prime Number Checker ---" << endl;
     for (int i = 1; i <= 20; i++)
     {
          if (isPrime(i))
          {
               cout << i << " ";
          }
     }
     cout << endl;

     return 0;
}

// Function definitions
int add(int a, int b)
{
     return a + b;
}

int subtract(int a, int b)
{
     return a - b;
}

int multiply(int a, int b)
{
     return a * b;
}

float divide(int a, int b)
{
     if (b == 0)
     {
          cout << "Error: Division by zero!" << endl;
          return 0;
     }
     return (float)a / b;
}

void printTable(int n)
{
     for (int i = 1; i <= 10; i++)
     {
          cout << n << " x " << i << " = " << (n * i) << endl;
     }
}

int factorial(int n)
{
     if (n <= 1)
          return 1;
     int fact = 1;
     for (int i = 2; i <= n; i++)
     {
          fact *= i;
     }
     return fact;
}

int power(int base, int exp)
{
     int result = 1;
     for (int i = 0; i < exp; i++)
     {
          result *= base;
     }
     return result;
}

bool isEven(int n)
{
     return (n % 2 == 0);
}

bool isPrime(int n)
{
     if (n <= 1)
          return false;
     if (n == 2)
          return true;
     if (n % 2 == 0)
          return false;
     for (int i = 3; i * i <= n; i += 2)
     {
          if (n % i == 0)
               return false;
     }
     return true;
}
