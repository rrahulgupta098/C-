#include<bits/stdc++.h>
using namespace std;
int binarysearch(int A[],int k){
	int l=0;int r=n-1;
	while(l<r){
		int mid=(l+r)/2;
		
		if(k==A[mid]){
			return mid;
		}
		if(k<A[mid]){
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	return -1;
}
int main(){
	int n=5;
int A[n]={1,2,5,8,9};
int k=5;
cout<<binarysearch(A,k);
	return 0;
}
