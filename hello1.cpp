#include<bits/stdc++.h>
using namespace std;

void TOI(int s, int d, int h, int n){
    if(n==1){
        cout<<"move"<< n <<"from "<<s<<"to"<<d<<endl;
        return ;
    }
    
    TOI(s,h,d,n-1);
    cout<<"move "<< n <<"from "<<s<<"to"<<d<<endl;
    TOI(h,d,s,n-1);
}

int main(){
cout<<"hello";
    return 0;
}
