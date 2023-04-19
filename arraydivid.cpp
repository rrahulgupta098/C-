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
//	for(int i=0;i<N;i++) {cout<<A[i];}
long long ans=0;
for(int i=0;i<N;i=i+2){
	ans+=A[i+1]-A[i];
}
cout<<ans<<" ";
long long ans1=0;
int i=0;int j=N-1;
while(i<j){
	ans1+=A[j]-A[i];
	i++;
	j--;
}
cout<<ans1<<endl;
	}
	
    

	
	return 0;
}
