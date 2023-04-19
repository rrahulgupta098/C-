#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void swap1(int &a, int &b){
	a=a+b;
	b=a-b;
	a=a-b;
}
int main() {
int a=10,b=20;
////swap1(a,b);
//cout<<a<<" "<<b;

a=a^b;//10^20
b=a^b;//10^20^20=10
a=a^b;//10^20^10=20
//cout<<a<<" "<<b;

return 0;
}

