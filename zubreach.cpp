#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int f=0;
		f++;
		int countL=0,countU=0,countR=0,countD=0;
		int M,N;
		cin>>M>>N;
		int X,Y;
		cin>>X>>Y;
		
		int k;
		cin>>k;
		
		char a[k];
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
		}
	
		for(int i=0;i<k;i++)
		{
			if(a[i]=='L')
			{
				countL++;
			}
			if(a[i]=='U')
			{
				countU++;
			}
			
			if(a[i]=='R')
			{
				countR++;
			}
			if(a[i]=='D')
			{
				countD++;
			}
} 
                        int x=countR-countL;
                        int y=countU-countD;

			if((X==x)&&(Y==y))
			{
				cout<<"Case "<<f<<":REACHED\n";
			}
                
                
	        	else if(x<0 || x>M|| y<0   ||y>N)
			{
				cout<<"Case "<<f<<":DANGER\n";	
			}
			
	        
			
			else
			{
				cout<<"Case "<<f<<":SOMEWHERE\n";
			}
			
		
		
		
		}
		return 0;
	}
	
	
	

