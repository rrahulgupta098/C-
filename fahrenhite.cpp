#include<bits/stdc++.h>
using namespace std;
int main() {
	int Max,Min,step;
	cin>>Min>>Max>>step;
	for(int i=Min;i<=Max;i=i+step){
	
	float cel = (0.55555555555*(i-32));
	cout<<i<<"\t"<<int(cel)<<endl;
	}
	return 0;
}
