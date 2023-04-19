#include<iostream>
#include<stack>
using namespace std;
bool stacks(string str){
    stack<char> st;
    for(int i=0;i<str.length();i++){
        if(str[i]==')'){
            if(st.top()=='('){
                return true;
            }else{
                while(st.top()!='('){
                    st.pop();
                }
                st.pop();
            }
        //     int cnt=0;
        //    while( st.top()!='(' ){
        //     cnt++;
        //     st.pop();
        //    }
        //    if(cnt<1){
        //     return true;
        //    }
        //    if(!st.empty()){
        //     st.pop();
        //    }else{
        //     return false;
        //    }
        }else{
           
           st.push(str[i]);
        }
    }
    // if(st.empty()){
    //     return true;
    // }else{
    //     return false;
    // }
    return false;
}
int main(){
string str=")";
cout<<stacks(str);
//    int t;cin>>t;
//     while (t--)
//     {
//        string s;cin>>s;
//     //cout<<stacks(s);
//     if(stacks(s)){
// cout<<"Duplicate"<<endl;
//     }else{
// cout<<"Not Duplicates"<<endl;
//     }
//     }
    return 0;
}