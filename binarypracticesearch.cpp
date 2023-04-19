#include <bits/stdc++.h>
using namespace std;

int binarysearch(int A[],int x,int l,int r){
	
		while(l<=r){
	int mid=(l+r)/2;
	if(x==A[mid]){
		return mid;
	}
	if(x>A[mid]){
		l=mid+1;
	}else{
		r=mid-1;
	}
	
	}
	return -1;
}
int main(){
	int A[5]={1,2,3,4,5};
	int l=0;
	int r=5-1;
	int x=3;
	cout<<binarysearch(A,x,l,r);

		return 0;
}



//int binarysearch(int a[],int x,int l,int h)
//{
//	while(l<=h){
//		
//		int mid=(l+h)/2;
//		
//		if(a[mid]==x){
//			return mid;
//		}
//	 if(a[mid]<x){
//	 	l=mid+1;
//	 }
//	 else{
//	 	h=mid-1;
//	 }
//		}
//	return -1;
//}
