#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int A[N];
	for(int i=0;i<N;i++) cin>>A[i];
	
	
//Find max
	int max=INT_MIN;
	for(int i=0;i<=7;i++){
		if(max<A[i]){
			max=A[i];
		}
		}
		
//Fill count array
int count[max+1]={0};
for(int i=0;i<N;i++){
	count[A[i]]++;
}



//update count array
for(int i=1;i<=max;i++){
	count[i]=count[i]+count[i-1];
}

	
	int B[N]={0};
for(int i=N-1;i>=0;i--){
	B[--count[A[i]]]=A[i];
}	
	
	for(int i=0;i<N;i++){
		A[i]=B[i];
	
}

	for(int i=0;i<N;i++){
		cout<<A[i]<<" ";
	}
	
//	int size = sizeof(arr)/sizeof(arr[0]);
//	int max=INT_MIN;
//	for(int i=0;i<=7;i++){
//		if(max<A[i]){
//			max=A[i];
//		}
//		}
//	cout<<max;
//	cout<<endl;
//	int freq[max+1]={0};
//	for(int i=0;i<max+1;i++){
//				freq[A[i]]++;
//	}
//
//cout<<"Hi";
//int i=0,j=0;
//while(i<=max){
//	if(freq[i]>0){
//		A[j]=i;
//		freq[i]--;
//		j++;
//	}else{
//		i++;
//	}
//}
//
//	for(int k=0;k<=7;k++){
//		cout<<A[k]<<" ";
//	}	

//doubt
//	int res[9]={0};
//for(int i=0;i<max;i++){
//	int j=0;
//	while(freq[i]--){
//		cout<<"fre"<<i<<endl;
//		res[j]=i;
//		j++;
//	}
//}





//	for(int i=0;i<max;i++){
//		cout<<freq[i]<<" ";
//	}
	
	return 0;
}

