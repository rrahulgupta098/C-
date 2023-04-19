#include<iostream>
using namespace std;
int main() {
	int Max,Min,step;
	cin>>Max>>Min>>step;
	for(int i=Min;i<=Max;i=i+step){
	
	int cel = 5*(i – 32);
	cout<<i<<"\t"<<(int)cel<<endl;
	}
	return 0;
}


//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int sb,db;
//	cin>>sb>>db;
//	int n;
//	cin>>n;
//	int dec=0;
//	int p=1;
//	
//	//any to dec
//	while(n!=0){
//		int d=n%10;
//		dec=dec+d*p;
//		n=n/10;
//		p=p*sb;
//	}
//	//cout<<dec;
//	
//	int p1=1;
//	int sum=0;
//	//dec to any
//	while(dec!=0){
//		int d=dec%db;
//		sum=sum+d*p1;
//		dec=dec/db;
//		p1=p1*10;
//	}
//	cout<<sum;
//	
//	return 0;
//}
//
//

