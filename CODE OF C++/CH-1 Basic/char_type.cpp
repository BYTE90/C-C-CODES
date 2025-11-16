#include <iostream>
using namespace std;

int main()
{
     // Character type
     char grade = 'A';
     char initial = 'J';
     char digit = '5';
     char symbol = '@';

     cout << "=== Character Type ===" << endl
          << endl;

     cout << "Character: " << grade << endl;
     cout << "ASCII value: " << (int)grade << endl;

     cout << "\nMore characters:" << endl;
     cout << "Initial: " << initial << " (ASCII: " << (int)initial << ")" << endl;
     cout << "Digit: " << digit << " (ASCII: " << (int)digit << ")" << endl;
     cout << "Symbol: " << symbol << " (ASCII: " << (int)symbol << ")" << endl;

     cout << "\nSize of char: " << sizeof(char) << " byte" << endl;

     // Character arithmetic
     cout << "\n--- Character Arithmetic ---" << endl;
     char lower = 'a';
     char upper = lower - 32;
     cout << "Lowercase: " << lower << " -> Uppercase: " << upper << endl;

     return 0;
}
