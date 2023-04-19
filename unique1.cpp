#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i=i+2){
       if(a[i]==a[i+1]){
	   
      a[i]=0;
	  a[i+1]=0;		
	}
	}
	for(int i=0;i<n;i++){
		if(a[i]>0){
			cout<<a[i];
		}
	}
	return 0;
}


#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
ans=ans^a[i];
	}
	
	// for(int i=0;i<n;i++){
		
	// }
cout<<ans;
	return 0;
}
