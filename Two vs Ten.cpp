#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int t,n,x;
	cin>>t;
	while(t--)
	{
		
		cin>>x;
		
		
		if(x%10==0)
		{
			cout<<"0\n";
		}
		else if(x%5==0)
		{
			cout<<"1\n";
		}
		else
		{
			cout<<"-1\n";
		}
		
	}
	
	
	
	
}
