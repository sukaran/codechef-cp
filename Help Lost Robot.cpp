#include<iostream>
using namespace std;

int main()
{
	int t,x1,y1,x2,y2;
	
	cin>>t;
	
	while(t--)
	{
		
		cin>>x1>>y1>>x2>>y2;
		
		if((x2-x1==0) && (y2-y1!=0)&&(y2>y1)) 
		{
			cout<<"up"<<endl;
		}
		
		else if((x2-x1!=0)&&(y2-y1==0)&&(x2>x1))
		{
			cout<<"right"<<endl;
		}
		
		else if((x2-x1!=0)&&(y2-y1==0)&&(x1>x2))
		{
			cout<<"left"<<endl;
		}
		
		else if((x2-x1==0)&&(y2-y1!=0)&&(y1>y2))
		{
			cout<<"down"<<endl;
		}
		
		else
		{
			cout<<"sad"<<endl;
		}
	}
}
