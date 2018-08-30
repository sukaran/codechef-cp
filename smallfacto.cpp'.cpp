#include<iostream>
using namespace std;

int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
	
}

int main()
{
	int t;
	cin>>t;
	if(1<=t<=100)
	{
	
	while(t--)
	{
		int n;
		cin>>n;
		if(1<=n<=100)
		
		cout<<fact(n)<<endl;
		
		
	}
	
}
return 0;
}

