#include<bits/stdc++.h>
using namespace std;
//ap1
// void replacepi(string str){
// int temp=0;
// for(int i=0;i<str[i]!='\0';i++){
// temp++;
//  if(str[i]=='p' && str[i+1]=='i'){
//     str.erase(i,i+1);
// str.insert(i,"3.14");
//  }
// }
// cout<<str<<endl<<temp;
// }

//ap2
void replacepi1(string str){
string op="";
for(int i=0;i<str.size();i++){
if(i+1 < str.size() && str[i]=='p' && str[i+1]=='i'){
 op=op+"3.14";
 i++;
        }
else{
    op=op+str[i];
       }
}
cout<<op<<endl;
}

int main(){
int n;cin>>n;
for(int i=0;i<n;i++){
    string str;cin>>str;
    replacepi1(str);
}

	return 0;
}
