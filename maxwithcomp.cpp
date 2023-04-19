#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin>>N;
int a[N];
for(int i=0;i<N;i++)cin>>a[i];
int q; cin>>q;

int prefix[N]={0};
int sum=0;
for(int i=0;i<N;i++){
	sum=sum+a[i];
	prefix[i]=sum;
}

for(int i=0;i<N;i++){
	cout<<prefix[i];
}

int first_left[N]={0};

int max_ele=INT_MIN;
for(int i=0;i<N;i++){
	if(max_ele<a[i]){
	max_ele=a[i];	
	}
	first_left[i]=max_ele;
}
//protnt new array
//for(int i=0;i<N;i++){
//	cout<<first_left[i];
//}

for(int i=0;i<q;i++){
	int idx; cin>>idx;
	cout<<first_left[idx];
//	int max=INT_MIN;
//	for(int j=0;j<idx;j++){
//		if(max<a[j]){
//			max=a[j];
//		}
//	}
//	cout<<max;
}

return 0;
}

