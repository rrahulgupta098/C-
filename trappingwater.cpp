#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
int ans=0;
for(int i=0;i<n;i++){

	int left_max=a[0];
	for(int j=0;j<=i;j++){
		if(left_max<a[i]){
			left_max=a[i];
		}
	}
	
	int right_max=a[i];
	for(int k=i;k<n;k++){
		if(right_max<a[k]){
			right_max=a[k];
		}
	}
	ans+=(min(left_max,right_max)-a[i]);
	//cout<<min(left_max,right_max)<<endl;
}
cout<<ans;
//12
//0 1 0 2 1 0 1 3 2 1 2 1

return 0;
}
