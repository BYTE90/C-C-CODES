#include <stdio.h>

// Example 1: Basic recursion - Countdown
void countdown(int n)
{
     if (n == 0)
     { // Base case
          printf("Blast off!\n");
          return;
     }
     printf("%d... ", n);
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
int arraySum(int arr[], int n)
{
     if (n <= 0)
          return 0;
     return arr[n - 1] + arraySum(arr, n - 1);
}

// Example 8: Print array in reverse
void printReverse(int arr[], int n)
{
     if (n == 0)
          return;
     printf("%d ", arr[n - 1]);
     printReverse(arr, n - 1);
}

// Example 9: Check if array is sorted
int isSorted(int arr[], int n)
{
     if (n == 1)
          return 1;
     if (arr[n - 1] < arr[n - 2])
          return 0;
     return isSorted(arr, n - 1);
}

// Example 10: Binary search
int binarySearch(int arr[], int left, int right, int target)
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
          printf("Move disk 1 from %c to %c\n", from, to);
          return;
     }
     towerOfHanoi(n - 1, from, aux, to);
     printf("Move disk %d from %c to %c\n", n, from, to);
     towerOfHanoi(n - 1, aux, to, from);
}

int main()
{
     printf("=== Recursion Examples ===\n\n");

     // Test 1: Countdown
     printf("--- Countdown ---\n");
     countdown(5);

     // Test 2: Factorial
     printf("\n--- Factorial ---\n");
     for (int i = 1; i <= 5; i++)
     {
          printf("%d! = %d\n", i, factorial(i));
     }

     // Test 3: Fibonacci
     printf("\n--- Fibonacci Series ---\n");
     printf("First 10 Fibonacci numbers: ");
     for (int i = 0; i < 10; i++)
     {
          printf("%d ", fibonacci(i));
     }
     printf("\n");

     // Test 4: Sum of digits
     printf("\n--- Sum of Digits ---\n");
     int num = 12345;
     printf("Sum of digits of %d = %d\n", num, sumDigits(num));

     // Test 5: Power
     printf("\n--- Power Calculation ---\n");
     printf("2^10 = %d\n", power(2, 10));
     printf("5^3 = %d\n", power(5, 3));

     // Test 6: GCD
     printf("\n--- GCD ---\n");
     printf("GCD(48, 18) = %d\n", gcd(48, 18));
     printf("GCD(100, 50) = %d\n", gcd(100, 50));

     // Test 7: Array sum
     printf("\n--- Array Sum ---\n");
     int arr1[] = {1, 2, 3, 4, 5};
     printf("Array: 1 2 3 4 5\n");
     printf("Sum = %d\n", arraySum(arr1, 5));

     // Test 8: Print reverse
     printf("\n--- Print Array in Reverse ---\n");
     int arr2[] = {10, 20, 30, 40, 50};
     printf("Original: 10 20 30 40 50\n");
     printf("Reversed: ");
     printReverse(arr2, 5);
     printf("\n");

     // Test 9: Check sorted
     printf("\n--- Check if Sorted ---\n");
     int sorted[] = {1, 2, 3, 4, 5};
     int unsorted[] = {1, 3, 2, 5, 4};
     printf("Array [1,2,3,4,5] is %s\n", isSorted(sorted, 5) ? "sorted" : "not sorted");
     printf("Array [1,3,2,5,4] is %s\n", isSorted(unsorted, 5) ? "sorted" : "not sorted");

     // Test 10: Binary search
     printf("\n--- Binary Search ---\n");
     int arr3[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
     int target = 23;
     int result = binarySearch(arr3, 0, 9, target);
     if (result != -1)
     {
          printf("Element %d found at index %d\n", target, result);
     }
     else
     {
          printf("Element not found\n");
     }

     // Test 11: Tower of Hanoi
     printf("\n--- Tower of Hanoi ---\n");
     printf("Solving Tower of Hanoi for 3 disks:\n");
     towerOfHanoi(3, 'A', 'C', 'B');

     return 0;
}
