#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 123;
    string s = to_string(x);
    cout << "to_string: " << s << "\n";

    string t = "456";
    int y = stoi(t);
    cout << "stoi: " << y << "\n";

    // Tokenize a line by spaces
    string line = "this is a test";
    istringstream iss(line);
    string token;
    cout << "Tokens:";
    while (iss >> token) cout << ' ' << token;
    cout << "\n";
    return 0;
}
