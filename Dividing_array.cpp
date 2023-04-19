#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
	int N;
	cin>>N;
	int A[N];
	for(int i=0;i<N;i++) cin>>A[i];
	sort(A,A+N);
	int B[N/2];
	int C[N/2];
	for(int i=0;i<N;i++){
		if(i<N/2){
			B[i]=A[i];
		}else{
			C[i]=A[i];
		}
	}
		for(int i=0;i<N/2;i++) {
		cout<<B[i]<<" ";
		}
				for(int i=0;i<N/2;i++) {
		cout<<C[i]<<" ";
		}
//	for(int i=0;i<N;i++) cout<<A[i];
	}


return 0;
}


