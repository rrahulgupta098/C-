#include <bits/stdc++.h>
using namespace std;

int binarysearch(int A[],int N,int x){
int l=0;int r=N-1;
while(l<r){
	int mid=(l+r)/2;
	if(x==A[mid])
	{
	return mid;
	}
	if(x>A[mid]) {
	l=mid+1;
	}
	else{
	r=mid-1;
	} 
	
}	
return -1;
}

int main(){
	int N;cin>>N;
	int A[N];
	for(int i=0;i<N;i++)cin>>A[i];
//	sort(A,A+N);
	int x=5;
	int n=binarysearch(A,N,x);
	
cout<<n<<" "<<A[n];
	return 0;
}
