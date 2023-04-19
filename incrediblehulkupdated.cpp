#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
int a[N];
for(int k=0;k<N;k++){
	cin>>a[k];
}

int a1[N];
for(int j=0;j<N;j++){
	int i=0,count=0;
int k=0;
int n=a[j];
while(n!=0){
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
cout<<count<<rndl;
	//cout<<s;	
}
//for(int l=0;l<N;l++){
//	cout<<a1[l]<<endl;
return 0;
}



