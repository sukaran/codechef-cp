#include<iostream>

using namespace std;


int main()
{
	
	int t,i,n,k;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		cin>>k;
		int a[n],f=0;
	
		
		for(i=0;i<n;i++)
		{
				cin>>a[i];
				a[i]+=k;
				
					if(a[i]%7==0)
        	{
        		f++;
        		
			}
		
		}
        cout<<f;	
	 } 
	
	
return 0;
}
