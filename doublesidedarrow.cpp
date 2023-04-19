#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	
	int k=N/2+1;
	for(int i=1;i<=k;i++){
		for(int j=1;j<=N+1-2*i;j++){
			cout<<"  ";
		}
		int num=i;
		for(int k=1;k<=i;k++){
			cout<<num<<" ";
			num--;
		}
		for(int l=1;l<2*(i-1);l++){
			cout<<"  ";
		}
		for(int m=1;m<=i;m++){
           if(m==1 && i==1){continue;
		   }
			cout<<m<<" ";
		}
		cout<<endl;
	}
	for(int i=k-1;i>=1;i--){
		for(int j=N+1-2*i;j>=1;j--){
			cout<<"  ";
		}
		int num=i;
		for(int k=i;k>=1;k--){
			cout<<num<<" ";
			num--;
		}
		for(int l=2*(i-1);l>1;l--){
			cout<<"  ";
		}
		int num2=1;
		for(int m=i;m>=1;m--){
           if(m==1 && i==1){continue;
		   }
			cout<<num2<<" ";
			num2++;
		}
		cout<<endl;
	}	
	
	
	
	return 0;
}
