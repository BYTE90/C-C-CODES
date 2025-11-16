#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
     cout << "=== String Basics ===" << endl
          << endl;

     // Example 1: String declaration and initialization
     cout << "--- String Declaration ---" << endl;
     string str1 = "Hello";
     string str2("World");
     string str3(5, 'A'); // "AAAAA"

     cout << "str1: " << str1 << endl;
     cout << "str2: " << str2 << endl;
     cout << "str3: " << str3 << endl;

     // Example 2: String input/output
     cout << "\n--- String I/O ---" << endl;
     string name = "John Doe";
     cout << "Name: " << name << endl;
     cout << "First character: " << name[0] << endl;
     cout << "Character at index 5: " << name.at(5) << endl;

     // Example 3: String length
     cout << "\n--- String Length ---" << endl;
     string text = "Programming";
     cout << "String: " << text << endl;
     cout << "Length: " << text.length() << endl;
     cout << "Size: " << text.size() << endl;
     cout << "Is empty: " << (text.empty() ? "Yes" : "No") << endl;

     // Example 4: String concatenation
     cout << "\n--- String Concatenation ---" << endl;
     string str_a = "Hello ";
     string str_b = "World";
     string result = str_a + str_b;
     cout << "str_a + str_b = " << result << endl;

     str_a += "C++";
     cout << "After +=: " << str_a << endl;

     // Example 5: String comparison
     cout << "\n--- String Comparison ---" << endl;
     string s1 = "Apple";
     string s2 = "Apple";
     string s3 = "Banana";

     cout << "s1: " << s1 << ", s2: " << s2 << endl;
     cout << "s1 == s2: " << (s1 == s2 ? "true" : "false") << endl;
     cout << "s1 < s3: " << (s1 < s3 ? "true" : "false") << endl;

     // Example 6: String methods
     cout << "\n--- String Methods ---" << endl;
     string demo = "Hello World";
     cout << "Original: " << demo << endl;
     cout << "Substring(0, 5): " << demo.substr(0, 5) << endl;
     cout << "Find 'World': " << demo.find("World") << endl;

     // Example 7: String modification
     cout << "\n--- String Modification ---" << endl;
     string modify = "Programming";
     cout << "Original: " << modify << endl;

     modify.insert(0, "C++ ");
     cout << "After insert: " << modify << endl;

     modify.erase(0, 4);
     cout << "After erase: " << modify << endl;

     modify.replace(0, 4, "Code");
     cout << "After replace: " << modify << endl;

     // Example 8: Character counting
     cout << "\n--- Character Counting ---" << endl;
     string sentence = "Hello World";
     int vowels = 0, consonants = 0, spaces = 0;

     for (char ch : sentence)
     {
          if (ch == ' ')
          {
               spaces++;
          }
          else if (isalpha(ch))
          {
               ch = tolower(ch);
               if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
               {
                    vowels++;
               }
               else
               {
                    consonants++;
               }
          }
     }

     cout << "String: " << sentence << endl;
     cout << "Vowels: " << vowels << ", Consonants: " << consonants
          << ", Spaces: " << spaces << endl;

     // Example 9: Reverse string
     cout << "\n--- Reverse String ---" << endl;
     string original = "Programming";
     cout << "Original: " << original << endl;
     reverse(original.begin(), original.end());
     cout << "Reversed: " << original << endl;

     // Example 10: Palindrome check
     cout << "\n--- Palindrome Check ---" << endl;
     string word = "madam";
     string rev = word;
     reverse(rev.begin(), rev.end());

     cout << "Word: " << word << endl;
     cout << (word == rev ? "Is a palindrome" : "Not a palindrome") << endl;

     // Example 11: Convert case
     cout << "\n--- Case Conversion ---" << endl;
     string mixed = "Hello World";
     cout << "Original: " << mixed << endl;

     transform(mixed.begin(), mixed.end(), mixed.begin(), ::toupper);
     cout << "Uppercase: " << mixed << endl;

     transform(mixed.begin(), mixed.end(), mixed.begin(), ::tolower);
     cout << "Lowercase: " << mixed << endl;

     // Example 12: String to number
     cout << "\n--- String to Number ---" << endl;
     string numStr = "12345";
     int num = stoi(numStr);
     cout << "String: " << numStr << ", Number: " << num << endl;
     cout << "Number * 2 = " << (num * 2) << endl;

     return 0;
}
