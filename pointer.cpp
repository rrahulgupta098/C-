#include<iostream>
using namespace std;

int main(){
int a=10;
int* ptr=&a; // ptr m a ka address store 
//*ptr=20; // new value in pointer
//cout<<&a<<" "<<ptr<<endl;

//cout<<*ptr;
int A[3]={10,20,30};
int* p = A;
cout<<*p;
cout<<*(++p);
p++;
cout<<*p;
//ptr++;
//cout<<ptr<<" "<<*ptr<<endl;

//pointer arithematic

//char ch='b';
//char *cptr=&ch;
//cout<<cptr;
//cptr++;
//cout<<"jgj";
//cout<<*cptr<<"klk";
//cout<<"jgj";

    return 0;
}
