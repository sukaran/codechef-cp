#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
	
	int i,n,m;
	char s[100],temp;
	
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	
	
	
	if(n%2==0)
	{
	for(i=0;i<n;i++)
	{
		temp=s[i];
		s[i]=s[i+1];
		s[i+1]=temp;
		i++;
	}
	}
	else
	{
		for(i=0;i<(n-1);i++)
	{
		temp=s[i];
		s[i]=s[i+1];
		s[i+1]=temp;
		i++;
	}
	}
	
	
	for(i=0;i<n;i++)
	{
	
		m=s[i]-97;
		s[i]=s[i]+(25-2*m); 
			
	}
	
	for(i=0;i<n;i++)
	{
	cout<<s[i];
	}	
		
	}
}
