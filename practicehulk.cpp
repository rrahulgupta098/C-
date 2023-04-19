#include<bits/stdc++.h>
using namespace std;
int main(){
int n=7;
int k=0,count=0;
int i=0;
while(n>0){
	if(pow(2,i)>=n){
		//cout<<pow(2,i)<<" ";
		if(pow(2,i)==n){
			k=pow(2,i);
			n=n-k;
			
			count++;
		i=-1;
		}else{
			k=pow(2,i-1);
			//cout<<"n:"<<n;
			n=n-k;
			//cout<<"n:"<<n<<"i:"<<i<<endl;
			count++;
		i=-1;
		}
	}
	i++;
	//cout<<"i"<<i;
}
cout<<count<<endl;
return 0;
}
