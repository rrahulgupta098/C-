
#include<bits/stdc++.h>
using namespace std;
int reverse(int a[],int n){
	
	return 0;
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    cout<<endl;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	   int a1[n];
	   int f=n-1,l=n-1;
	   for(int i=0;i<n;i++){
	   	a1[i]=a[l];
	   	f++;l--;
	   }
	   
//	    int f=0,l=n-1;
//	    while(f<l){
//	        int temp;
//	        temp=a[f];
//	        a[f]=a[l];
//	        a[l]=temp;
//	        f++;l--;
//	    }
	    for(int i=0;i<n;i++){
	        cout<<a1[i]<<" ";
	    }
	}
		return 0;
}

