#include<bits/stdc++.h>
using namespace std;
bool isorted(int A[],int n){
for(int i=0;i<n-1;i++){
    if(A[i]+1 !=A[i+1]){
     return false;
     //break;
    }
}
return true;
}

int main(){
    int A[5]={1,2,4,5};
    cout<<isorted(A,5);
return 0;
}

