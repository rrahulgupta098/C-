#include<bits/stdc++.h>
using namespace std;
int nthtraingle(int n){
    if(n==0){
        return 0;
    }
    return nthtraingle(n-1)+n;
}
int main(){
int n;cin>>n;
cout<<nthtraingle(n);
	return 0;

}
