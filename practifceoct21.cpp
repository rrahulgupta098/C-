#include <bits/stdc++.h>
using namespace std;
int main()
{
int n=5;
for(int i=1;i<=n+1;i++){
	int num=n;
	for(int j=1;j<=i;j++){
		cout<<num;
		num--;
	}
	for(int k=i;k<n;k++){
		cout<<"-";
	}
	for(int l=i;l<n+1;l++){
		cout<<"-";
	}
	int num1=n-i+1;
	int num2=1;
	
	for(int m=1;m<=i;m++){
	if(i==n+1 && m==n+1){
		break;
	}if(i==n+1){
		cout<<num2;
		num2++;
	}else{
		cout<<num1;
		num1++;
	}
//		if(i==n && l==n){
//			break;
//		}if(i==n){
//			
//			cout<<num2<<"\t";
//			num2--;
//			
//		}else{
//		cout<<num1<<"\t";
//		num1--;
//		}
	}
	cout<<endl;
}
return 0;
}


//cin>>n;
//
//for(int i=1;i<=n;i++){
//	int num=1;
//	for(int j=1;j<=i;j++){
//		cout<<num<<"\t";
//		num++;
//	}
//	for(int j=i;j<n-1;j++){
//		cout<<"\t";
//	}
//	for(int k=i;k<n;k++){
//		cout<<"\t";
//	}
//	int num1=i;
//	int num2=i-1;
//	for(int l=1;l<=i;l++){
//		if(i==n && l==n){
//			break;
//		}if(i==n){
//			
//			cout<<num2<<"\t";
//			num2--;
//			
//		}else{
//		cout<<num1<<"\t";
//		num1--;
//		}
//		
//	}
//	cout<<endl;
//}


//for(int i=0;i<=n;i++){
//	if(i<=n/2){
//	
//	for(int j=i;j<n/2;j++){
//		cout<<"-";
//	}
//	for(int k=0;k<2*i+1;k++){
//		cout<<"*";
//	}
//}if(i>n/2){
//	int sp=1;
//	for(int i=0;i<sp;i++){
//		cout<<"-";
//		sp++;
//	}
//}
//	cout<<endl;
//	}
	


//star patter with 2 methods my fincand dec approacha and basic if else
//for(int i=1;i<=n;i++){
//	for(int j=1;j<=n-i;j++){
//		cout<<"\t";
//		}
//		int sum=i;int sum2=2*i-2;
//	for(int k=1;k<=2*i-1;k++){
//		if(k<=i){
//		cout<<sum<<"\t";
//		sum++;
//		}else{
//			cout<<sum2<<"\t";
//			sum2--;
//		}
//		
//			
//		}
//cout<<endl;	}
	
	

//for(int i=1;i<=n;i++){
//	for(int j=i;j<n;j++){
//		cout<<"\t";
//	}int num=i;
//	for(int k=1;k<=i;k++){
//		cout<<num<<"\t";
//		num++;
//	}
//	int sum=2*i-2;
//	for(int l=1;l<i;l++){
//		cout<<sum<<"\t";
//		sum--;
//	}
//	cout<<endl;
//}	

