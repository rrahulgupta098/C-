#include<bits/stdc++.h>
using namespace std;

//2 pointer
// bool palindrome(int s,int e,string str){
// if(s>=e){
// return true;
// }
// if(str[s]!=str[e]){
//     return false;
// }
// return palindrome(s+1,e-1,str);
// }

// bool palindrome(int i,int n,string str){
//     if(i>=n/2){
//         return true;
//     }
// if(str[i]!=str[n-i-1]){
//     return false;
// }
// return palindrome(i+1,n,str);
// }
vector<string> v;
void permutation(string ip,string op){
if(ip.empty()){
            //cout<<op<<" ";
            v.push_back(op);
            return ;
        }

    for(int i=0;i<(int)ip.size();i++){
        
        string ROS=ip.substr(0,i)+ip.substr(i+1);
        permutation(ROS,op+ip[i]);
    }
}

int main(){
string str="cab";
string op="";
permutation(str,op);
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    if(v[i]>str)
    cout<<v[i]<<" ";
}
v.clear();


//  string str="nitin";
//  int n = str.size(); 
//  cout<<palindrome(0,n,str);	
	return 0;
}