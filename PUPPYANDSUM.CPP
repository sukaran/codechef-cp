#include<iostream>
using namespace std;

int sum(int n)
{
	int s=(n*(n+1))/2;
	return s;
}
int main()
{
int t,n,d,i,s=0;	
	cin>>t;
	while(t--)
	{
		cin>>n>>d;
		for(i=0;i<d;i++)
		{
			s=sum(n);
			n=s;
		}
	cout<<s;
	}
	return 0;
	
}
