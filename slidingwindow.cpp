#include <bits/stdc++.h>
using namespace std;

int sliding_window(int A[],int n,int k){

int i=0;int j=0;
int sum=0;
int mx=0;
while(j<5){
	sum=sum+A[j];
	if(j-i+1<k){
		j++;
	}else if(j-i+1==k){
		
	//	cout<<mx<<" "<<j-i+1<<endl;
		mx=max(sum,mx);
		sum=sum-A[i];
		i++;
		j++;
			
	}
}
	return mx;
}

void odd_event(int n){
	for(int i=n;i>0;i--){
		if(1%2==0){
			cout<<i<<" ";
		}
	}
}

int main(){
	int A[5]={6,2,3,4,5};
cout<<sliding_window(A,5,2);

		return 0;
}
