#include <bits/stdc++.h>
using namespace std;

void printodd(int n){

if(n==1){
	cout<<n<<endl;
	return ;
}
if(n%2==1){
cout<<n<<endl;
}


n%2==1?printodd(n-2):printodd(n-1);
}

void printeven(int n){
	if(n==2){cout<<n<<endl;
	return ;
	}
	
	n%2==0?printeven(n-2):printeven(n-1);

if(n%2==0){
cout<<n<<endl;
}

	
}

int main()
{
int n;cin>>n;
printodd(n);
//cout<<endl;
printeven(n);
      
return 0;
}   

