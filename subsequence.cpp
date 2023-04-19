#include<bits/stdc++.h>
using namespace std;
vector <string> v;

void print(vector<string>v)
{
	for(int i=0;i<v.size();i++){
			cout<<v[i]<<endl;
		}
	
}
void solve(string ip, string op){
	
	if(ip.size()==0){
		v.push_back(op);
	//	cout<<op<<endl;
		return ;
	}
	
	string op1=op;
	string op2=op+ip[0];
	ip.erase(0,1);
	solve(ip,op2);
	solve(ip,op1);

	return ;
}


int main(){
	string ip;//ip="abc";
	int n;cin>>n;
	// while(n--){
	// 	cin>>ip;
	// }
	string arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{

	string op="";
	solve(arr[i],op);
	sort(v.begin(),v.end());
	print(v);
	//v.clear();
	}
	
	return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// vector <string> v;

// void solve(string ip, string op){
	
// 	if(ip.size()==0){
// 		v.push_back(op);
// 	//	cout<<op<<endl;
// 		return ;
// 	}
	
// 	string op1=op;
// 	string op2=op+ip[0];
// 	ip.erase(0,1);
// 	solve(ip,op2);
// 	solve(ip,op1);

// 	return ;
// }


// int main(){
// 	string ip;//ip="abc";
// 	int n;cin>>n;
// 	while(n--){
// 		cin>>ip;
// 	}
	
// 	string op="";
// 	solve(ip,op);
// 	sort(v.begin(),v.end());
// 	for(int i=0;i<v.size();i++){
// 		cout<<v[i]<<endl;
// 	}
	
// 	return 0;
// }
