#include<iostream>
#include<stack>
using namespace std;
// bool stacks(string str){
//     stack<char> st;
//     for(int i=0;i<str.length();i++){
//      if(str[i]=='('){
//         st.push(str[i]);  
//      }else if(str[i]==')'){
//         if(!st.empty() && st.top()!='('){   
//       //doubt //  if ( st.top()!='(' && !st.empty()){
//             return false;
//         }else if(st.empty()){
//             return false;
//         }else{
//             st.pop();
//         }
//      }else{
//         //i++;
//      }
//     }
//    if(st.empty()){
//     return true;
// }else{
// return false;
// }

// }

bool stacks(string str){
    stack<char> st;
    for(int i=0;i<str.length();i++){
     if(str[i]==')'){
        while(!st.empty() && st.top()!='('){
            st.pop();
        }
        if(!st.empty()){st.pop();}else{return false;}
        
     }else{
        st.push(str[i]);
        }
     }
if(st.empty()){
    return true;
}else{
    return false;
}

    }
    



int main()
{
// 2
// (((a+(b))+(c+d)))

// ((a+(b))+(c+d))
string str="()";
cout<<stacks(str);
   // int t;cin>>t;
    // while (t--)
    // {
    //    string s;cin>>s;
    // cout<<stacks(s);
    // }
    return 0;
}