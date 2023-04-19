#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int A[N];
	for(int i=0;i<N;i++) cin>>A[i];

for(int i=0;i<N;i++){
int num=A[i];

int p=1;
int bin=0;
while(num!=0){
	int d=num%10;
bin=bin+d*p;
p=p*2;
num=num/10;
}
cout<<bin;
cout<<endl;	
}
//int p=1;
//int bin=0;
//while(N!=0){
//	int d=N%10;
//bin=bin+d*p;
//p=p*2;
//N=N/10;
//}
//cout<<bin;
return 0;
}
