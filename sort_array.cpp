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
   int M; cin>>M;
   //sort(A,A+N);
//   int i=0;int j=N-1;
//   while(i<j){
//   	if(A[i]+A[j]==M){
//   		cout<<"Deepak should buy roses whose prices are "<<A[i]<<" and "<<A[j]<<"."<<endl;
//   		
//	   }
//	   i++;j--;
//   }
   for(int i=0;i<N;i++){
   	for(int j=i+1;j<N;j++){
   		if(A[i]+A[j]==M){
   			cout<<"Deepak should buy roses whose prices are "<<A[i]<<" and "<<A[j]<<"."<<endl;
		   }
	   }
   }
   
	}
return 0;	
}
	
	


//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//int N;cin>>N;
//int A[N];int B[N];int C[N];
//for(int i=0;i<N;i++)cin>>A[i];
//for(int i=0;i<N;i++)cin>>B[i];
//sort(A,A+N);
//sort(B,B+N);
//cout<<"[";
//int k=0;
//for(int i=0;i<N;i++){
//	for(int j=0;j<N;j++){
//		if(A[i]==B[j]){
//          //cout<<i<<" ";	
//		  C[k]=A[i];	
//		k++;
//			//cout<<A[i]<<", ";
//			//C[i]=A[i];
//			B[j]=0;
//			break;
//		}
//	}
//}
//
//for(int i=0;i<k-1;i++){
//	cout<<C[i]<<", ";
//}
//cout<<A[k];
//cout<<"]";
//
////for(int i=0;i<N;i++)cout<<C[i]<<" ";
//
//return 0;
//}
