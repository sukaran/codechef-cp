#include<iostream>
#include<string.h>
using namespace std;

int main()
{

		int n;
		cin>>n;
		string k[n];
		string c;
		static int count=0;
		
		for(int i=0;i<n;i++)
		{
			cin>>k[i];
		}
		
		int a=0,b=0,d=0;
	
		
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<strlen(k[i].c_str());j++)
			{
				c=k[i];
				if(c[j]=='c')
				{
					if(c[j+1]=='h')
					{
					count++;
					break;
				}}
				
				
				else if(c[j]=='h')
				{
					if(c[j+1]=='e')
				{
					count++;
					break;
				}}
				
				else if(c[j]=='e')
				{
					if(c[j+1]=='f')
					{
					count++;
					break;
				}}
				
				
					
	
			}
		}
		cout<<count<<endl;
			
	}
	
	

