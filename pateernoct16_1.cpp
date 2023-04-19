#include <bits/stdc++.h>
using namespace std;
int main(){
int n=5;

for(int i=1;i<=n+1;i++){
	for(int j=i;j<=n+1;i++){
		cout<<"*";
	}
	for(int k=1;k<=i;k++){
		cout<<"*";
	}
	for(int l=1;l<=i;l++){
		cout<<"*";
	}
	cout<<endl;
}

	return 0;
}
