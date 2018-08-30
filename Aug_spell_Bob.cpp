#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	long int t;
	cin>>t;
	
	while(t--)
	{
		char u[3],n[3];
		int i;
		
	
			cin>>u;
			
		
		
			cin>>n;
		string s0="bob";
		string s1="obb";
		string s2="bbo";
		
		if((strcmp(u,s0.c_str())==0)||(strcmp(u,s1.c_str())==0)||(strcmp(u,s2.c_str())==0))
		{
			cout<<"yes\n"<<endl;
			
		}
		else
		{
		
			if(u[0]!='b' && u[0]!='o')
			{
				u[0]=n[0];
			}
			
			if(u[1]!='b' && u[1]!='o')
			{
				u[1]=n[1];
			}
			
			if(u[2]!='b' && u[2]!='o')
			{
				u[2]=n[2];
			}
			
			if((strcmp(u,s0.c_str())==0)||(strcmp(u,s1.c_str())==0||(strcmp(u,s2.c_str())==0)))
			{
				cout<<"yes\n"<<endl;
			
			}
			else
			{
				cout<<"no\n"<<endl;
			}
		}
		
	}
		return 0;
	}
