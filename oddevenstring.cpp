#include <bits/stdc++.h>
using namespace std;


int main()
{

	
string s;
cin>>s;
string a;
for (int i = 0; i < s.length()-1; i++){
	cout<<s[i];
int c=s[i+1]-s[i];
//a=a+s[i];
//a=a+c;
cout<<c;
}

//cout<<a;
//for (int i = 0; i < s.length(); i++)
//   {
//if(i%2==0){
//	s[i]=s[i]+1; //even +1 
//}else{
//s[i]=s[i]-1;//odd -1
//}
//
//}
//cout<<s;
return 0;
}
