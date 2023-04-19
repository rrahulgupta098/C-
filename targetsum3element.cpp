#include <bits/stdc++.h>

using namespace std;


void triplet(int x,int y,int z){
	////Mr.almoalem

//Program to arrange three numbers

int p1, p2, p3;

//cout<<"Enter a number : "; cin >>x;
//
//cout<<"\nEnter another number : "; cin >>y;
//
//cout<<"\nEnter another number : "; cin >>z;

//___________________________________ high number

if(x > y && x > z){

p1 = x;

}

else if(y > x && y > z){

p1 = y;

}

else if(z > x && z > y){

p1 = z;

}

//___________________________________ low number

if(x < y && x < z){

p3 = x;

}

else if(y < x && y < z){

p3 = y;

}

else if(z < x && z < y){

p3 = z;

}

//___________________________________ Mid number

if( p1 != x && p3!= x ){

p2 = x;

}

else if( p1 != y && p3!= y ){

p2 = y;

}

else if( p1 != z && p3!= z ){

p2 = z;

}

cout<<p3<<", "<<p2<<" and "<<p1<<endl;
}

int main(){
	
int n; cin>>n;
int A[n];
for(int i=0;i<n;i++) cin>>A[i];
sort(A, A + n);
int sum;cin>>sum;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				if (A[i] + A[j] + A[k] == sum){
					 triplet(A[i],A[j],A[k]);
					
				}
			}
		}
	}	



return 0;

}
