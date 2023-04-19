#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;

//hollow diamond upper hald 
	for(int i=1;i<n/2+1;i++){
		for(int j=i;j<=n/2+1;j++){
			cout<<"*\t";
		}
		for(int k=2;k<i;k++){
			cout<<"\t";
		}
		for(int l=2;l<=i;l++){
			cout<<"\t";
		}
		for(int m=i;m<=n/2+1;m++){
			if(m==1){
				continue;
			}
			cout<<"*\t";
		}
		cout<<endl;
	}

//hollow diamond lower half
for(int i=1;i<=n/2+1;i++){
	for(int j=1;j<=i;j++){
		cout<<"*\t";
	}
	for(int k=i;k<n/2;k++){
		cout<<"\t";
	}
	for(int l=i;l<=n/2;l++){
		cout<<"\t";
	}
	

for(int m=1;m<=i;m++){
if(m==n/2+1){
	continue;
}
cout<<"*\t";	
}
	cout<<endl;
}




return 0;
}

	//hollow rhombus
//	int n=5;
//	for(int i=1;i<=n;i++){
//		for(int j=i;j<n;j++){
//			cout<<" ";
//		}
//		for(int k=1;k<=i;k++){
//			if(k==1 || i==n){
//				cout<<"*";
//			}else{
//				cout<<" ";
//			}
//		}
//		for(int l=i;l<n;l++){
//			if(i==1 || l==n-1){
//				cout<<"*";
//			}else{
//				cout<<" ";
//			}
//		}
//		cout<<endl;
//	}

