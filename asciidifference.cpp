#include <bits/stdc++.h>
using namespace std;


int main()
{

	
string s;
cin>>s;

//cout<<s[0];
//int c=s[1]-s[0];
//
//
//cout<<c;
//cout<<s[1];
//string a;
for (int i = 0; i < s.length()-1; i++){
	cout<<s[i];
int c=s[i+1]-s[i];
cout<<c;
	//cout<<s[i+1];
}
cout<<s[s.length()-1];
return 0;
}

