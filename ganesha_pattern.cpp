#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
for(int i=0;i<N;i++){
	for(int j=0;j<N;j++){
	 if(i==N/2 || j==N/2 ){
	 	cout<<"*";
	 }
	 
	 else if(i==0 && j>N/2 || j==0 && i<N/2 ){
	 	cout<<"*";
	 }else if(i==N-1 && j<N/2 || j==N-1 && i>N/2){
	 	cout<<"*";
	 }
	 else{
	 	cout<<" ";
	 }
	
		
	}
	cout<<endl;
	}
return 0;
}
