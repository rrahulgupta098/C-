
#include<bits/stdc++.h>
using namespace std;
int main(){
int N;

cin>>N;

if(N<3){
	cout<<"-1";
}

if(N%2!=0){
float b=(N*N-1)/2;	
float c=(N*N+1)/2;
cout<<b<<" "<<c;
}else
{
float d=(N*N/4-1);	
float e=(N*N/4+1);
cout<<d<<" "<<e;
}


return 0;
}
