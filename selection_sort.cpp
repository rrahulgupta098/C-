#include<bits/stdc++.h>
using namespace std;
int main(){
//insertion
//	int N;
//	cin>>N;
//	int A[N];
//    for(int i=0;i<N;i++) cin>>A[i];
//    int swap_count=0;
//for(int i=0;i<N;i++){
//	for(int j=i-1;j>=0;j--){
//		if(A[j]>A[j+1]){
//			swap(A[j],A[j+1]);
//			swap_count++;
//		}else{
//			break;
//		}
//	}
//}
//cout<<swap_count;
//for(int i=0;i<N;i++) cout<<A[i]<<endl;

//Selection

	int n;
	cin>>n;
	int arr[n];
 int swap_count=0;
    for(int i=0;i<n;i++) cin>>arr[i];
 for(int i=0;i<n-1;i++){
 	int min=i;
 	int temp=min;
	 for(int j=i+1;j<n;j++){
 		if(arr[min]>arr[j]){
 			min=j;
		 }
	 }
	 if(temp!=min){
	 swap(arr[min],arr[i]);
swap_count++;
	 }
	 
 }
cout<<swap_count;
 //for(int i=0;i<N;i++) cout<<A[i]<<endl;

    return 0;
}
