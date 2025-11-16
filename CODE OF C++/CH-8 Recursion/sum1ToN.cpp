#include <iostream>
using namespace std;
int add(int n){
     if(n == 0) return 0;
     return n+add(n-1); 
}
int main(){
     int result = add(10);
     cout<<result<<endl;    
     return 0;
}