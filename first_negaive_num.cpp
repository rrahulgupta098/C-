#include<bits/stdc++.h>
using namespace std;
int main(){int n=8;
int k=2;
	int A[n]={12,-1,-7,8,-15,30,16,20};
	for(int i=0;i<n;i++){
		for(int j=i;j<i+k;j++){
			if(A[j]<0){
				cout<<A[j]<<" ";
				break;
			}
		}
	}
	
	return 0;
}
