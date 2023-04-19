#include<bits/stdc++.h>
using namespace std;
int main(){
int A[3][4];int tr[3][4];
for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
		cin>>A[i][j];
	}
}
cout<<"normal";
for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
		cout<<"["<<A[i][j]<<"]";
	}
	cout<<endl;
}

for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
		tr[j][i]=A[i][j];
	}
}

cout<<"trasnpose"<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
		cout<<"["<<tr[i][j]<<"]";
	}
	cout<<endl;
}

//string s="abcdefghi";
//cout<<s.substr(2,5);


//string A[2];
//cin>>A[0]; //input complete sting 
//cin>>A[1]; //input complete sting 
//cout<<(A[0][0]);

//cin>>s;
//getline(cin,s);
//cout<<s<<endl;
//cout<<s.length()<<endl;
//cout<<s.size()<<endl;
//string a(5,'a');
//for(int i=0l;i<5;i++)cin>>a[i];
//cout<<a;

    return 0;
}
