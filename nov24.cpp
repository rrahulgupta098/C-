#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin>>N;
int a[N];
for(int i=0;i<N;i++)cin>>a[i];

for(int i=0;i<N;i++){
	int left_max=INT_MIN;
	for(int j=0;j<=i;j++){
		if(left_max<a[j]){
			left_max=a[j];
		}
	}
	
	int right_max=INT_MIN;
	
	for(int k=i;k<N;k++){
		if(right_max<a[k]){
			right_max=a[k];
		}
	}
int ans=ans+(min(left_max,right_max)-a[i])*2;	
	
}
cout<<
return 0;
}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int n; 
//    cin>>n;
//    int A[n];
//
//    for(int i=0;i<n;i++) cin>>A[i];
//
//    int ans=0;
//    int left_max[n];
//    int mx=A[0];
//
//    for(int i=0;i<n;i++)
//    {
//        if(A[i] > mx)
//        {
//            mx=A[i];
//        }
//        left_max[i]=mx;
//    }
//
//    mx=A[n-1];
//    int right_max[n];
//    for(int i=n-1;i>=0;i--)
//    {
//        if(A[i] > mx)
//        {
//            mx=A[i];
//        }
//        right_max[i]=mx;
//    }
//
//
//
//    for(int i=0;i<n;i++)
//    {
//        // left_max= find max in 0....i
//        // right_max=..... find max in i....n-1
//        int left_max_i=left_max[i];
//        // for(int j=0;j<=i;j++)
//        // {
//        //     if(A[j] > left_max)
//        //     {
//        //         left_max=A[j];
//        //     }
//        // }
//
//        int right_max_i=right_max[i];
//        // for(int j=n-1;j>=i;j--)
//        // {
//        //     if(A[j] > right_max)
//        //     {
//        //         right_max=A[j];
//        //     }
//        // }
//
//        ans+=(min(left_max_i,right_max_i) -A[i]);
//    }
//
//    return 0;
//}
