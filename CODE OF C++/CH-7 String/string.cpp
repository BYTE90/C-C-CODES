#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
     string str = "Digar Singh";
    cout << "Original string: " << str << endl;

    // 1. Length/Size functions
    cout << "\n--- Length/Size Functions ---" << endl;
    cout << "Length: " << str.length() << endl;
    cout << "Size: " << str.size() << endl;
    cout << "Empty: " << str.empty() << endl;

    // 2. Access functions
    cout << "\n--- Access Functions ---" << endl;
    cout << "First character: " << str.front() << endl;
    cout << "Last character: " << str.back() << endl;
    cout << "Character at index 2: " << str.at(2) << endl;

    // 3. Substring functions
    cout << "\n--- Substring Functions ---" << endl;
    cout << "Substring from index 6: " << str.substr(6) << endl;
    cout << "Substring from index 0, length 5: " << str.substr(0, 5) << endl;

    // 4. Search functions
    cout << "\n--- Search Functions ---" << endl;
    cout << "Find 'Singh': " << str.find("Singh") << endl;
    cout << "Find 'i': " << str.find('i') << endl;
    cout << "Find last 'i': " << str.rfind('i') << endl;

    // 5. Modification functions
    cout << "\n--- Modification Functions ---" << endl;
    string str2 = str;
    str2.append(" Rajput");
    cout << "After append: " << str2 << endl;
    
    str2.insert(5, " Kumar");
    cout << "After insert: " << str2 << endl;
    
    str2.erase(5, 6);  // Remove " Kumar"
    cout << "After erase: " << str2 << endl;
    
    str2.replace(6, 5, "Patel");
    cout << "After replace: " << str2 << endl;

    // 6. Case conversion (using algorithm)
    cout << "\n--- Case Conversion ---" << endl;
    string upperStr = str;
    transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
    cout << "Uppercase: " << upperStr << endl;
    
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    cout << "Lowercase: " << lowerStr << endl;

    // 7. Reverse function
    cout << "\n--- Reverse Function ---" << endl;
    string revStr = str;
    reverse(revStr.begin(), revStr.end());
    cout << "Reversed: " << revStr << endl;

    // 8. Comparison functions
    cout << "\n--- Comparison Functions ---" << endl;
    string str3 = "Digar Singh";
    cout << "Compare with same string: " << str.compare(str3) << endl;
    cout << "Compare with 'Apple': " << str.compare("Apple") << endl;

    // 9. Clear and resize
    cout << "\n--- Clear and Resize ---" << endl;
    string str4 = "Hello";
    cout << "Before clear: " << str4 << " (size: " << str4.size() << ")" << endl;
    str4.clear();
    cout << "After clear: '" << str4 << "' (size: " << str4.size() << ")" << endl;
    
    str4 = "Test";
    str4.resize(10, 'X');
    cout << "After resize to 10 with 'X': " << str4 << endl;

    // 10. Push and pop operations
    cout << "\n--- Push/Pop Operations ---" << endl;
    string str5 = "Hello";
    str5.push_back('!');
    cout << "After push_back: " << str5 << endl;
    str5.pop_back();
    cout << "After pop_back: " << str5 << endl;


     return 0;
}