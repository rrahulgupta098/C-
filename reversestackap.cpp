#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
   while(!st.empty()){
cout<<st.top()<<" ";
st.pop();
   }
}

void addval(stack<int> st,stack<int> &st1){
   while(!st.empty()){
   st1.push(st.top());
   st.pop();
}
}

int main(){
//Q2. reverse stack 1 2 3 4 5 
// 5 4 3 2 1
stack<int> st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
print(st);
stack<int> st1;
addval(st,st1);
//print(st1);
stack<int> st2;
addval(st1,st2);
print(st2);
// stack<int> st1;
// while(!st.empty()){
//    st1.push(st.top());
//    st.pop();
// }
// print(st1);
// stack<int> st2;
// while(!st1.empty()){
//    st2.push(st1.top());
//    st1.pop();
// }
// print(st2);




   return 0;
}