#include<iostream>
#include<stack>
using namespace std;
int main(){
// string str="hey, how are you.";
// stack<string> st;
// //cout<<str.size();
// string str1="";
// for(int i=0;i<str.size();i++){
//     string str1="";
//     while(str[i]!=' ' && i<str.size()){
//     str1=str1+str[i];
//     i++;
//     }
//     cout<<str1<<" ";
// st.push(str1);
// }

//ap1
// while(i<str.size()){
//     str1=str1+str[i];
//     i++;
//     if(str[i]==' '){
//         cout<<str1<<" ";
//         st.push(str1);
//         str1="";
//     }   
// }
//cout<<st.top();


//Q2. reverse stack 1 2 3 4 5 
// 5 4 3 2 1
stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
stack<int> st1;
//cout<<st.size();
for(int i=0;i<st.size();i++){
    int ele=st.top();
    st1.push(ele);
cout<<st1.top();
    st.pop();
}

   return 0;
}