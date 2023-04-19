#include <bits/stdc++.h>
using namespace std;
int power(int a,int b){
	if(b==0){
		return 1;
	}
	int ans=a*pow(a,b-1);
	return ans;
}

int power_num1(int n,int b){
	if(n==1){
	return 1;	
	}
	
	return pow(n,b) + pow(n-1,b);
	
	}

int power_num(int n,int b){
	if(n==1){
	return pow(n,b);	
	}
	
	return pow(n,b) + pow(n-1,b);
	
	}

void num(int n){

if(n==0){
	return;
}
num(n-1);
cout<<n;
	
}


int main(){
	int a;cin>>a;
//	int b;cin>>b;
	//cout<<power(a,b);
//int b=5;
//	cout<<power_num1(a,b);
	num(a);
	return 0;
}
