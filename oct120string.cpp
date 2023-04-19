#include <bits/stdc++.h>
using namespace std;

int main()
{
	string name;
	cout<<"Enter your name : "<<endl;
	cin>>name; 
	string Names_Boys[3] = {"ABC","sdfsd","dfsd"};
	string Names_girs[] = {"a","d","ds","df"};
int n1=sizeof(Names_Boys)/sizeof(Names_Boys[0]);
int n2=sizeof(Names_girs)/sizeof(Names_girs[0]);
	

	int num;
	for(int i=0;i<n1;i++){
	if(name==Names_Boys[i]){
	    num=1;
		cout<<"first";
	}
	}
	for(int i=0;i<n2;i++){
	if(name==Names_girs[i]){
		 num=2;
		cout<<"firsta";
	}
	}
	cout<<"Gender is :";
	if(num==1){
	cout<<"Boy";
	}
	else if(num==2){
		cout<<"girl";
	}else{
		cout<<"not aware";
	}	

return 0;
}

