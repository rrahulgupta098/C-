#include<bits\stdc++.h>
using namespace std;

// int sumofn(int n){
//     if(n==0){
//         return 0;
//     }
    
//     return sumofn(n-1)+n;
// }

// void oneton(int n){
//     if(n==0){
//         return ;
//     }
    
//     oneton(n-1);
//     cout<<n;
// }

// void reverse(int A[],int s,int e){
//     if(s>=e){
//         return ;
//     }
//     swap(A[s],A[e]);
//  reverse(A,s+1,e-1);
// }

//ap2 reverse
// void reverse(int A[],int i,int n){
//     if(i>=n/2){return ;}
//     swap(A[i],A[n-i]);
//     reverse(A,i+1,n);
// }
// bool palindrome(int i,string s,int n){
// if(i>=n/2){
//     return true;
// }

//     if(s[i]!=s[n-i-1]){
//         return false;
//     }

//   return palindrome(i+1,s,n);
// }

// int fibonacci(int n){
//     if(n==0 ){
//         return n;
//     }
// return fibonacci(n-1) + fibonacci(n-2); 
// }
vector<string> v;
void subsequence(string ip,string op){
    if(ip.size()==0){
        v.push_back(op);
        //cout<<op<<endl;
        return ;
    }
string op1=op;
string op2=op+ip[0];
ip.erase(0,1);
subsequence(ip,op2);
subsequence(ip,op1);

return ;
}

int main(){
string str="abc";
string op="";
subsequence(str,op);
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

// int n=6;
// cout<<fibonacci(n);

//     string str="nitijn";
//     int n=str.size();
 
//    cout<<palindrome(0,str,n);
    //int n=5;
    //oneton(n);
   // cout<<sumofn(n);
//    int A[]={2,3,1,5,4};
//    int n = 5;
   //reverse(A,0,n-1);
//    reverse(A,0,n-1);
//    for (int i = 0; i < n; i++)
//    {
//    cout<<A[i]<<" ";
//    }
   
 
    return 0;
}