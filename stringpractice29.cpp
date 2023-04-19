#include <bits/stdc++.h>
using namespace std;


int main()
{
	
string s;
cin>>s;
string a;

for (int i = 0; i < s.length(); i++)
   {
if(i%2==0){
	s[i]=s[i]+1; //even +1 
}else if(i%2!=0){
s[i]=s[i]-1;//odd -1
}
cout<<s;
//for (int i = s.length()-1;i>=0; i--)
//   {
//a=a+s[i]
//
//;}
//if(s==a){
//	cout<<"true";
//}else{
//	cout<<"false";
//}

//   for (int i = 0; i < s.length(); i++)
//   {
//if(s[i]>='a' && s[i]<='z'){
//	s[i]=s[i]-32; // lower to upper 
//}else if(s[i]>='A' && s[i]<='Z'){
//s[i]=s[i]+32;//upper to lower
//}
//	 
//   }
//
////s=s-32; // lower to upper 
////s=s+32;//upper to lower
//
//
//cout<<s;
return 0;
}
