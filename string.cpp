#include <bits/stdc++.h>
using namespace std;
int main()
{
	
int A[9]={1,2,3,4,5,6,7,8,9};
int B[3][3];
int l=0;
	  for(int i=0;i<2;i++)
	  {
	  	for(int j=0;j<2;j++)
	  	{
	  		//cout<<"\ns["<<i<<"]["<<j<<"]=  ";
	  		B[i][j]=A[l];
	  		l++;
		}
	  }
	  
	          //Calculates sum of each column of given matrix  
        for(int i = 0; i < 3; i++){  
             int sumCol = 0;  
            for(int j = 0; j < 3; j++){  
              sumCol = sumCol + A[j,i];  
            }   
			}
			
			
return 0;
}   
