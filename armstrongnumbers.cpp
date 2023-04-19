#include<bits/stdc++.h>
using namespace std;



int main(){
	int i;
	int N1,N2;
	cin>>N1>>N2;
	//arrstring(45);
//		N1=N;
int N3;
//0 < N1 < 100 N1 < N2 < 10000
if(N1>0 && N2>N1 && N2<10000 && N1<N2){

	for( i=N1;i<=N2;i++){
	
	 N3=i;
	int arm=0;
	while(N3!=0){
		int d=N3%10;
		arm=arm+d*d*d;
		N3=N3/10;
		//cout<<N1<<" ";
	}
	if(arm==i)
	{
	cout<<i<<" ";
	}
	
}
}
	return 0;
}




//void arrstring(int N){
//	int N1=N;
//	int arm=0;
//	while(N!=0){
//		int d=N%10;
//		arm=arm+d*d*d;
//		N=N/10;
//	}
//	if(arm==N1)
//	{
//	cout<<"Yes";
//	}
//	else
//	{
//		cout<<"No";
//	}
//}
