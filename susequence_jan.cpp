// CPP program to initialize a vector like
// an array.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector <string> v;
v.push_back("red","green" ,"black" ,"white", "Pink");
	for(int i=0;i<v.size();i++){
	cout<<v[i]<<endl;
}


	return 0;
}

//
//
//#include<bits/stdc++.h>
//using namespace std;
//
//void print(vector<int> v){
//	for(int i=0;i<v.size();i++){
//	cout<<v[i]<<endl;
//}
//}
//
//int main() 
//{
//vector<int> v {1, 2 ,5, 7, 4, 3, 6};
////v.push_back('n');
////v.push_back('b');
////v.push_back('j');
////v.push_back('i');
////sort(v.begin(),v.end());
////print(v);
////sort(v.begin(),v.end());
//for(int i=0;i<v.size();i++){
//	cout<<v[i]<<endl;
//}
//
////int x;cin>>x;
////while(x!=-1){
////	v.push_back(x);
////	cin>>x;
////}
////for(int i=0;i<v.size();i++){
////	cout<<v[i];
////}
//
//return 0;
//}
