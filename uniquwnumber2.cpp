#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin>>N;
int a[N];
for(int i=0;i<N;i++)cin>>a[i];
int temp_a[N];
int temp_size=0;
for(int i=0;i<N;i++){
	int count=0;
	for(int j=0;j<N;j++){
		if(a[i]==a[j]){
			count++;
		}
	}
	if(count==1){
		temp_a[temp_size]=a[i];
		temp_size++;
	//	cout<<a[i];
	}
}

sort(temp_a,temp_a+temp_size);
for(int i=0;i<temp_size;i++){
	cout<<temp_a[i]<<" ";
}
return 0;
}
