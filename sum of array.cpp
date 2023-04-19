#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"enter the size"<<endl;
cin>>n;

int a[n];
cout<<"enter the elements in the array"<<endl;
for(int i=0;i<n;i++){
cin>>a[i];
}
cout<<".............."<<endl;
cout<<"sum of the elemets are :"<<endl;
for(int i=0;i<n;i++){
 	int sum=0;
 	for(int j=0;j<=i;j++){
 		sum=sum+a[j];	
	 }
	 cout<<sum<<endl;
 }
return 0;	
}
