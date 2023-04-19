#include<bits/stdc++.h>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	//A-Z 65,90
	//a-z 97-122
	if(ch>=65 && ch <=90){
		cout<<"U"<<endl;
	}else if(ch>=97 and ch<=122){
		cout<<"L"<<endl;
	}else{
		cout<<"I";
	}
	return 0;
}
