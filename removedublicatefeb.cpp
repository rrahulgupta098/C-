#include<bits/stdc++.h>
using namespace std;

int main(){
int a[]={131, 11, 48};
vector<int> v;
int n=sizeof(a)/sizeof(a[0]);
for(int i=0;i<n;i++){
    int n1=a[i];
    while(n1!=0){
    int d=n1%10;
   v.push_back(d);
    n1=n1/10;
    }
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
sort(v.begin(),v.end());
int i;
for( i=0;i<v.size();i++){
    int j=0;
    while(j<n-1 && v[i]==v[i+1]){
        i++;
    }
    cout<<v[i]<<" ";
}
}
