#include<bits/stdc++.h>
using namespace std;

    void findall(vector<string> &v, int n,int oc,int cc,string s){

       if(oc==n && cc==n){
           v.push_back(s);
           return ;
       }
        if(oc<n){
           findall(v,n,oc+1,cc,s+"("); 
        }
        if(cc<oc){
            findall(v,n,oc,cc+1,s+")");
        }
    }
int main(){
          vector<string> v;
      int oc=0,cc=0;
      int n=2;
      findall(v,n,oc,cc,"");
       
    return 0; 
}