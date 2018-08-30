#include<iostream>
using namespace std;


int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,k,tempp,f;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];	
		}
		cin>>k;
		k=k-1;
		int temp=a[k];	
		
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					tempp=a[j];
					a[j]=a[j+1];
					a[j+1]=tempp;
					
				}
			}
		}
		
		for(int i=0;i<n;i++)
		{
			
			/*cout<<a[i]<<" ";*/
			if(a[i]==temp)
			{
				i+=1;
				cout<<i<<endl;
				break;
			}
		}
	
	}
	
	
	
	
}
