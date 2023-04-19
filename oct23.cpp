#include <bits/stdc++.h>
using namespace std;
int main()
{
int n=5;
//for(int i=1;i<=n+1;i++){
//	int num=n;
//	for(int j=1;j<=i;j++){
//		cout<<num;
//		num--;
//	}
//	for(int k=i;k<n;k++){
//		cout<<"-";
//	}
//	for(int l=i;l<n+1;l++){
//		cout<<"-";
//	}
//	int num1=n-i+1;
//	int num2=1;
//	
//	for(int m=1;m<=i;m++){
//	if(i==n+1 && m==n+1){
//		break;
//	}if(i==n+1){
//		cout<<num2;
//		num2++;
//	}else{
//		cout<<num1;
//		num1++;
//	}
//	}
//	cout<<endl;
//}

for(int i=1;i<=n+1;i++){
	int num=n;
	for(int j=i;j<=n+1;j++){
	cout<<num;
	num--;
	}
		for(int k=1;k<i;k++){
		cout<<"-";
		}
		for(int l=1;l<i;l++){
			cout<<"-";
		}
		int num1=i-1;
		for(int m=i;m<=n+1;m++){
			cout<<num1;
			num1++;
		}
		cout<<endl;
	}

return 0;
}
