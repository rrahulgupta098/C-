#include<bits/stdc++.h>
using namespace std;
//int isprime(int n){
//		int flag=0;
//	for(int i=2;i*i<=n;i++){
//		if(n%i==0){
//			flag=1;
//		}
//	}
//	if(flag==1){
//		cout<<"not prime";
//	}else{
//		cout<<"prime";
//	}
//	return 0;
//}
int main(){
int n;
cin>>n;
vector<int>v; 
int i=2;

int temp_n=n;
while(n>1){
 if(n%i==0){
	n=n/i;
	v.push_back(i);
	//cout<<i<<" ";
  }
  else{
	i++;
	//cout<<"else ke";
    }	
}
//cout<<"for loop ke bhar";
for (int j = 0; j < v.size(); j++)
{
//	cout<<"for loop";
//	cout <<v[j] << " ";
}

vector<int> v1; 
 //check prime and sum
  for(int j=0;j<v.size();j++){
   int N=v[j];  
  	int flag=0;
	for(int k=2;k*k<=N;k++){
		if(N%k==0){
			flag=1;
			//break;
		}
	}
	if(flag==1){
		//cout<<"not prime";
	}else{
		//cout<<"prime";
		v1.push_back(v[j]);
		//cout <<v1[j] << " ";
	} 

}

//print number sum
int temp =temp_n;
int sum=0;
while(temp!=0){
	int d=temp%10;
	sum=sum+d;
	temp=temp/10;
//cout<<"temp";
}

//cout<<sum<<"num sum";

int sum1=0;
//print prime factor sum
for (int l = 0; l < v1.size(); l++)
{
//	cout<<"for loop";
//	cout <<v1[l] << " ";
sum1=sum1+v1[l];
}
//cout<<sum1<<"prime factor sum";

if(sum==sum1){
cout<<"1";
}
else
{
	cout<<"0";
}



	return 0;
}
