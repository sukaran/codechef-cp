#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
	float d1,d2,t1,t2;
    long int n,t,i,j,x1,x2,x3,v1,v2;
	cin>>t;
	
	while(t--)
	{
	cin>>x1;
	cin>>x2;
	cin>>x3;
	cin>>v1;
    cin>>v2;
		
		
		
		d1=abs(x1-x2);
		d2=abs(x2-x3);
		
		
		t1=(float)d1/v1;
		t2=(float)d2/v2;
		
		if(t1>t2)
		{
			cout<<"Kefa\n"<<endl;
		}
		else if(t2>t1)
		{
			cout<<"Chef\n"<<endl;
		}
		else
		{
			cout<<"Draw\n"<<endl;
		}
		
	}
	
	
    	
	
}



