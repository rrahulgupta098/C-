#include<iostream>
#include<stack>
using namespace std;

bool balance(string s){
stack<char> st;
for(int i=0;i<s.length();i++){
if(s[i]=='(' || s[i]=='[' ||s[i]=='{'){
    st.push(s[i]);
}else if(s[i]==')'){
    if(st.top()=='('){
     st.pop();
    }else{
        return false;
        break;
    }
}else if(s[i]==']'){
    if(st.top()==']'){
        st.pop();
    }else{
        return false;
        break;
    }
}else if(s[i]=='}'){
    if(st.top()=='}'){
        st.pop();
    }else{
        return false;
        break;
    }
}

}
if(st.empty()){
    return true;
}
}

int main(){
string s="()";
cout<<balance(s);
//balanceparentheses.cpp
    return 0;
}