#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    string s = "hello";
    // C-string
    const char* c = s.c_str();
    printf("C-string: %s\n", c);

    // simple formatting
    char buf[100];
    int n = 42;
    sprintf(buf, "Value=%d", n);
    cout << "Formatted: " << buf << "\n";
    return 0;
}
