#include<bits/stdc++.h>
using namespace std;
int main(){
int N=1634;
int n=N;
int num=N;
//int n=pow(5,2);
//cout<<n;
int digit=0;

while(n!=0){
	int d=n%10;
	digit=digit+1;
	n=n/10;
}
//cout<<digit<<endl;
//cout<<n<<endl;


int arm=0;
while(num!=0){
	int d=num%10;
	arm=arm + pow(d,digit);
	num=num/10;
}
//cout<<arm;
if(arm==N)
{
	cout<<"true";
}else{
	cout<<"false";
}
	return 0;
}
