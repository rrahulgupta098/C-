#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	if(n==0){
		cout<<"5";
	}else if(n<0){
		return 0;
	}
	else{
	
long long num=n;
long long sum=0;
while(num!=0){
	int d=num%10;
	if(d==0)d=5;
	sum=sum*10 + d;
	num=num/10;
}
//cout<<sum;
long long num1=sum;
long long rev=0;
while(num1!=0){
	int d=num1%10;
	rev=rev*10+d;
	num1=num1/10;
}
cout<<rev;
}
return 0;
}
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	long long n;
//	cin>>n;
//long long num=n;
//int count=0;
//while(n!=0){
//	n=n/10;
//	count++;
//
//}
//long long a[num];
//int i=count-1;
//while(num!=0){
//	int d=num%10;
//	a[i]=d;
//	i--;
//	num=num/10;
//}
//
////for(int j=0;j<count;j++)cout<<a[j];
//
//for(int j=0;j<count;j++){
//	if(a[j]==0){
//		a[j]=5;
//	}
//}
////for(int j=0;j<count;j++)cout<<a[j];
//
////int sum=0;
////for(int j=0;j<count;j++){
////	sum=sum*10 + a[j];
////}
////cout<<sum;
//
//return 0;
//}

