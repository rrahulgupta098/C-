#include<iostream>
#include<math.h>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
vector<int> nextGreater(vector<int> a,int n){
    vector<int> a1;
    stack<int> st; 
    for(int i=n-1;i>=0;i--){
if(st.empty()){
    a1.push_back(-1);//cout<<"-1"<<" ";
    st.push(a[i]);
}else if(st.top()<=a[i]){
while(!st.empty() && st.top()<=a[i]){
    st.pop();
}
if(st.empty()){
    a1.push_back(-1);//cout<<"-1"<<" ";
    st.push(a[i]);
}else{
    a1.push_back(st.top());//cout<<st.top()<<" ";
    st.push(a[i]);
}
}else{
a1.push_back(st.top());//cout<<st.top()<<" ";
st.push(a[i]);
}
    }
    reverse(a1.begin(),a1.end());
    return a1;
}

vector<int> nextsmaller(vector<int> a,int n){
    vector<int> a1;
    stack<int> st; 
    for(int i=n-1;i>=0;i--){
if(st.empty()){
    a1.push_back(-1);//cout<<"-1"<<" ";
    st.push(a[i]);
}else if(st.top()>=a[i]){
while(!st.empty() && st.top()>=a[i]){
    st.pop();
}
if(st.empty()){
    a1.push_back(-1);//cout<<"-1"<<" ";
    st.push(a[i]);
}else{
    a1.push_back(st.top());//cout<<st.top()<<" ";
    st.push(a[i]);
}
}else{
a1.push_back(st.top());//cout<<st.top()<<" ";
st.push(a[i]);
}
    }
    reverse(a1.begin(),a1.end());
    return a1;
}
int main(){
    vector<int> a={1,2,3};
    int n=a.size();
    vector<int> temp=nextGreater(a,n);
    //reverse(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
        return 0;
}
    
 //stack<int> st;  
//  Input: N = 5, arr[] = {3, 8, 5, 2, 25}
// Output: 2 5 2 -1 -1
//next smaller
//  for(int i=n-1;i>=0;i--){
// if(st.empty()){
//     cout<<"-1"<<" ";
//     st.push(a[i]);a
// }else if(st.top()>a[i]){
// while(!st.empty() && st.top()>a[i]){
//     st.pop();
// }
// if(st.empty()){
//     cout<<"-1"<<" ";
//     st.push(a[i]);
// }else{
//     cout<<st.top()<<" ";
//     st.push(a[i]);
// }
// }else{
// cout<<st.top()<<" ";
// st.push(a[i]);
// }
//  }

    //using satck previous small
// stack<int> st;
// for(int i=0;i<n;i++){
// if(st.empty()){
//     cout<<"-1"<<" ";
//     st.push(a[i]);
// }else if(st.top()>a[i]){
   //    while(!st.empty() && st.top()>a[i]){
//         st.pop(); 
//     }
//     if(st.empty()){
// cout<<"-1 ";
// st.push(a[i]);
//     }else{
// cout<<st.top()<<" ";
//     st.push(a[i]);
//     }
// }else{
//     cout<<st.top()<<" ";
//     st.push(a[i]);
// }
// }
//print(st);

    //Next smaller
    // int a1[n];
    // a1[n-1]=-1;
    // for( int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(a[j]<a[i]){
    //            a1[i]=a[j];
    //            break;
    //         }
    //     if(j==n-1){
    //         a1[i]=-1; 
    //     }
    //     }
        
    // }

    // for(int i=0;i<n;i++){
    //     cout<<a1[i]<<" ";
    // }

    //previous smaller brute force
    //int a1[n]={0};
    //a1[0]=-1;
    // for(int i=1;i<n;i++){
    //     for(int j=i-1;j>=0;j--){
    //         if(a[j]<a[i]){
    //             a1[i]=a[j];
    //             break;
    //         }
    //         if(j==0 && a[j]>a[i]);{
    //             a1[i]=-1;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<a1[i]<<" ";
    // }


