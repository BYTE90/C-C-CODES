#include <iostream>
using namespace std;
void print1(int n){
     if(n==0) return;
     cout<<n<<endl;
     return print1(n-1); 
}
int main(){
     print1(8);
     return 0;
}