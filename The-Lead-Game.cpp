#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int i,si[100],ti[100],sum1=0,sum2=0,n,lead[100],j,temp;
	cout<<"enter the number of rounds"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"enter the scores of players 1 and 2\n"<<endl;
	cin>>si[i]; cin>>ti[i];
    }
    
    
 for(i=0;i<n;i++)   	
 
 {
 sum1+=si[i];
}
		
	
	
    for(i=0;i<n;i++)
    	{
		sum2+=ti[i];
    }
    	
    	
    
	
    if(sum2>sum1)
    {
    	cout<<"player2"<<endl;
    		for(i=0;i<n;i++)
	        {
		    lead[i]=ti[i]-si[i];
	        }
	}
	else
	{
		cout<<"player1"<<endl;
		for(i=0;i<n;i++)
	        {
		    lead[i]=si[i]-ti[i];
	        }
	}
	

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(lead[j]>lead[j+1])
			{
				temp=lead[j];
				lead[j]=lead[j+1];
				lead[j+1]=temp;
			}
		}
	}
	

	
	cout<<lead[n-1]<<endl;
	
}
