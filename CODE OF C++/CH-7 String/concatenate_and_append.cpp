#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "Hello";
    string b = "World";
    string c = a + ", " + b + "!"; // concatenation
    cout << c << "\n";

    a.append(" C++");
    cout << "Appended: " << a << "\n";
    return 0;
}
