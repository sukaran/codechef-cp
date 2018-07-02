#include<iostream>
#include<string.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i,k;
	string s;
	cin>>n>>k;
	cin>>s;
	int ucount=0,lcount=0;
	
	
	for(i=0;i<n;i++)
	{
			
	if(s[i]<91 && s[i]>64 )
	{
		ucount=ucount+1;
	}
	
	else
	{
		lcount=lcount+1;
	}
	
	
    }
	
	
    if(lcount<=k && ucount>k)
		    {
		        cout<<"brother\n"<<endl;
		    }
	else if(ucount<k && lcount>=k)
	        {
		        cout<<"chef\n"<<endl;
	        }
		
	
	else if(ucount<=k && lcount<=k)
	{
		cout<<"both\n"<<endl;
	}
	else
	{
		cout<<"none\n"<<endl;
	}
	
}}
