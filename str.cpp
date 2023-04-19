#include <bits/stdc++.h>
using namespace std;
int main()
{
	
   string str;
   cin>>str;

   long count=0;
   long mx=INT_MIN;
   for(int i=0;i<str.length();i++){
   	if(str[i]=='a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u' || str[i] =='A' || str[i] =='E' || str[i] =='I' || str[i] =='O' || str[i] =='U'){
   		count++;
   		//n%2==1?printodd(n-2):printodd(n-1);
   		mx>count?mx=mx:mx=count;
		  // mx=max(mx,count);
	   }else{
	   	
	   	count=0;
	   }
   }
   cout<<mx;
   
   
return 0;
}   
/*



    // assigning value to string s
    string s = "geeksforgeeks";
 
    int n = s.length();
 
    // declaring character array
    char char_array[n];
    // copying the contents of the
    // string to char array
    strcpy(char_array, s.c_str());
 
   
    for (int i = 0; i < s.length(); i++)
   {
	 cout << char_array[i]<<endl;
   }
*/


