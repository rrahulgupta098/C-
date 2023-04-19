#include<bits/stdc++.h>
using namespace std;
int main(){
int N;//=32145;
cin>>N;
int num=N;

int size=0;
while(num!=0){
	int d=num%10;
	size++;
	num=num/10;
}


//cout<<size;
int a[size];

int num1=N;
int i=0;
while(num1!=0){
	int d=num1%10;
	a[i]=d;
	num1=num1/10;
	i++;
}
//for(int i=0;i<size;i++){
//	cout<<a[i];
//}

//cout<<endl;
int b[size];
	for(int i=0;i<5;i++){
		b[a[i]-1]=i+1;
    	}

	int rev[size];
	for(int i=4;i>=0;i--){
		cout<<b[i];
	}
	
	return 0;
	}
