#include<iostream>
using namespace std;
int main(){
int size;
cin>>size;
int arr[size];
for(int m=0;m<size;m++){
	cin>>arr[m];
}
//int arr[]={7,8,5};
int sum=0;
for(int j=0;j<size;j++){
int n=arr[j];
int flag=0;
for(int i=2;i<n;i++)
{
		if(n%i==0){
			flag=1;
		}
}
	if(flag==1){
		//cout<<"not prime";
	}else{
		//cout<<"prime"<<arr[j]<<endl;
		sum=sum+arr[j];
	}
		
}
cout<<sum;

return 0;
}

