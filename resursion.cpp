#include <bits/stdc++.h>
using namespace std;
int fib(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	
	int res = fib(n-1)+fib(n-2);
	
	return res;
	//return fib(n-1);
}

int main(){
	int n;cin>>n;
	cout<<fib(n);
	
	return 0;
}

