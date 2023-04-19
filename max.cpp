#include <bits/stdc++.h>
using namespace std;

int main(){

int a[]={1,2,4,1,5};
int min=a[0];
int max=a[0];
	for(int i=0;i<a.length;i++){
		if(max<a[i]){
			max=a[i];
			}
	else
	{
		if(min>a[i]){
			min=a[i];
			}
	}
	}
	
}
   sort(a,a+n);
   return {a[0],a[n-1]};

 
