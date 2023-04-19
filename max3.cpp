#include <bits/stdc++.h>

using namespace std;

int main(){
int p1,p2,p3,a,b,c;
cin>>a>>b>>c;

//for large;
if(a>b && a>c){
	
	p3=a;
}else if(b>a && b>c){
	p3=b;
}else {
	p3=c;
}

//for small;

if(a<b && a<c){
	p1=a;
}else if(b<a && b<c){
	p1=b;
}else{
	p1=c;
}
 
//for mid

if(a!=p1 && a!=p3){
	p2=a;
}else if(b!=p1  && b!=p3){
	p2=b;
}else{
	p2=b;
}

cout<<p1<<p2<<p3;

return 0;

}
