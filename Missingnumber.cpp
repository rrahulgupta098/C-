#include<iostream>
#include<vector>
using namespace std;

int main(){
// int a[5]={0};
// for( int i=0;i<5;i++){
//     cout<<a[i];
// }
// cout<<endl;
int n=5;
int array[n]={1,2,3,5};
int sum=(n*(n+1))/2;
cout<<sum;
int actualsum=0;
for(int i=0;i<n-1;i++){
actualsum=actualsum+array[i];    
}
cout<<sum-actualsum;
// cout<<miss(arr,5);
// for(int i=0;i<5;i++){
//     a[arr[i]]=arr[i];
// }

// for( int i=1;i<=5;i++){
//    // cout<<a[i];
//     if(a[i]==0){
//         cout<<i;
//         return 0;
//     }
// }




    return 0;
}