#include <bits/stdc++.h>
using namespace std;

int main()
{

int num;
cin>>num;
cout<<endl;
int digit;
int a[num];
for(int i=0;i<num;i++){
	cin>>digit;
	a[i]=digit;
//	cout<<endl;
}
int sum=0;
for(int i=num-1;i>=0;i--){
	sum=sum*10 + a[i];

}
cout<<sum;
return 0;
}
//int a=2,b=10,GCD,num;
//if(a>b){
//	num=b;
//}else{
//	num=a;
//}
//
//for(int i=1;i<=num;i++){
//	if(a%i==0 && b%i==0){
//		GCD=i;
//	}
//}
//	cout<<GCD;
//int n=15;
//for(int i=2;i<=n;i++){
//	int flag=0;
//	for(int j=2;j*j<=i;j++){
//		if(i%j==0){
//			flag=1;
//		
//			
//		}
//	
//	}
//		if(flag==0){
//			cout<<i<<endl;
//		}
//}


//	int n,y;
//	cin>>n;
//	cout<<endl;
//	//cin>>y;
//	int x;
//	for(int i=1;i<=n;i++){
//		cin>>x;
//	}
//	for(int i=0;i<n;i++){
//		cout<<i;
//	}
//	int a[n];
	
	



//Q2
//	int x,y;
//	cin>>x;
//	cin>>y;
//	for(int i=1;i<=y;i++){
//		cout<<x*i<<endl;
//	}



//Q1	
//	int x,y;
//	cin>>x;
//	cin>>y;
//	for(int i=1;x*i<=y;i++){
//		cout<<x*i<<endl;
//	}


	


