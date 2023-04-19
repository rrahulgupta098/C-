#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<"- ";
		}
		cout<<"* ";
		//cout<<endl;
		for(int k=1;k<i;k++)
		{
			cout<<"- ";
		}
		
		for(int z=1;z<n;z++)
		{
			if(z==1)
			{
				cout<<"* ";
			}
			if(i+z==n)
			{
				cout<<"* ";
			}
			else
			{
				cout<<"- ";
			}
		}
		cout<<endl;
	
	}
	
}
