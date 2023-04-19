#include <iostream>
#include <set>
using namespace std;
int main(){
multiset<int> mt;
 mt.insert(1);    
 mt.insert(4);
 mt.insert(3);
 mt.insert(2);
 mt.insert(2);
 mt.insert(2);
 mt.insert(2);
//mt.erase(2); 
 multiset<int> :: iterator it;
it=mt.find(2);
mt.erase(it);
 for(it=mt.begin();it!=mt.end();it++){
cout<<*it<<" ";
 }
//  set<int> :: iterator  it;
// set<int> s;
//  s.insert(1);    
//  s.insert(4);
//  s.insert(3);
//  s.insert(2);
//  set<int> :: iterator  it;
//  for(it=s.begin();it!=s.end();it++){
//     cout<<*it<<" ";
//  }
// s.erase(4);
// for(auto i : s){
//     cout<<i<<" ";
// }
    return 0;
}