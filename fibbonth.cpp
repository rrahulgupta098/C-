#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int main(){
int a=0;
int b=1;
int i;
int N;
cin>>N;
int c=0;
i=c;
int flag=0;
while(i<=N){
 	 c=a+b;	
	a=b;
	b=c;
	i=i+a;;
	
	if(c==N){

	}
flag=1;
}

//cout<<c;
if(flag==1)
{
	cout<<"Yes";
}else{
	cout<<"No";
}

return 0;
}

//   int a,b,c;
//   cin>>a>>b>>c;
//   int roots =(-b - sqrt(b^2 - 4*a*c))/2*a; //, (-b - sqrt(b^2 - 4ac))/2a
//   cout<<roots;
//	return 0;
//}
//
//d = sqrt(b*b-4*a*c);
//
//x1 = (-b+d)/(2*a);
//x2 = (-b-d)/(2*a);
//
//if(d>0)
//{
//	cout<<"Real and Distinct"<<endl;
//	if(x1<x2)
//	{
//		cout<<x1<<" "<<x2;
//	}
//	else
//	{
//		cout<<x2<<" "<<x1;
//	}
//}
//
//else if(d=0)
//{
//	cout<<"Real and Equal"<<endl;
//	if(x1<x2)
//	{
//		cout<<x1<<" "<<x2;
//	}
//	else
//	{
//		cout<<x2<<" "<<x1;
//	}
//}
//
//else
//{
//	cout<<"Imaginary"<<endl;
//}
//return 0;



//int main(){
//   int N;
//   cin>>N;
//   int N1=N;
//   int p=1;
//   int dec=0;
// while(N1!=0){
// 	int d=N1%10;
// 	dec=dec+d*p;
// 	p=p*8;
// 	N1=N1/10;
// }
 //cout<<dec;
 
// int N2=dec;
// int bi=0;
// int p1=1;
// while(N2!=0){
// 	int d=N2%2;
// 	bi=bi+d*p1;
// 	p1=p1*10;
// 	N2=N2/2;
// }
// cout<<bi;
// 
//	return 0;
//}




//int F(int n)
//{
//	if(n<=1){
//		return n;
//	}
//	
//	return F(n-1)+F(n-2);
//	
//}
//		
//int main(){
//    int N;
//    cin>>N;
//    cout << F(N);
//    return 0;
//}

//Fibonacci Series using Recursion
//#include<bits/stdc++.h>
//using namespace std;
// 
//int F(int N)
//{
//    if (N <= 1)
//       {
//        return N;
//       }
//       
//    return F(N-1) + F(N-2);
//}
// 
//int main ()
//{
//    int N = 5;
//    cout << F(N);
//    return 0;
//}

//if(N>=0 && N<=1000){
//
//long long a[N];
//
//a[0]=0;
//a[1]=1;
////cout<<a[0]<<" ";
////cout<<a[1]<<" ";
//for(int i=2;i<=N;i++){
//
//	a[i]=a[i-1]+a[i-2];
////cout<<a[i]<<" ";
//} 
//cout<<a[N];
//
//}

//

