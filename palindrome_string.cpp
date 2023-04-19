#include <bits/stdc++.h>
using namespace std;


bool ispalindrome(string str){
	string str1="";
	for(int i=str.length()-1;i>=0;i--){
		str1=str1+str[i];
	}
	if(str1==str){
		return true;
	}else{
		return false;
	}
}

int main(){
	string str;cin>>str;//="abaab";
//	cout<<ispalindrome(str);

//print substring
int count=0;
for(int i=0;i<str.length();i++){
	for(int j=i;j<str.length();j++){
		string temp_Str="";
		for(int k=i;k<=j;k++){
			//cout<<str[k];
			temp_Str=temp_Str+str[k];
		}
		if(temp_Str.length()>1){
			if(ispalindrome(temp_Str)==true){
				count++;
				//cout<<temp_Str<<endl;
			}
			//cout<<temp_Str<<endl;
		}
		//cout<<endl;
	}
	
}
cout<<count;

	return 0;
}
