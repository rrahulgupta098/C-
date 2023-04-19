#include<iostream>
using namespace std;

int main(){
int a=10;
int* ptr=&a; // ptr m a ka address store 
*ptr=20;
cout<<ptr<<" "<<*ptr;

    return 0;
}
