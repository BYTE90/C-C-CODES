#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     cout << "=== Array Operations ===" << endl
          << endl;

     int arr[] = {10, 20, 30, 40, 50};
     int size = 5;

     // Display array
     cout << "Array: ";
     for (int i = 0; i < size; i++)
     {
          cout << arr[i] << " ";
     }
     cout << endl;

     // Sum
     int sum = 0;
     for (int i = 0; i < size; i++)
     {
          sum += arr[i];
     }
     cout << "Sum: " << sum << endl;

     // Average
     cout << fixed << setprecision(2);
     cout << "Average: " << (sum / (float)size) << endl;

     // Max and Min
     int max = arr[0], min = arr[0];
     for (int i = 1; i < size; i++)
     {
          if (arr[i] > max)
               max = arr[i];
          if (arr[i] < min)
               min = arr[i];
     }
     cout << "Max: " << max << ", Min: " << min << endl;

     return 0;
}
