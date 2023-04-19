#include<bits/stdc++.h>
using namespace std;
int main(){

	int a,b,c;
	cin>>a>>b>>c;
	int x1,x2;
int d=sqrt(b*b-4*a*c);

	x1=(-b-d)/2*a;
	x2=(-b+d)/2*a;
if(d>0){
	cout<<"Real and Distinct"<<endl;
	if(x1<x2){
		cout<<x1<<" "<<x2;
	}else{
		cout<<x2<<" "<<x1;
	}
}else if(d=0){
	cout<<"Real and Equal"<<endl;
	if(x1<x2){
		cout<<x1<<" "<<x2;
	}else{
		cout<<x2<<" "<<x1;
	}
}else{
	cout<<"Imaginary"<<endl;
}	

	
	return 0;
}
