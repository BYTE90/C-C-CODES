#include <iostream>
using namespace std;

int main()
{
     cout << "=== Pointer Basics ===" << endl
          << endl;

     // Example 1: Basic pointer declaration and initialization
     cout << "--- Basic Pointer Usage ---" << endl;
     int num = 10;
     int *ptr = &num;

     cout << "Value of num: " << num << endl;
     cout << "Address of num: " << &num << endl;
     cout << "Value of ptr (address it holds): " << ptr << endl;
     cout << "Value at ptr (dereferencing): " << *ptr << endl;

     // Example 2: Modifying value through pointer
     cout << "\n--- Modifying Value Through Pointer ---" << endl;
     cout << "Before: num = " << num << endl;
     *ptr = 20;
     cout << "After *ptr = 20: num = " << num << endl;

     // Example 3: Pointer arithmetic
     cout << "\n--- Pointer Arithmetic ---" << endl;
     int arr[] = {10, 20, 30, 40, 50};
     int *p = arr; // Points to first element

     cout << "Array elements using pointer:" << endl;
     for (int i = 0; i < 5; i++)
     {
          cout << "arr[" << i << "] = " << arr[i]
               << ", *(p+" << i << ") = " << *(p + i)
               << ", Address: " << (p + i) << endl;
     }

     // Example 4: Pointer to pointer
     cout << "\n--- Pointer to Pointer ---" << endl;
     int value = 100;
     int *ptr1 = &value;
     int **ptr2 = &ptr1;

     cout << "Value: " << value << endl;
     cout << "*ptr1: " << *ptr1 << endl;
     cout << "**ptr2: " << **ptr2 << endl;
     cout << "Address of value: " << &value << endl;
     cout << "ptr1 holds: " << ptr1 << endl;
     cout << "ptr2 holds: " << ptr2 << endl;

     // Example 5: NULL pointer
     cout << "\n--- NULL Pointer ---" << endl;
     int *nullPtr = nullptr; // C++11 style
     cout << "nullPtr = " << nullPtr << endl;
     if (nullPtr == nullptr)
     {
          cout << "Pointer is NULL - safe to check before dereferencing" << endl;
     }

     // Example 6: Pointer size
     cout << "\n--- Pointer Size ---" << endl;
     cout << "Size of int: " << sizeof(int) << " bytes" << endl;
     cout << "Size of int*: " << sizeof(int *) << " bytes" << endl;
     cout << "Size of char*: " << sizeof(char *) << " bytes" << endl;
     cout << "Size of double*: " << sizeof(double *) << " bytes" << endl;

     // Example 7: Array and pointer relationship
     cout << "\n--- Array and Pointer Relationship ---" << endl;
     int numbers[] = {1, 2, 3, 4, 5};
     cout << "Array name as pointer: " << numbers << endl;
     cout << "Address of first element: " << &numbers[0] << endl;
     cout << "Both are same!" << endl;

     // Example 8: Pointer comparison
     cout << "\n--- Pointer Comparison ---" << endl;
     int a = 10, b = 20;
     int *ptrA = &a;
     int *ptrB = &b;
     int *ptrA2 = &a;

     if (ptrA == ptrA2)
     {
          cout << "ptrA and ptrA2 point to same address" << endl;
     }
     if (ptrA != ptrB)
     {
          cout << "ptrA and ptrB point to different addresses" << endl;
     }

     return 0;
}
