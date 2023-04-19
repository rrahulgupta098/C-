#include <bits/stdc++.h>
using namespace std;

int main()
{
int m,n;
cin>>m;cin>>n;
    int A[m][n];


    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)cin>>A[i][j];
    }

int  minr=0;
int minc=0;
int maxr=m-1;
int maxc=n-1;

//    int rows = sizeof(arr)/sizeof(arr[0]);
  //  int cols = sizeof(arr[0])/sizeof(arr[0][0]);
  //cout<<maxr<<" "<<maxc<<endl;

int tne=m*n;
int cnt=0;
while(cnt<tne){
	//left wall
	for(int i=minr,j=minc;i<=maxr && cnt<tne;i++){
cout<<A[i][j]<<", ";
cnt++;
	}
	minc++;
	//bottom wall
	for(int i=maxr,j=minc;j<=maxc && cnt<tne;j++){
		cout<<A[i][j]<<", ";
		cnt++;
	}
	maxr--;
	
	//rightwall
	
	for(int i=maxr,j=maxc;i>=minr && cnt<tne;i--){
		cout<<A[i][j]<<", ";
		cnt++;
	}
	maxc--;
	//top wall
	
	for(int i=minr , j=maxc;j>=minc && cnt<tne;j--){
		cout<<A[i][j]<<", ";
		cnt++;	
	}
	minr++;
	
}	
cout<<"End";
	



    return 0;
}
