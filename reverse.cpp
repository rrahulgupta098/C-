
#include<bits/stdc++.h>
using namespace std;

int reverse(int a[], int n){
	 int f=0,l=n-1;
	    while(f<l){
	        int temp;
	        temp=a[f];
	        a[f]=a[l];
	        a[l]=temp;
	        f++;l--;
	    }
return 0;	    
}

int main(){

	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	   
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	   
	   reverse(a,n);
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
		return 0;
}

