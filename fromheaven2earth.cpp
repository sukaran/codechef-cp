#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t,n;
	float v1,v2;
	cin>>t;
	double t1,t2;
	while(t--)
	{
	cin>>n>>v1>>v2;
	
	/*for elevator*/
	t1=(n*sqrt(2))/v1;
	
	/*#for stairs*/
	t2=(2*n)/v2;
	
	if(t1<t2)
	{
		cout<<"Stairs"<<endl;
	}
	else if(t2<t1)
	{
		cout<<"Elevator"<<endl;
	}
	}
}
