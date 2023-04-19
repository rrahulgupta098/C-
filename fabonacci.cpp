#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n=4;
	for(int i=0;i<n;i++){
		for(int j=0;j<2*n-1-i;j++)
		{ 
		if(j<i){
			cout<<" ";
		}else{
		cout<<"*";
		}
		
		}
		cout<<endl;
	}
//	int min;int HCF=1; int a=4; int b=12;
//	if (a>b){
//		min=b;
//	}else{
//		min=a;
//	}
//	for(int i=2;i<min;i++){
//		if(a%i==0 && b%i==0){
//			HCF=i;
//			break;
//		}
//	}
//	cout<<"HCF of munber is :"<<HCF;
	
			return 0;
}
//	int n=123;
//	int rev=0;
//	while(n>0){
//		int dig=n%10;
//		rev=rev*10+dig;
//		n=n/10;
//	}
//	cout<<"reverse of number is :"<<rev<<endl;

	
	
//int n=5;
//	int a=0; int b=1; int i=2;
//	cout<<a<<" "<<b<<" ";
//	while(i<n){
//		int c=a+b;
//		a=b;
//		b=c;
//		cout<<c<<" ";
//		i++;
//	}
	

//	int fact=1;
//	int n=5;
//	
//	for(int i=1;i<=n;i++){
//		
//		fact=fact*i;
//	}
//	cout<<endl;
//
//cout<<fact;


	
	
//int n=5;
//for(int i=1;i<=n;i++){
//	int a=i;
//	for(int j=1;j<=n;j++){
//		
//		if(j>n-i){
//			cout<<a;
//			a--;
//		}else{
//			cout<<" ";
//		}
//	}
//	cout<<endl;
//}	
	
	
	
//int n=6;
//for(int i=1;i<=n;i++){
//	for(int j=1;j<=n;j++){
//		
//		if(j>n-i){
//			cout<<i;
//		}else{
//			cout<<" ";
//		}
//	}
//	cout<<endl;
//}
 
//int n;
//cin>>n;
//int a[n];
//a[0]=0;
//a[1]=1;
//cout<<a[0]<<a[1]; 
//
//for(int i=2;i<n;i++){
//	a[i]=a[i-1]+a[i-2];
//	cout<<a[i];
//}

