#include <bits/stdc++.h>
using namespace std;

void mergetwoarray(int l,int r,int *A){

int C[r-l+1];
int mid=(l+r)/2;
int i=l;int j=mid+1;


int k=0;
while(i<=mid && j<=r){
	if(A[i]<=A[j]){
		C[k]=A[i];
		i++;
		k++;
	}else{
		C[k]=A[j];
		k++;
		j++;
	}
}
	
	while(i<=mid){
		C[k]=A[i];
		k++;
		i++;
	}
		while(j<=r){
		C[k]=A[j];
		k++;
		j++;
	}	
	
    k=0;
    for(int m=l;m<=r;m++)
    {
        A[m]=C[k++];
    } 


//	return C[m+n];
}

void mergeSort(int l, int r, int *A){
	if(l>=r){
		return;
	}
	int mid=(l+r)/2;
mergeSort(l,mid,A);
mergeSort(mid+1,r,A);
mergetwoarray(l,r,A);
}

int main(){
//	int m=3;int n=3;
//int A[m]={1,3,5};
//int B[n]={2,4,6};
//int C[6];

int n;cin>>n;
int A[n];
for(int i=0;i<n;i++)cin>>A[i];


mergeSort(0,n-1,A);

	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
				
	return 0;
}
