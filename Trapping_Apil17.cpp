#include<iostream>
#include<math.h>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
int rain_water(vector<int> a,int n){
stack<int> st;
int ans=0;
for(int i=0;i<n;i++){
while(!st.empty() && a[st.top()]<a[i]){
   int cur=st.top();
    st.pop();
    if(st.empty()){
        break;
    }
    int diff=i-st.top()-1;
    ans+=min(a[st.top()],a[i])-a[cur];
}
st.push(i); }
return ans;
}

int main(){
vector<int> a={2 ,5 ,3 ,7 ,1 ,5 ,2 ,6 ,3 ,1};
int n=a.size();
int sum=5;
int i=0;int j=n-1;
while(i<j){
    if(a[i]+a[j]==sum){
        cout<<i<<" "<<j;
        }
        i++;j--;
}
//cout<<"Hello";
//cout<<rain_water(a,n);




    return 0;
}