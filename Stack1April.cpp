#include<iostream>
using namespace std;
#define n 100
class stack{
int *a;
int top;
public:
stack(){
a=new int[n];
top=-1;
}

void push(int val){
if(top==n-1){
cout<<"full";
}
top++;
a[top]=val;
}

void pop(){
if(top==-1){
cout<<"empty";
}
top--;
}
void Top(){
if(top==-1){cout<<"empty";return;}
cout<<a[top];
}
bool isempty(){
if(top==-1) {return true;}
return false;
}
};
int main(){
    stack st;
    cout<<"push=";st.push(10);cout<<endl;
    cout<<"Top=";st.Top();cout<<endl;
    cout<<"pop=";st.pop();cout<<endl;
    cout<<"Top=";st.Top();cout<<endl;
    cout<<st.isempty();
    return 0;
}