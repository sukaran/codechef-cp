#include<iostream>

using namespace std;
int main()
{
	long int t;
	
	
	
	cin>>t;
	
	while(t--)
	{
	int x[30],i,flag=0;  
	    for(i=0;i<30;i++)
	    {
	    	cin>>x[i];
		}
	
	for(i=0;i<30;i++)
	    if(x[i+0]==1 &&x[i+1]==1 &&x[i+2]==1 &&x[i+3]==1 &&x[i+4]==1 &&x[i+5]==1)
		{
			flag=1;
			break;
			
		}
		else
		{
			flag=0;
		}
	
	    if(flag==1){
	    	cout<<"#coderlifematters\n"<<endl;
		}
	    else
	    {
	    	cout<<"#allcodersarefun\n"<<endl;
		}
	
	
}}
