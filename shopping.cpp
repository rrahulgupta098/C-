#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
for(int i=0;i<N;i++){
	int M,N; cin>>M>>N;
	int sum1=0,sum2=0;
	for(int j=1,k=2;j<M,k<M;j=j+2,k=k+2){
		sum1=sum1+j;
		sum2=sum2+k;
		if(sum1>M){
		//	cout<<j;
		cout<<"Harshit";break;
		}
		if(sum2>N){
		cout<<"Aayush"; break;
		}
	}
}	
	return 0;
}
