//#include<bits/stdc++.h>
//using namespace std;
//
//void TOI( int n, int s, int d, int h){
//    if(n==1){
//        cout<<"move"<< n <<"from "<<s<<"to"<<d<<endl;
//        return ;
//    }
//    
//    TOI(n-1,s,h,d);
//    cout<<"move"<< n <<"from "<<s<<"to"<<d<<endl;
//    TOI(n-1,h,d,s);
//}
//
//int main(){
//int n;cin>>n;
//int s=1;
//int h=3;
//int d=2;
//TOI(n,s,d,h);
//    return 0;
//}

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
int n;cin>>n;
int s=1;
int h=2;
int d=3;
TOI(s,d,h,n);
    return 0;
}
