#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		long int i,k,sum=0,kum=0;
		
		cin>>n>>k;
		
		int tm[n],d[n];
		
		for( i=0;i<n;i++)
		{
			cin>>tm[i]>>d[i];
		}
		
		/*for( i=0;i<n;i++)
		{
			cm[i]=tm[i];
		}*/
	/*	for(i=0;i<n;i++)
		{
			
			tm[i+1]=tm[i]+tm[i+1];
		
	}*/
	
		
	for(i=0;i<n;i++)
		{/*{
			if(k!=0)
			{
			if((tm[i]-k)>=0)
			{
				kum+=(tm[i]-k)*d[i];
			}*/
		if(k>=tm[i])
		{
			k=k-tm[i];
		}	
		
		else
		{
			kum+=(tm[i]-k)*d[i];
			k=0;
		}
	}
		cout<<kum<<endl;
		
		
		
	}
	
	return 0;
}
