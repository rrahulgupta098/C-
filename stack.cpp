#include <bits/stdc++.h>
using namespace std;
bool isbalanced(string &str){

stack<int> st;
    int n=str.size();
for(int i=0;i<n;i++){
    if(str[i]=='(' || str[i]=='{' || str[i]=='['){
        st.push(str[i]);
    }
    else if(str[i]==')'){
           if(!st.empty() && st.top()=='('){
            st.pop();
           }else{
            return false;
           }
    }

        else if(str[i]==']'){
           if(!st.empty() && st.top()=='['){
            st.pop();
           }else{
            return false;
           }
    }
    
        else if(str[i]=='}'){
           if(!st.empty() && st.top()=='{'){
            st.pop();
           }else{
            return false;
           }
    }

}
return st.empty();
}
int main(){
    string str;cin>>str;
    //string str="[a+{b+(c+d)+e}+f]";
   int i=isbalanced(str);

if(i){
    cout<<"true";
}    else{
    cout<<"false";
}
    // st.push(10);
    // st.push(20);
   // cout<<st.top();
    // while(!st.empty()){

    // cout<<(char)st.top()<<" ";
    // st.pop();
    // }


    return 0;
   
}