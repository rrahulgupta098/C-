#include<bits/stdc++.h>
using namespace std;

int npow(int n,int m){
    if(m==0){
        return 1;
    }
if(m%2==0){
    return pow(n*n,m/2);
}else{
    return n*pow(n*n,(m-1)/2);
}
//    return pow(n,m-1)*n;
     
}

int npow1(int a,int b){
    int ans=1;
    while(b>0){
        if(b&1){
           ans=a*ans; 
        }
        a=a*a;
        b=b>>1;
    }
    return ans;
}

int main(){
//logn using recursion
// int n;cin>>n;
// int m;cin>>m;
//cout<<npow(n,m);

//logn bitmasking
int a;cin>>a;
int b;cin>>b;
cout<<npow1(5,3);

	return 0;
}
