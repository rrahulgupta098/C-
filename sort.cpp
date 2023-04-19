#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={1,3,9,8,5};
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,a+n);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}
