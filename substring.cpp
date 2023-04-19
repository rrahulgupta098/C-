#include<bits/stdc++.h>
using namespace std;
int main(){
	string str="8jflksdjfsd";
	//cout<<
	sort(str.begin(),str.end());
	cout<<str<<endl;
	
	for(int i=0;i<str.length();i++){
		for(int j=i;j<str.length();j++){
		cout<<str.substr(i,j-i+1);   //decrease one for loop
//			for(int k=i;k<=j;k++){
//				cout<<str[k]<<" ";
//			}

		cout<<endl;	
		
		}
		
	}
	cout<<"-----";

//Subarray	
	
//int count=0;
//int A[]={5,4,-1};
//	for(int i=0;i<3;i++){
//		for(int j=i;j<3;j++){
//			for(int k=i;k<=j;k++){
//				cout<<A[k]<<" ";
//			}
//		cout<<endl;	
//		count++;
//		}
//		
//	}
//	cout<<"-----"<<count;
	
	return 0;
}
