#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return ;
    }
    int store=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(store);
}

void reverse(stack<int> &st){
if(st.empty()){
    return ;
}
int ele=st.top();
st.pop();
reverse(st);
insertAtBottom(st,ele);
}
void print(stack<int> st){
 if(st.empty()){
    return ;
 }
    while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
}

int main(){
 stack<int> st;
st.push(10);
st.push(20);
st.push(30);
print(st);
reverse(st);
print(st);

// stack<int> st1;
// stack<int> st2;
// while(!st.empty()){
//     st1.push(st.top());
//     st.pop();
// }
// while(!st1.empty()){
//     st2.push(st1.top());
//     st1.pop();
// }
// while(!st2.empty()){
//     cout<<st2.top()<<" ";
//     st2.pop();
// }

   return 0;
}