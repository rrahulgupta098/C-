#include <bits/stdc++.h>
#include <stack>
using namespace std;
int prece(char c){
if(c=='*' || c=='/'){
    return 2;
}else if(c=='+' || c=='-'){
    return 1;
}else{
    return -1;
}
}
string infictopostfix(string str){
stack<char> st;
string res="";
for(int i=0;i<str.length();i++){
    if(str[i]>='a' && str[i]<='z'){
      res=res+str[i];
    }else if(str[i]=='('){
        st.push(str[i]);
    }else if(str[i]==')'){
     while(!st.empty() && st.top()!='('){
        res=res+st.top();
        st.pop();
     }
     if(!st.empty()){
        st.pop();
     }
    }else {
       while(!st.empty() && prece(st.top())>prece(str[i])){
       res=res+st.top();
       st.pop();
       
       }
       st.push(str[i]);
    }
}
    while(!st.empty()){
        res=res+st.top();
        st.pop();
    }

return res;
}
int main(){
    string s="(a-b/c)*(a/k-l)";
    cout<<infictopostfix(s);
    return 0; 
    
}