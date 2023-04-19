#include<iostream>
#include<math.h>
#include<algorithm>
#include<stack>
using namespace std;
int trapwater(int a[],int n){
int res=0;
for( int i=1;i<n-1;i++){
int left=a[i];
for(int j=0;j<i;j++){
    left=max(left,a[j]);
}
int right=a[i];
for(int k=i+1;k<n;k++){
    right=max(right,a[k]);
}
res+=min(left,right)-a[i];
}
return res;
}

int preporcess(int a[],int n){
int left[n];
    left[0]=a[0];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],a[i]);
    }
    int right[n];
    right[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],a[i]);
    }
   int res=0;

    for(int i=0;i<n;i++){
        res+=min(left[i],right[i])-a[i];
    }
    return res;

}
int usingstack(int a[],int n){
    stack<int> st;
    int ans=0;
    for(int i=0;i<n;i++){
        while(!st.empty()&& a[st.top()]<a[i]){
            st.pop();
            if(st.empty()){
                break;
            }
            int diff=i-st.top()-1;
            ans+=min(a[st.top()],a[i])-a[c];
        }
        st.push(a[i]);
    }
    return ans;
}

int main(){
    int a[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(a)/sizeof(a[0]);
cout<<usingstack(a,n);
    
    // for(int i=0;i<n;i++){
    //     cout<<left[i]<<" ";
    // }cout<<endl;
    // for(int i=n-1;i>=0;i--){
    //     cout<<right[i]<<" ";
    // }
//cout<<n;
//cout<<trapwater(a,n);
//cout<<preporcess(a,n);

    return 0;
}