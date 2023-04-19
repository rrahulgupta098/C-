#include <bits/stdc++.h>
using namespace std;
int main(){
int n=6;
int a=0;int b=1;
//cout<<a<<endl;cout<<b;
for(int j=1;j<=n;j++){
	
for(int i=1;i<=j;i++){
	int c=a+b;
	cout<<a<<"     ";
	a=b;
	b=c;
}cout<<endl;
}	return 0;
}
//int n=5;
////--question 5
//int i=1;
//while(i<=n){
//	
//int j=i;
//while(j<=n){
//	cout<<" ";
//	j++;
//}
//
//int k=1;
//while(k<=i){
//	cout<<"*";
//	k++;
//}	
//
//int l=i;
//while(l<=n){
//	 
//	cout<<"*";
//	l++;
//}
//	i++;
//	cout<<endl;
//}

//--question 5
//for(int i=1;i<=n;i++){
//	for(int j=i;j<=n;j++){
//		cout<<" ";
//	}
//	for(int k=1;k<i;k++){
//		if(k==1 || i==n){
//	cout<<"*";	
//		}else{
//			cout<<" ";
//		}
//	
//	}
//	for(int l=i;l<n;l++){
//			if(l==n-1 || i==1){
//	cout<<"*";	
//		}
//		else{
//			cout<<" ";
//		}
//	}
//	cout<<endl;
//}
//return 0;
//}




//question 4
//cout<<"1";
//cout<<endl;
//for(int i=2;i<=n;i++){
//	for(int j=1;j<=i;j++){
//		if(j==1 || j==i){
//		cout<<i<<"     ";
//		}else{
//		cout<<"0"<<"     ";
//		}
//			
//		
//		
//	}
//	cout<<endl;
//}


//question 2
//for(int i=1;i<n+1;i++){
//	for(int j=1;j<=i;j++){
//		cout<<" ";
//	}
//
//	for(int k=i;k<=n+1;k++){
//		cout<<n-k+1;		
//	}
//	int num=1;
//	for(int l=i;l<n+1;l++){
//		cout<<num;
//		num++;
//	}
//	cout<<endl;
//}
//
//
//for(int i=1;i<=n+1;i++){
//	for(int j=i;j<=n+1;j++){
//		cout<<" ";
//	}
//	int num=i;
//	for(int k=1;k<=i;k++){
//		cout<<num-1;
//		num--;
//	}
//	for(int l=1;l<i;l++){
//		cout<<l;
//	}
//	cout<<endl;
//}
//	return 0;
//}


//--question 2 upperhalf




//--question 1
//	for(int i=1;i<n;i++){
//		for(int j=1;j<=i;j++){
//			cout<<" ";
//		}
//			for(int k=i;k<=n;k++){
//				cout<<k;
//			}
//			int num=1;
//			for(int l=i;l<n;l++){
//				cout<<n-num;
//				num++;
//			}
//		cout<<endl;
//		}
//		
//		
//		for(int i=1;i<=n;i++){
//			for(int j=i;j<=n;j++){
//			cout<<" ";
//			}
//			   int num=1;
//				for(int k=1;k<=i;k++){
//				cout<<n-i+num;
//			num++;
//				  }
//					for(int l=1;l<i;l++){
//						cout<<n-l;
//					}
//				cout<<endl;
//			
//		}
		
	

