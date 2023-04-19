#include <iostream>
#include <vector>
using namespace std;
vector<int> dp(10,-1);
int fib(int n){
    if(n==0 ||n==1){
        return dp[n]=n;
    }
if(dp[n]!=-1){
    return dp[n];
}
    return dp[n]=fib(n - 1) + fib(n - 2);
    
}







// int fib(int n){
//     if(n==0 ||n==1){
//         return n;
//     }

//     return fib(n - 1) + fib(n - 2);
    
// }
int main(){
 // cout<<fib(5);
 int n=5;
 int Fib[5];
  Fib[0]=0; Fib[1]=1;
 for(int i=0;i<n;i++){
    Fib[i]=Fib[i-1]+Fib[i-2];
 }
cout<< Fib[n];
    return 0;
}