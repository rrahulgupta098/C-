#include<iostream>
#include<stack>
using namespace std;
void span(int a[],int n,int a1[]){
    stack<int> st;
    st.push(0);
    a1[0]=0;
    for(int i=1;i<n;i++){
        while(!st.empty() && a[st.top()]<=a[i]){
          st.pop();
        }
        if(st.empty()){
        a1[i]=i+1;
        }else{
            a1[i]=i-st.top();
        }
        st.push(i);
    }
}
void Stack(int a[],int n){
    for(int i=0;i<n;i++){
        int cnt=1;
        for(int j=i-1;j>=0;j--){
            if(a[i]>a[j]){
                cnt++;
            }
            else {
                break;
            }
        }
        cout<<cnt<<" ";
    }
}

int main(){
    // int a[] = {10, 4, 5, 90, 120, 80};
    // int n=sizeof(a)/sizeof(a[0]);
    // int a1[n]={0};
    int n;cin>>n;
    int a[n];for(int i=0;i<n;i++){cin>>a[i];}
Stack(a,n);

    return 0;
}