#include <bits/stdc++.h>
#include <stack>
using namespace std;
bool balance(string str){
    stack<int> st;
for(int i=0;i<str.length();i++){
    if(str[i]=='(' || str[i]=='{' || str[i]=='['){
       st.push(str[i]);
    }else if(str[i]==')'){
        if(st.top()!='('){
            return false;
        }else if(st.empty()){
            return false;
        }else{
            st.pop();
        }
    }else if(str[i]==']'){
        if(st.top()!='['){
            return false;
        }else if(st.empty()){
            return false;
        }else{
            st.pop();
        }
    }else if(str[i]=='}'){
        if(st.top()!='{'){
            return false;
        }else if(st.empty()){
            return false;  
        }else{
            st.pop(); 
        }
    }
}
if(!st.empty()){
    return false;
}
return true;
}
int main(){
    string s=")";
    cout<<balance(s);
    return 0;
}