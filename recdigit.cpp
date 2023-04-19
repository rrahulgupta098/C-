#include<bits/stdc++.h>
using namespace std;

void suseq(string str,string op,int& count){
	
	if(str.size()==0){
		cout<<op<<endl;
	count++;
	return ;}

	string op1=op;
	string op2=op+str[0];

str.erase(0,1);	
	
	suseq(str,op1,count);
	suseq(str,op2,count);
	
	
}

int main(){

string str="abc";
string op="";
int count=0;
suseq(str,op,count);
cout<<count;
//string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//
//string t="213";
//string op="";
//for(int i=0;i<10;i++){
//	int digit=str[i]-"0";
//	//int digit=0;
//	op=op+str[digit];
//}
//cout<<op;

    return 0;
}
