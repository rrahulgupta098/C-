#include <bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
//damru horizontal
//
//for(int i=1;i<n;i++){
//	for(int j=1;j<=i;j++){
//		cout<<"*";
//	}
//	for(int k=i;k<n;k++){
//		cout<<" ";
//	}
//	for(int l=i;l<n;l++){
//		cout<<" ";
//	}
//	for(int m=1;m<=i;m++){
//		cout<<"*";
//	}
//	cout<<endl;
//}
//
//for(int i=1;i<=n;i++)
//{
//	for(int j=i;j<=n;j++){
//		cout<<"*";
//	}
//	for(int k=1;k<i;k++){
//		cout<<" ";
//	}
//	for(int l=1;l<i;l++){
//	cout<<" ";
//	}
//	for(int m=i;m<=n;m++){
//		cout<<"*";
//	}
//	cout<<endl;
//}

//--damru
//for(int i=i;i<=n;i++){
//	for(int j=1;j<=i;j++){
//		cout<<"*"<<" ";
//	}
//	cout<<endl;
//}
//
//for(int i=1;i<=n;i++){
//	for(int j=i;j<n;j++){
//		cout<<"*"<<" ";
//	}
//	cout<<endl;
//}
//
//for(int i=1;i<n;i++){
//	for(int j=i;j<=n;j++){
//		cout<<"  ";
//	}
//	for(int k=1;k<=i;k++){
//		cout<<"*"<<" ";
//	}
//	cout<<endl;
//}
//
//for(int i=1;i<=n;i++){
//	for(int j=1;j<=i;j++){
//		cout<<"  ";
//	}
//	for(int k=i;k<=n;k++){
//		cout<<"*"<<" ";
//	}
//	cout<<endl;
//}


	
//----------diamond
for(int i=1;i<n;i++){
	for(int j=i;j<=n;j++){
		cout<<" ";
	}
	for(int k=1;k<=i;k++){
	cout<<"*";	
	}
	for(int k=1;k<i;k++){
		cout<<"*";
	}
	cout<<endl;
}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<" ";
		}
		for(int k=i;k<n;k++){
			cout<<"*";
		}
		for(int k=i;k<=n;k++){
			cout<<"*";
		}
		cout<<endl;
	}


//vertical damru

	for(int i=1;i<n;i++){
		for(int j=1;j<=i;j++){
			cout<<" ";
		}
		for(int k=i;k<n;k++){
			cout<<"*";
		}
		for(int k=i;k<=n;k++){
			cout<<"*";
		}
		cout<<endl;
	}

for(int i=1;i<=n;i++){
	for(int j=i;j<=n;j++){
		cout<<" ";
	}
	for(int k=1;k<=i;k++){
	cout<<"*";	
	}
	for(int k=1;k<i;k++){
		cout<<"*";
	}
	cout<<endl;
}
	
	return 0;
}
