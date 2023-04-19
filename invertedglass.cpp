#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;

//upper half
	
for(int i=1;i<=n;i++){
	int num=n;
	for(int j=1;j<=i;j++){
		cout<<num<<" ";
		num--;
	}
	
for(int k=i;k<n+1;k++){
	cout<<"  ";
}
for(int l=i;l<n;l++){
	cout<<"  ";
}
int num2=n-i+1;int num3=1;
for(int m=1;m<=i;m++){
	if(i==n+1 && m==n+1){
		continue;
	}
	else if(i==n+1){
	cout<<num3<<" ";
	num3++;
	}else{
	cout<<num2<<" ";
	num2++;
	}

}
	cout<<endl;
}

	
for(int i=1;i<=n+1;i++){
	int sum=n;
	for(int j=i;j<=n+1;j++){
		cout<<sum<<" ";
		sum--;
	}
	for(int k=2;k<=i;k++){
		cout<<"  ";
	}
	for(int l=2;l<i;l++){
		cout<<"  ";
	}
	int sum2=i-1;int sum3=1;
	for(int m=i;m<=n+1;m++){
			if(i==1 && m==n+1){
		continue;
	}else if(i==1){
		cout<<sum3<<" ";
		sum3++;
		
	}
	else{
	
		cout<<sum2<<" ";
		sum2++;}
	}
	cout<<endl;
}

	return 0;
}
