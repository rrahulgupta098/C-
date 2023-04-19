#include <iostream>
#include <vector>
using namespace std;
bool isprime(int num){
for(int j=2;j<num;j++){
    
        if(num%j==0){
            return false;
        }
}
return true;
}

// int numsum(int n){
//    int s;
//     while(n!=0){
//         int d=n%10;
//         n=n+d;
//         n=n/10;
//     }
//     return s;
// }

// int factsum(int num){

// }

int main() {
    vector<int> v;
    cout<<"Hello World!";
    int n=24;
    //int num_sum=numsum(n);
    cout<<"Hello World!";
   int i=2;
    while(n>1){
if(n%i==0){
    v.push_back(i);
    n=n/i;
}else{
    i++;
}
   }

   vector<int> v1;
   for(int j=0;j<v.size();j++){
    if(isprime(v[j])){
v1.push_back(v[j]);
    }
   }

int sum=0;
for(int j=0;j<v1.size();j++){
    int num=v1[j];
    
    while(num!=0){
         int d=num%10;
        sum=sum+d;
        num=num/10;
    }
}

//cout<<num_sum<<sum;
// if(num_sum==sum){
//     cout<<"1";
// }else{
//     cout<<"0";
// }
   
    cout<<"Hello World!";
   for(int j=0;j<v.size();j++){
   cout<<v[j]<<" "; 
   }


      for(int j=0;j<v1.size();j++){
   cout<<v1
   [j]<<" "; 
   }
    return 0;
}
