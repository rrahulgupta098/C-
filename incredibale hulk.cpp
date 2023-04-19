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
int s=0;
int n=a[j];
	for(int i=0;i<=n;i++){
		int p=pow(2,i);
		//cout<<"hi";
		int k=0;
		if(p>n)
		{
			if(p==n){
				k=pow(2,i);
				s=1+n-k;
				a1[j]=s; 
			}else{
			k=pow(2,i-1);
			s=1+n-k; 
			a1[j]=s;
			}
			
			//cout<<s<<endl;
			
		
		//cout<<s;	
			break;
		//	cout<<"in";
		}
		
}
	//cout<<s;	
}
for(int l=0;l<N;l++){
	cout<<a1[l]<<endl;
}

//	int N =3;
//int a[N];
//for(int k=0;k<N;k++){
//	cin>>a[k];
//}
//	for(int j=0;j<N;j++){
//		
//	int n=a[j];
//	for(int i=0;i<=n;i++){
//		int p=pow(2,i);
//		//cout<<"hi";
//		if(p>n)
//		{
//			cout<<i-1;
//			
//			break;
//		//	cout<<"in";
//		}
//		//cout<<"Hi";
//		//cout<<p;
//	}
//}

	return 0;
}
