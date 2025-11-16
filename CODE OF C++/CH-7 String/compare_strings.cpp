#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "apple";
    string b = "banana";
    if (a == b) cout << "Equal\n";
    else if (a < b) cout << a << " < " << b << "\n";
    else cout << a << " > " << b << "\n";
    return 0;
}
