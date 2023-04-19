#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a[]={9,9,9,9,1};
    int b[]={9,9,9,9};
    vector<int> v;
    int c=0;int n=sizeof(a)/sizeof(a[0]);int m=4;
    //cout<<n<<m;
    int i=0;int j=0;
    while(i<n && j<m){
    int sum=a[i]+b[j]+c;
    i++;j++;
     c=sum/10;
    sum=sum%10;
    v.push_back(sum);
    }
    while(i<n){
    int sum=a[i++]+c;
    c=sum/10;
    sum=sum%10;
     v.push_back(sum);
    }
        while(j<m){
    int sum=b[j++]+c;
    c=sum/10;
    sum=sum%10;
     v.push_back(sum);
    }
    if(c>0){
        v.push_back(c);
     //   cout<<"test";

    }
    for(int k=0;k<v.size();k++){
        cout<<v[k]<<" ";
    }
    
}
