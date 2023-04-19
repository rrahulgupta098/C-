#include<iostream>
#include<stack>
#include<algorithm>
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


int main(){
	int n;cin>>n;
    vector<int> a;
    for(int i=0 ; i<n ; i++)
    {
		int a1;
        cin>>a1;
        a.push_back(a1);
    }
    vector<int> temp=nextGreater(a,n);
    //reverse(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
        return 0;
}


