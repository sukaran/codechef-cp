#include<iostream>
using namespace std;

int main()
{
	unsigned long int t;
	cin>>t;
	
	while(t--)
	{
	unsigned long int i=0,d[10000];
	long int a,b,n;
	double pa,pb,pt,count=0,count1=0;
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
