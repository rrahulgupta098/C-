#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int prefixevaluate(string str){
stack<int> st;
    
    //for(int i=str.length()-1;i>=0;i--){
        for(int i=0;i<str.length();i++){
        //cout<<str[i];
        if(str[i]>='0' && str[i]<='9'){
            st.push(str[i]-'0');
        }else{
          int op1=st.top();st.pop();
          int op2=st.top();st.pop();
          switch (str[i])
          {
          case '+':
          {
            int val=op1+op2;
            st.push(val);
            break;
          } 
          case '-':
            {
            int val=op1-op2;
            st.push(val);
            break;
            } 

           case '*':
            {
                int  val=op1*op2;
            st.push(val);
            break;
            }
            case '/':
             {
              int  val=op1/op2;
            st.push(val);
            break;
             }
          }
     }
    }
    return st.top();
}

int postfixevaluate(string str){
    stack<int> st;
    for(int i=0;i<str.length();i++){
     if(str[i]>='0' && str[i]<='9'){
        st.push(str[i]-'0');
     }else{
      int op1=st.top();st.pop();
      int op2=st.top();st.pop();
      switch (str[i])
      {
      case '+':
      {
       int val=op1+op2;
       st.push(val);
       break;  
      }
       case '-':
      {
       int val=op1-op2;
       st.push(val);
       break;  
      }
      case '*':
      {
       int val=op1*op2;
       st.push(val);
       break;  
      }
    case '/':
      {
       int val=op1+op2;
       st.push(val);
       break;  
      }
      }
     }
    }
    return st.top();
}
int main(){
    //string str="-+7*45+20";
    string str="42*3+";
    cout<<postfixevaluate(str);
    return 0;
}