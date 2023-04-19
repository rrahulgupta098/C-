#include<bits/stdc++.h>
using namespace std;
int main(){
string str[]={"one","two","three","four","five","sox","seven","eight","nine"};
string ip="9814";
for(int i=0;i<10;i++){
int num=ip[i]-'0';
cout<<str[num]<<" ";
}

	return 0;
}
