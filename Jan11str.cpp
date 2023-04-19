#include <bits/stdc++.h>
using namespace std;

void print(int n){	
	if(n==1){
	cout<<n<<endl;
	return ;
}
cout<<n<<endl; // n to 1 pring
print(n-2); // 1 to n-1 
//cout<<n<<endl; // 1 to n print
}

//void even_print(int n){
//	if(n==2){
//		cout<<n<<endl;
//		return ;
//	}
//	//cout<<n<<endl;
//	even_print(n-2);
//	cout<<n<<endl;
//}
//
//
//int factorial(int n){
//	if(n==0){
//		return 1;
//	}
//return n*factorial(n-1);
//factorial(n-1);	
//}

void oddeven(int n){
	if(n==0){
		return ;
	}
	
	if(n%2!=0){
		cout<<n<<endl;
	}
	oddeven(n-1);
	if(n%2==0){
		cout<<n<<endl;
	}
}


int main()
{
int n;cin>>n;
oddeven(n);

//print(n); //1 to n
//if(n%2==1){
//	n--;
//}
//even_print(n);
//cout<<factorial(5);
//int temp=n;
//int num=n;
//if(n%2==1){
//for(int i=num;i>0;i=i-2){
//	cout<<i<<endl;
//}
//}
//if(n%2!=0)num--;
//
//for(int i=2;i<=num;i=i+2){
//	cout<<i<<endl;
//}





	
//   string str="abcd";
//   for(int i=0;i<str.length();i++){
//   	for(int j=i;j<str.length();j++){
//   		cout<<str.substr(i,j-i+1)<<endl;
//	   }
//   }
//      
return 0;
}   

