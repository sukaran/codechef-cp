#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string s;
		cin>>s;
		int k=strlen(s.c_str());
		for(int i=0;i<k;i++)
		{
		if((s[i]=='1')&&(s[i+1]=='0')&&(s[i+3]=='1'))
		{
			cout<<"no"<<endl;
		}
		else
		{
			cout<<"yes"<<endl;
		}
		
		
		
		
		
	}}}
	
	

