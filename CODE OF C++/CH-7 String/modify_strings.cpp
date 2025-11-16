#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "HelloWorld";
    s.insert(5, " ");
    cout << "Inserted: " << s << "\n";
    s.erase(5,1);
    cout << "Erased: " << s << "\n";
    s.replace(5,5," C++");
    cout << "Replaced: " << s << "\n";
    return 0;
}
