// Your First C++ Program

#include <bits/stdc++.h>
using namespace std;

//void hello(){
//	cout<<"I am okay";
//}
//
//int sum(int a,int b){
//	int c=a+b;
//	return c;
//}
//int sdigit(int n){
//	int temp=0,sum=0;
//	while(n!=0){
//	temp=n%10;
//	sum=sum+temp;
//	n=n/10;
//	}
//	return sum;
//}

void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main() {
pair<int,string> p;
p.first=10;
p.second="sd";
cout<<p.first;
cout<<p.second;
//int a1=1;
//int a2=2;
//	swap(a1,a2);
//	cout<<max(a1,a2);
//	cout<<a1<<a2;

	
//cout<<swap(1,2);
//	//cin>>
//	int s1=sdigit(123);
//	int s2=sdigit(523);
//	cout<<s1+s2;
	//hello();
	// result=sum(1,2);
	//cout<<result;
//    cout << "Hello World!";
//    pair<int,string> p;
//    p={2,"sdfs"};
//    cout<<p.first<<p.second;
//    pair<int,string> &p1=p;
//    p1={3,"dhfs"};
//	cout<<p.first<<p1.second;
//    
    return 0;
}
