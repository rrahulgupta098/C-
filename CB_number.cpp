#include<bits/stdc++.h>
using namespace std;

int main(){
	string str="81615";
//cout<<str.size();
	for(int i=0;i<str.length();i++){
		for(int j=i;j<str.length();j++){
//		cout<<str.substr(i,j-i+1);   //decrease one for loop
	string temp="";
			for(int k=i;k<=j;k++){
				temp=temp+str[k];
				//cout<<str[k];
			}
	if(temp.size()<=2){
		cout<<temp<<endl;
	}
			
		//cout<<endl;
		}
		
		
	}
	
	return 0;
}
