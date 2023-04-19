#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--){
		int N;cin>>N;
		int A[N];
  for(int i=0;i<N;i++){
  	cin>>A[i];
  }		
   int target; cin>>target;
   cout<<endl;
   sort(A,A+N);
      int i=0;int j=N-1;
      int p1=-1,p2=-1;
   while(i<j)
	{
		if(A[i]+A[j]==target)
		{
			p1=A[i];
			p2=A[j];
			i++;
			j--;
		}
		else if(A[i] + A[j] > target)
		{
			j--;
		}
		else
		{
			i++;
		}
		
	}
	cout<<"Deepak should buy roses whose prices are "<<p1<<" and "<<p2<<"."<<endl;
   
//   int i=0;int j=N-1;
//   while(i<j){
//   	if(A[i]+A[j]==M){
//   		cout<<"Deepak should buy roses whose prices are "<<A[i]<<" and "<<A[j]<<"."<<endl;
//   		
//	   }
//	   i++;j--;
//   }
//   for(int i=0;i<N;i++){
//   	for(int j=i+1;j<N;j++){
//   		if(A[i]+A[j]==M){
//   			cout<<"Deepak should buy roses whose prices are "<<A[i]<<" and "<<A[j]<<"."<<endl;
//		   }
//	   }
//   }
   
	}
return 0;	
}
	
	
