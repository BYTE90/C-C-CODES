#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     char operation;
     float num1, num2;

     cout << "=== Simple Calculator (Switch Case) ===" << endl
          << endl;
     cout << "Enter operator (+, -, *, /): ";
     cin >> operation;
     cout << "Enter two numbers: ";
     cin >> num1 >> num2;

     cout << fixed << setprecision(2);

     switch (operation)
     {
     case '+':
          cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
          break;
     case '-':
          cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
          break;
     case '*':
          cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
          break;
     case '/':
          if (num2 != 0)
          {
               cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
          }
          else
          {
               cout << "Error: Division by zero!" << endl;
          }
          break;
     default:
          cout << "Invalid operator!" << endl;
     }

     return 0;
}
