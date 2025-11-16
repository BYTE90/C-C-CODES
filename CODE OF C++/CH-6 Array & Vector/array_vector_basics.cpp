#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
     cout << "=== Array and Vector Basics ===" << endl
          << endl;

     // Array Examples
     cout << "========== ARRAYS ==========" << endl;

     // Example 1: Array declaration
     cout << "\n--- Array Declaration ---" << endl;
     int arr1[5] = {10, 20, 30, 40, 50};
     int arr2[] = {1, 2, 3, 4, 5, 6};

     cout << "arr1: ";
     for (int i = 0; i < 5; i++)
          cout << arr1[i] << " ";
     cout << "\narr2: ";
     for (int i = 0; i < 6; i++)
          cout << arr2[i] << " ";
     cout << endl;

     // Vector Examples
     cout << "\n========== VECTORS ==========" << endl;

     // Example 2: Vector declaration and initialization
     cout << "\n--- Vector Declaration ---" << endl;
     vector<int> vec1 = {10, 20, 30, 40, 50};
     vector<int> vec2(5, 100); // 5 elements, all 100
     vector<int> vec3;         // Empty vector

     cout << "vec1: ";
     for (int x : vec1)
          cout << x << " ";
     cout << "\nvec2: ";
     for (int x : vec2)
          cout << x << " ";
     cout << endl;

     // Example 3: Vector operations
     cout << "\n--- Vector Operations ---" << endl;
     vec3.push_back(5);
     vec3.push_back(10);
     vec3.push_back(15);
     cout << "After push_back: ";
     for (int x : vec3)
          cout << x << " ";
     cout << endl;

     cout << "Size: " << vec3.size() << endl;
     cout << "First element: " << vec3.front() << endl;
     cout << "Last element: " << vec3.back() << endl;

     vec3.pop_back();
     cout << "After pop_back: ";
     for (int x : vec3)
          cout << x << " ";
     cout << endl;

     // Example 4: Vector access
     cout << "\n--- Vector Access ---" << endl;
     cout << "vec1[2] = " << vec1[2] << endl;
     cout << "vec1.at(3) = " << vec1.at(3) << endl;

     // Example 5: Vector iteration
     cout << "\n--- Vector Iteration ---" << endl;
     cout << "Using range-based for: ";
     for (int x : vec1)
          cout << x << " ";
     cout << "\nUsing iterator: ";
     for (auto it = vec1.begin(); it != vec1.end(); it++)
     {
          cout << *it << " ";
     }
     cout << endl;

     // Example 6: Vector algorithms
     cout << "\n--- Vector Algorithms ---" << endl;
     vector<int> nums = {45, 23, 67, 12, 89, 34};
     cout << "Original: ";
     for (int x : nums)
          cout << x << " ";

     sort(nums.begin(), nums.end());
     cout << "\nSorted: ";
     for (int x : nums)
          cout << x << " ";

     reverse(nums.begin(), nums.end());
     cout << "\nReversed: ";
     for (int x : nums)
          cout << x << " ";
     cout << endl;

     // Example 7: Find in vector
     cout << "\n--- Find in Vector ---" << endl;
     auto it = find(nums.begin(), nums.end(), 67);
     if (it != nums.end())
     {
          cout << "Found 67 at index " << (it - nums.begin()) << endl;
     }

     // Example 8: Vector of vectors (2D)
     cout << "\n--- 2D Vector ---" << endl;
     vector<vector<int>> matrix = {
         {1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}};

     cout << "Matrix:" << endl;
     for (auto row : matrix)
     {
          for (int val : row)
          {
               cout << val << " ";
          }
          cout << endl;
     }

     // Example 9: Vector comparison with array
     cout << "\n--- Vector vs Array ---" << endl;
     cout << "Array size is fixed, Vector size is dynamic" << endl;
     vector<int> dynamic;
     cout << "Empty vector size: " << dynamic.size() << endl;
     for (int i = 1; i <= 5; i++)
     {
          dynamic.push_back(i * 10);
     }
     cout << "After adding elements: " << dynamic.size() << endl;
     cout << "Elements: ";
     for (int x : dynamic)
          cout << x << " ";
     cout << endl;

     return 0;
}
