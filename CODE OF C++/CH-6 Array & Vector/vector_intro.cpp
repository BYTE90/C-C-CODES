#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
     cout << "=== Vector Introduction ===" << endl
          << endl;

     // Create and initialize vector
     vector<int> vec = {10, 20, 30, 40, 50};

     cout << "Vector elements: ";
     for (int x : vec)
     {
          cout << x << " ";
     }
     cout << endl;

     // Add elements
     vec.push_back(60);
     vec.push_back(70);
     cout << "\nAfter push_back(60, 70): ";
     for (int x : vec)
     {
          cout << x << " ";
     }
     cout << endl;

     // Size
     cout << "Size: " << vec.size() << endl;

     // Access elements
     cout << "First element: " << vec.front() << endl;
     cout << "Last element: " << vec.back() << endl;
     cout << "Element at index 2: " << vec[2] << endl;

     // Remove last element
     vec.pop_back();
     cout << "\nAfter pop_back(): ";
     for (int x : vec)
     {
          cout << x << " ";
     }
     cout << endl;

     return 0;
}
