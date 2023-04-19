#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
 cin>>N;
 for(int i=1;i<=N;i++){
 	for(int j=1;j<=N-i;j++){
 		cout<<"-";
	 }
	for(int k=i;k<=2*i-1;k++){
		cout<<k;
	}
	
	for(int l=2*(i-1);l>=i;l--){
		cout<<l;
	}
	 cout<<endl;
 }
 
 for(int i=N;i>=1;i--){
 	for(int j=1;j<=N-i;j++){
 		cout<<"-";
	 }
	 
 	cout<<endl;
 }
 
	return 0;
}
