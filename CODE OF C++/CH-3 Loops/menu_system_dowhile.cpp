#include <iostream>
using namespace std;

int main()
{
     cout << "=== Do-While Loop - Menu System ===" << endl
          << endl;

     int choice;

     do
     {
          cout << "\n--- Menu ---" << endl;
          cout << "1. Print Hello" << endl;
          cout << "2. Print World" << endl;
          cout << "3. Print C++ Programming" << endl;
          cout << "4. Exit" << endl;
          cout << "Enter your choice: ";
          cin >> choice;

          switch (choice)
          {
          case 1:
               cout << "\nHello!" << endl;
               break;
          case 2:
               cout << "\nWorld!" << endl;
               break;
          case 3:
               cout << "\nC++ Programming!" << endl;
               break;
          case 4:
               cout << "\nExiting..." << endl;
               break;
          default:
               cout << "\nInvalid choice!" << endl;
          }
     } while (choice != 4);

     return 0;
}
