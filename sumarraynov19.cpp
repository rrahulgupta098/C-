#include<bits/stdc++.h>
using namespace std;
int main(){

	int a[]={5,6,1,2,-3,6,7,-11,14};
		
	int q;
	cin>>q;
	int a1[q];
	a1[0]=a[0];
for(int j=0;j<q;j++)
{
int sum=a[0];
	for(int i=1;i<=q;i++){
		sum=sum+a[i];
	a1[i]=sum;	
	}


//	int idx;
//	cin>>idx;
	
	

	
	//cout<<"idx: "<<idx<<" "<<"max : "<<max<<endl;
		
}	

for(int i=0;i<q;i++){
	cout<<a1[i]<<" ";
}	
	
return 0;
}

