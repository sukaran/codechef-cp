#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int sum=0,p[n],q[n],d[n],k[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>p[i]>>q[i]>>d[i];
		}	
		
		for(int i=0;i<n;i++)
		{
			k[i]=(d[i]/100)*p[i]+p[i];
			
			k[i]=k[i]-(d[i]*k[i])/100;	
			k[i]=p[i]-k[i];	
		    k[i]=k[i]*q[i];
		    cout<<k[i];
		}
		cout<<sum<<endl;
		
		
		
	}
}
