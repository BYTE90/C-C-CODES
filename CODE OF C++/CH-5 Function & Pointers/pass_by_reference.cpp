#include <iostream>
using namespace std;

// Pass by value
void passByValue(int x)
{
     cout << "Inside passByValue (before): x = " << x << endl;
     x = 100;
     cout << "Inside passByValue (after): x = " << x << endl;
}

// Pass by reference (C++ style)
void passByReference(int &x)
{
     cout << "Inside passByReference (before): x = " << x << endl;
     x = 100;
     cout << "Inside passByReference (after): x = " << x << endl;
}

// Pass by pointer (C style in C++)
void passByPointer(int *x)
{
     cout << "Inside passByPointer (before): *x = " << *x << endl;
     *x = 100;
     cout << "Inside passByPointer (after): *x = " << *x << endl;
}

// Swap using pass by value (doesn't work)
void swapByValue(int a, int b)
{
     int temp = a;
     a = b;
     b = temp;
}

// Swap using pass by reference (works)
void swapByReference(int &a, int &b)
{
     int temp = a;
     a = b;
     b = temp;
}

// Modify array elements
void modifyArray(int arr[], int size)
{
     cout << "Inside modifyArray:" << endl;
     for (int i = 0; i < size; i++)
     {
          arr[i] *= 2;
          cout << arr[i] << " ";
     }
     cout << endl;
}

// Calculate sum and product using references
void sumAndProduct(int a, int b, int &sum, int &product)
{
     sum = a + b;
     product = a * b;
}

// Get min and max
void getMinMax(int arr[], int size, int &min, int &max)
{
     min = max = arr[0];
     for (int i = 1; i < size; i++)
     {
          if (arr[i] < min)
               min = arr[i];
          if (arr[i] > max)
               max = arr[i];
     }
}

int main()
{
     cout << "=== Pass by Value vs Pass by Reference ===" << endl
          << endl;

     // Example 1: Pass by value
     cout << "--- Pass by Value ---" << endl;
     int num1 = 10;
     cout << "Before function call: num1 = " << num1 << endl;
     passByValue(num1);
     cout << "After function call: num1 = " << num1 << endl;
     cout << "(Value unchanged in main)" << endl;

     // Example 2: Pass by reference
     cout << "\n--- Pass by Reference ---" << endl;
     int num2 = 10;
     cout << "Before function call: num2 = " << num2 << endl;
     passByReference(num2);
     cout << "After function call: num2 = " << num2 << endl;
     cout << "(Value changed in main)" << endl;

     // Example 3: Pass by pointer
     cout << "\n--- Pass by Pointer ---" << endl;
     int num3 = 10;
     cout << "Before function call: num3 = " << num3 << endl;
     passByPointer(&num3);
     cout << "After function call: num3 = " << num3 << endl;
     cout << "(Value changed in main)" << endl;

     // Example 4: Swap by value (doesn't work)
     cout << "\n--- Swap by Value (Doesn't Work) ---" << endl;
     int a = 5, b = 10;
     cout << "Before swap: a = " << a << ", b = " << b << endl;
     swapByValue(a, b);
     cout << "After swap: a = " << a << ", b = " << b << endl;

     // Example 5: Swap by reference (works)
     cout << "\n--- Swap by Reference (Works) ---" << endl;
     cout << "Before swap: a = " << a << ", b = " << b << endl;
     swapByReference(a, b);
     cout << "After swap: a = " << a << ", b = " << b << endl;

     // Example 6: Modify array
     cout << "\n--- Modify Array ---" << endl;
     int arr[] = {1, 2, 3, 4, 5};
     cout << "Before: ";
     for (int i = 0; i < 5; i++)
          cout << arr[i] << " ";
     cout << endl;

     modifyArray(arr, 5);

     cout << "After: ";
     for (int i = 0; i < 5; i++)
          cout << arr[i] << " ";
     cout << endl;

     // Example 7: Multiple return values
     cout << "\n--- Multiple Return Values ---" << endl;
     int sum, product;
     sumAndProduct(5, 7, sum, product);
     cout << "Sum: " << sum << ", Product: " << product << endl;

     // Example 8: Get min and max
     cout << "\n--- Get Min and Max ---" << endl;
     int numbers[] = {45, 23, 67, 12, 89, 34};
     int min, max;
     getMinMax(numbers, 6, min, max);
     cout << "Array: ";
     for (int i = 0; i < 6; i++)
          cout << numbers[i] << " ";
     cout << "\nMin: " << min << ", Max: " << max << endl;

     return 0;
}
