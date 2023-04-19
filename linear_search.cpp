#include<bits/stdc++.h>
using namespace std;

int linear_search(int a[],int N,int num){
	for(int i=0;i<N;i++){
		if(num==a[i]){
			return i;
		}
	}
	return -1;
}
int max_value(int a[],int N){
	int max=INT_MIN;
	for(int i=0;i<N;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	return max;
	
}

void product_of_array(int a[],int N){
	for(int i=0;i<N;i++){
		int prod=1;
		for(int j=0;j<N;j++){
			if(i==j)continue;
			prod=prod*a[j];
		}
		cout<<prod<<" ";
	}
}

int main(){
	int N;
	cin>>N;
int a[N];
for(int i=0;i<N;i++)cin>>a[i];
//int num; cin>>num;
//int res=linear_search(a,N,num);
//int res=max_value(a,N);
//cout<<res;
product_of_array(a,N);
return 0;
}
