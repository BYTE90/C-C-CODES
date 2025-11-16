#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "one two three two";
    size_t pos = s.find("two");
    if (pos != string::npos) cout << "Found 'two' at " << pos << "\n";

    string sub = s.substr(4, 3);
    cout << "Substring: '" << sub << "'\n";
    return 0;
}
