#include<iostream>
using namespace std;

void bin_srch(int L[],int n,int item)
{
	int m,l,u;
	l=0;
	u=n-1;
	while(l<u)
	{
		
	
	m=(l+u)/2;
	
	if(L[m]==item)
	{
		cout<<"found "<<item<<endl;
		return;
	}
	
	else if(item>=L[m])
	{
		l=m+1;
		u=n-1;
		
	}
	else
	{
		l=0;
		u=m-1;
	}}
	cout<<"ain't found"<<endl;
}


int main()
{
	int j,temp,i,item,n;
	int a[10]={78,10,20,100,35,40,101,56,68,89};
	n=10;
	for(i=0;i<n;i++)
	cout<<a[i];
	
	cout<<"enter search item\n"<<endl;
	cin>>item;
	for(i=0;i<n-1;i++)
	{for(j=0;j<n-i-1;j++)
	{
	
	if(a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	
}}
	for(i=0;i<n;i++)
	cout<<a[i]<<"\n";
	
	bin_srch(a,n,item);
	
	
}
