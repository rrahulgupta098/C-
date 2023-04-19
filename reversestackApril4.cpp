#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int ele){
    if(s.empty()){
        s.push(ele);
        return ;
    }
    int store=s.top();
s.pop();
insertatbottom(s,ele);
s.push(store);
}

void reverse(stack<int> &s){
if(s.empty()){
    return ;
}
int ele=s.top();
s.pop();
reverse(s);
insertatbottom(s,ele);
}


void print(stack<int> s){
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
}

int main(){
    stack<int> s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);
    reverse(s);
    print(s);
    return 0;
}