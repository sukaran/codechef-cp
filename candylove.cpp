#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	
		int sum=0;
		
		for(int i=0;i<n;i++)
		{
			sum+=a[i];	
		}	
	if(sum%2==0)
	{
	
	int	k=sum/2+1;
	int h=sum/2-1;
	
	if(abs(k-h)==1)
	{
		cout<<"YES"<<endl;
		
	}
	else
	{
		cout<<"NO"<<endl;
	}
	
	
}
	else
	{
		
		
		int	k=sum/2+1;
		int h=sum/2;
		
		if(abs(k-h)==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	
	
	}
	
}
}
