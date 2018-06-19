#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int i,n,j,sum[10],a[10];
	cout<<"enter the number of contestants\n"<<endl;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"enter 0-1 for cotstants\n"<<endl;
		for(j=0;j<5;j++)
		cin>>a[j];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		
		{
		sum[j]+=a[j];	
		}
		
		
}
	for(i=0;i<3;i++)
	{
	
	switch(sum[i]){
		case 0:
			cout<<"beginner"<<endl; break;
		case 1:
			cout<<"junior "<<endl;  break;
		case 2:
			cout<<"middle"<<endl; break;
		case 3:
			cout<<"senior"<<endl;  break;
		case 4:
			cout<<"jeff dean"<<endl;  break;
			
		
}}}
