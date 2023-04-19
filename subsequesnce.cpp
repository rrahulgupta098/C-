//#include<iostream>
//using namespace std;
//
//void printSubsequence(string ip,string op)
//{
//    if(ip.empty())
//    {
//        cout<<op<<endl;
//
//        return ;
//    }
//
//    // INCLUDE
//    printSubsequence(ip.substr(1),op + ip[0]) ; //ip="kunj" -> ip.substr(1)="unj"
//    // EXCLUDE
//    printSubsequence(ip.substr(1),op);
//}   
//
//
//int main()
//{
//
//    string ip;
//    cin>>ip;
//    cout<<"-----------------------"<<endl;
//
//    printSubsequence(ip,"");
//
//
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;

void solve(string ip,string op){
	if(ip.size()==0){
		cout<<op<<endl;
		return ;
	}
	string op2=op+ip[0];
	string op1=op;
	
	
//op2.push_back(ip[0]);
//ip.erase(ip.begin()+0);
ip.erase(0,1);
solve(ip,op2);
solve(ip,op1);

	return ;
}

int main(){
string ip; cin>>ip;		
string op="";
solve(ip,op);

    return 0;
}
