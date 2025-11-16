#include <iostream>
using namespace std;
void print1(int n){
     if(n==0) return;
     print1(n-1); 
     cout<<n<<endl;
}
int main(){
     print1(8);
     return 0;
}