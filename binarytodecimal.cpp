#include<bits/stdc++.h>
using namespace std;

void bin(int a[],int N1){
for(int i=0;i<N1;i++){
int n=a[i];
int bin=0,p=1;

	while(n!=0){
int d=n%10;
bin=bin+d*p;
p=p*2;
n=n/10;		
	}
	cout<<bin<<endl;
}	
}

int main(){
int N;
cin>>N;
int a[N];
for(int i=0;i<N;i++){
	cin>>a[i];
}
bin(a,N);
//for(int i=0;i<N;i++){
//int n=a[i];
//int bin=0,p=1;
//
//	while(n!=0){
//int d=n%10;
//bin=bin+d*p;
//p=p*2;
//n=n/10;		
//	}
//	cout<<bin<<endl;
//}

return 0;
}
