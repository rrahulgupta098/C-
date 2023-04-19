#include<bits/stdc++.h>
using namespace std;
int main(){

	int a[]={5,6,1,2,-3,6,7,-11,14};
		
	int q;
	cin>>q;
	int a1[q];
for(int j=0;j<q;j++)
{
	int idx;
	cin>>idx;
	
	
int max=INT_MIN;
	for(int i=0;i<=idx;i++){
		if(max<a[i]){
			max=a[i];
		}
		a1[i]=max;
	}
	cout<<"idx: "<<idx<<" "<<"max : "<<max<<endl;
		
}	

//for(int i=0;i<5;i++){
//	cout<<a1[i];
//}	
	
return 0;
}

