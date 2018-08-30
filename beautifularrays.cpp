#include<iostream>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[n],c[n];
		long long int pr=1;
		int flag=0;
		for(int i=0;i<n;i++)
		{
			
			cin>>a[i];
			c[i]=a[i];
			pr*=a[i];
		}
		for(int i=0;i<n;i++)
		{	
			if(c[i]==pr)
			{
				flag=1;
				break;
				}	
			else
			{
				flag=0;
			}
			
		}
		
		if(flag==1)
		{
			cout<<"yes"<<endl;
			
			}	
		else
		{
			cout<<"no"<<endl;
		}
		
		
		
		
		
	}
}
