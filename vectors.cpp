#include<bits/stdc++.h>
using namespace std;
int count(int a[],int n,int x){
	int ind=0;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			ind++;
		}
	}
	return ind;
}
int main(){
	
	int a[5]={1,1,1,1,1};
	cout<<count(a,5,1);
	
	return 0;
}
