#include<bits\stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    vector<int> temp={4,5,6,7};
    v.insert(end(v), begin(temp), end(temp));
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
 
    //    int A[5]={1,1,2,2,5};
    // int B[10]={0};
    // for(int i=0;i<5;i++){
    //     B[A[i]]++;
    // }
    // for(int i=0;i<10;i++){
    //     if(B[i]>0){
    //         cout<<i<<" ";
    //     }
    //    // cout<<B[i]<<" ";
    // }

    return 0;
}