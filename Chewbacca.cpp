#include<bits/stdc++.h>
using namespace std;
int main(){

	long long N;
	cin>>N;
	long long  N1=N;
	long long rev=0;
	
	//
	int temp=N;
	int count=0;
	while(temp!=0){
		int d=temp%10;
		temp=temp/10;
		count++;
	}
	
	long long a[count];
	//
	int i=count-1;
	while(N1!=0){
		int d=N1%10;
	9-d<d?d=9-d:d;
	a[i]=d;i--;
	//rev=rev*10+d;	
	N1=N1/10;
	}
//for(int j=0;j<count;j++){
//	cout<<a[j]<<" ";	
//}

//	cout<<rev;
long long sum=0;
for(int j=0;j<count;j++){
	sum=sum*10+a[j];
	
}
cout<<sum;
//	long long ans=0;
//while(rev!=0){
//	int d=rev%10;
//	ans=ans*10+d;
//	rev=rev/10;
//}
//cout<<ans;
return 0;
}
