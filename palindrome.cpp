#include<iostream>
using namespace std;
int sum(int N){
	int s=0;
	while(N!=0){
		int d=N%10;
		s=s+d;
		N=N/10;
		
	}
	return s;
}
int main(){
	int n=11211;
	int rev=0;
	int n1=n;
	while(n1!=0){
		int d=n1%10;
		rev=rev*10 + d;
		n1=n1/10;
	}
	//cout<<rev<<endl;
	if(rev==n){
		cout<<"palindrome"<<endl;
		cout<<sum(n);
	}else{
		cout<<"not palindrome";
	}
	return 0;
}
