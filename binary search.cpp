#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int x,int l,int h)
{
	while(l<=h){
		
		int mid=(l+h)/2;
		
		if(a[mid]==x){
			return mid;
		}
	 if(a[mid]<x){
	 	l=mid+1;
	 }
	 else{
	 	h=mid-1;
	 }
		}
	return -1;
}

int main(){
	//int a[]={5,4,6,9,17};
	int n;cin>>n;
	int A[n];
	for(int i=0;i<n;i++)cin>>A[i];
//	int n=sizeof(a)/sizeof(a[0]);
	int l=0;
	int h=n-1;
//int x=17;
int x;cin>>x;


int result = binarysearch(A,x,l,h)	;
//cout<<result;
//if(result == -1){
//cout<<"Not found";	
//}else{
//cout<<result;	
//}

cout<<result;

//int binarysearch(int a[],int x,int l,int h){
//	if(l<=h){
//		int mid=(l+h)/2;
//	
//	if(a[mid]==x){
//		return mid;
//	}
//	if(x<a[mid]){
//	return 	binarysearch(a,x,l,mid-1);
//	}else{
//		return binarysearch(a,x,mid+1,h);
//	}
//	return -1;
//}
//}

//int main(){
//	int a[]={1,2,3,4,5,6};
//	int n=sizeof(a)/sizeof(a[0]);
//	int l=0;
//	int h=n-1;
//int x=5;
//
//
//int result = binarysearch(a,x,l,h);
////cout<<result;
//if(result == -1){
//cout<<"Not found";	
//}else{
//cout<<"mid index is : "<<result;	
//	
//   }
	return 0;
}
