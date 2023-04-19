#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
int a[N];
for(int i=0;i<N;i++)cin>>a[i];
for(int i=0;i<N;i++){
	int count=0;
	for(int j=0;j<N;j++){
		if(a[i]==a[j]){
			count++;
			//cout<<"hi";
		}
	}
	if(count==1){
		cout<<a[i];
	}
}

return 0;
}
