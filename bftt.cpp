#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string n;
		int count=0;
		cin>>n;
		int k=strlen(n.c_str());
		for(int i=0;i<k;i++)
		{
			if(n[i]=='3')
			{
				count++;
			}
		}
		if(count>=3)
			{
				cout<<n;
			}
			else
			{
			while(count==3)
			{
					n+=1;
			for(int i=0;i<k;i++)
		{
			if(n[i]=='3')
			{
				count++;
			}
		}
			}
				
			}
		if(count>=3)
			{
				cout<<n;
			}
			
}}
