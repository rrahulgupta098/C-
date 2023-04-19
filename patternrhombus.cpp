#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	
//upper half	
for(int i=1;i<=n;i++){
	for(int j=i;j<n;j++){
		cout<<"\t";
	}
	int num=i;
	for(int k=1;k<=i;k++){
		cout<<num<<"\t";
		num++;
	}
	int num2=i;
	for(int l=1;l<i;l++){
		cout<<num2<<"\t";
		num2--;
	}
	
	cout<<endl;
}
	
for(int i=1;i<=n;i++){
	for(int j=1;j<i;j++){
		cout<<"\t";
	}
	int sum=n-i+1;
	for(int k=i;k<=n;k++){
		cout<<sum<<"\t";
		sum++;
	}
	int sum2=n-i+1;int sum3=n+1;
	for(int l=i;l<n;l++){
		if(i==1){
			cout<<sum3<<"\t";
			sum3--;
		}else{
		cout<<sum2<<"\t";
		sum2--;	
		}
	}
	cout<<endl;
}
	

return 0;
}
