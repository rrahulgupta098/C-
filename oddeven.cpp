#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		int T;
		int o_s=0;
		int e_s=0;
		cin>>T;
		while(T!=0){
			int d=T%10;
			if(d%2==0){
				e_s=e_s +d;
			}else{
				o_s=o_s +d;
			}
			T=T/10;
		}
		if(e_s%4==0 || o_s%3==0){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
return 0;
}
