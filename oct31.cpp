#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	
//upper half	
if(N>0 && N<10){
	for(int i=1;i<=N;i++){
	for(int j=i;j<N;j++){
		cout<<"\t";
	}
	int num=i;
	for(int k=1;k<=i;k++){
		cout<<num<<"\t";
		num++;
	}
	int num2=2*(i-1);
	for(int l=1;l<i;l++){
		cout<<num2<<"\t";
		num2--;
	}
	
	cout<<endl;
}
//	
//for(int i=1;i<=N;i++){
//	for(int j=1;j<i;j++){
//		cout<<"\t";
//	}
//	int sum=N-i+1;
//	for(int k=i;k<=N;k++){
//		cout<<sum<<"\t";
//		sum++;
//	}
//	int sum2=N-i+1;int sum3=N+1;
//	for(int l=i;l<N;l++){
//		if(i==1){
//			cout<<sum3<<"\t";
//			sum3--;
//		}else{
//		cout<<sum2<<"\t";
//		sum2--;	
//		}
//	}
	cout<<endl;
}

	

return 0;
}
