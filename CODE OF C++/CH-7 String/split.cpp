#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

int main(){
     string str = "Digar Singh";
     cout << "Original string: " << str << endl;

     string temp;
     stringstream ss(str); 
     
     while (ss >> temp){
          cout << temp << endl;
     }

     return 0;
}