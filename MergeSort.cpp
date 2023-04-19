#include <bits/stdc++.h>
using namespace std;

void mergeSort(int L,int j, int *A){
	if(L<=R) return;
	
	int mid=(L+j)/2;
	mergeSort(L,mid,A);
	mergeSort(mid+1,j,A);
	merge(L,R,A);
}


int main()
{
	
	int A[]={1,5,2,4,9,6,8};
	
	int i=0;int j=n-1;
	mergeSort(int i,int j,A)
	
return 0;
}
