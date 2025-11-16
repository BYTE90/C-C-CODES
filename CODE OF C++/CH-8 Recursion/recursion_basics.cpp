#include <iostream>
#include <vector>
using namespace std;

// Example 1: Basic recursion - Countdown
void countdown(int n)
{
     if (n == 0)
     { // Base case
          cout << "Blast off!" << endl;
          return;
     }
     cout << n << "... ";
     countdown(n - 1); // Recursive call
}

// Example 2: Factorial
int factorial(int n)
{
     if (n <= 1)
          return 1;               // Base case
     return n * factorial(n - 1); // Recursive call
}

// Example 3: Fibonacci
int fibonacci(int n)
{
     if (n <= 1)
          return n; // Base cases
     return fibonacci(n - 1) + fibonacci(n - 2);
}

// Example 4: Sum of digits
int sumDigits(int n)
{
     if (n == 0)
          return 0;
     return (n % 10) + sumDigits(n / 10);
}

// Example 5: Power calculation
int power(int base, int exp)
{
     if (exp == 0)
          return 1;
     return base * power(base, exp - 1);
}

// Example 6: GCD (Greatest Common Divisor)
int gcd(int a, int b)
{
     if (b == 0)
          return a;
     return gcd(b, a % b);
}

// Example 7: Sum of array elements
int arraySum(vector<int> &arr, int n)
{
     if (n <= 0)
          return 0;
     return arr[n - 1] + arraySum(arr, n - 1);
}

// Example 8: Print array in reverse
void printReverse(vector<int> &arr, int n)
{
     if (n == 0)
          return;
     cout << arr[n - 1] << " ";
     printReverse(arr, n - 1);
}

// Example 9: Check if array is sorted
bool isSorted(vector<int> &arr, int n)
{
     if (n == 1)
          return true;
     if (arr[n - 1] < arr[n - 2])
          return false;
     return isSorted(arr, n - 1);
}

// Example 10: Binary search
int binarySearch(vector<int> &arr, int left, int right, int target)
{
     if (left > right)
          return -1;

     int mid = left + (right - left) / 2;

     if (arr[mid] == target)
          return mid;
     if (arr[mid] > target)
          return binarySearch(arr, left, mid - 1, target);
     return binarySearch(arr, mid + 1, right, target);
}

// Example 11: Tower of Hanoi
void towerOfHanoi(int n, char from, char to, char aux)
{
     if (n == 1)
     {
          cout << "Move disk 1 from " << from << " to " << to << endl;
          return;
     }
     towerOfHanoi(n - 1, from, aux, to);
     cout << "Move disk " << n << " from " << from << " to " << to << endl;
     towerOfHanoi(n - 1, aux, to, from);
}

// Example 12: String reverse
string reverseString(string str)
{
     if (str.length() <= 1)
          return str;
     return reverseString(str.substr(1)) + str[0];
}

int main()
{
     cout << "=== Recursion Examples ===" << endl
          << endl;

     // Test 1: Countdown
     cout << "--- Countdown ---" << endl;
     countdown(5);

     // Test 2: Factorial
     cout << "\n--- Factorial ---" << endl;
     for (int i = 1; i <= 5; i++)
     {
          cout << i << "! = " << factorial(i) << endl;
     }

     // Test 3: Fibonacci
     cout << "\n--- Fibonacci Series ---" << endl;
     cout << "First 10 Fibonacci numbers: ";
     for (int i = 0; i < 10; i++)
     {
          cout << fibonacci(i) << " ";
     }
     cout << endl;

     // Test 4: Sum of digits
     cout << "\n--- Sum of Digits ---" << endl;
     int num = 12345;
     cout << "Sum of digits of " << num << " = " << sumDigits(num) << endl;

     // Test 5: Power
     cout << "\n--- Power Calculation ---" << endl;
     cout << "2^10 = " << power(2, 10) << endl;
     cout << "5^3 = " << power(5, 3) << endl;

     // Test 6: GCD
     cout << "\n--- GCD ---" << endl;
     cout << "GCD(48, 18) = " << gcd(48, 18) << endl;
     cout << "GCD(100, 50) = " << gcd(100, 50) << endl;

     // Test 7: Array sum
     cout << "\n--- Array Sum ---" << endl;
     vector<int> arr1 = {1, 2, 3, 4, 5};
     cout << "Array: 1 2 3 4 5" << endl;
     cout << "Sum = " << arraySum(arr1, arr1.size()) << endl;

     // Test 8: Print reverse
     cout << "\n--- Print Array in Reverse ---" << endl;
     vector<int> arr2 = {10, 20, 30, 40, 50};
     cout << "Original: 10 20 30 40 50" << endl;
     cout << "Reversed: ";
     printReverse(arr2, arr2.size());
     cout << endl;

     // Test 9: Check sorted
     cout << "\n--- Check if Sorted ---" << endl;
     vector<int> sorted = {1, 2, 3, 4, 5};
     vector<int> unsorted = {1, 3, 2, 5, 4};
     cout << "Array [1,2,3,4,5] is " << (isSorted(sorted, sorted.size()) ? "sorted" : "not sorted") << endl;
     cout << "Array [1,3,2,5,4] is " << (isSorted(unsorted, unsorted.size()) ? "sorted" : "not sorted") << endl;

     // Test 10: Binary search
     cout << "\n--- Binary Search ---" << endl;
     vector<int> arr3 = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
     int target = 23;
     int result = binarySearch(arr3, 0, arr3.size() - 1, target);
     if (result != -1)
     {
          cout << "Element " << target << " found at index " << result << endl;
     }
     else
     {
          cout << "Element not found" << endl;
     }

     // Test 11: Tower of Hanoi
     cout << "\n--- Tower of Hanoi ---" << endl;
     cout << "Solving Tower of Hanoi for 3 disks:" << endl;
     towerOfHanoi(3, 'A', 'C', 'B');

     // Test 12: String reverse
     cout << "\n--- String Reverse ---" << endl;
     string str = "Programming";
     cout << "Original: " << str << endl;
     cout << "Reversed: " << reverseString(str) << endl;

     return 0;
}
