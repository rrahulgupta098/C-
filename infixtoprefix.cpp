#include <bits/stdc++.h>
#include <stack>
using namespace std;
int prec(char c){
    if(c=='^'){
        return 3;
    }else if(c=='/' || c=='*'){
        return 2;
    }else if(c=='-' || c=='+'){
        return 1;
    }else{
        return -1;//mtlb opening bracket a gya h 
    }
}
string infixopostfix(string s){
    stack<char> st;
    string res="";
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            res=res+s[i];
        }else if(s[i]=='('){
            st.push(s[i]);
        }else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
               res=res+ st.top();
               st.pop();
            }
            if(!st.empty()){
             st.pop();
            }
        }else{
            while(!st.empty() && prec(st.top())>prec(s[i])){
                res=res+st.top();  
                st.pop();
            }
            st.push(s[i]);
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
    stack<char> st;
    string s1="";
    for(int i=s.length()-1;i>=0;i--){
       s1=s1+s[i];
    }
    cout<<s1<<endl;
    string s2="";
    for(int i=0;i<s1.length();i++){
       if(s1[i]=='('){
        s2=s2+')';
       }else if(s1[i]==')'){
        s2=s2+'(';
       }else{
        s2=s2+s1[i];
       }
    }
    cout<<s2<<endl;
    cout<<infixopostfix(s2);
    return 0;
}