#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
	int i=0,n,count=0,d[100],count1=0,a,b;
	double pa,pb,pt;
	cin>>n>>a>>b;
	
	for(i=0;i<n;i++)
    {
    	cin>>d[i];
		
			
	}
	
	for(i=0;i<n;i++)
		{
			if(d[i]==a)
			{
			count+=1;
		    }
			
		}
	
	for(i=0;i<n;i++)
		{
			if(d[i]==b)
			{
			count1+=1;
			}
		}
    
	pa=(double)count/n;
	pb=(double)count1/n;
	pt=pa*pb;
	cout<<pt<<endl;
	}
}
