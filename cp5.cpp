
#include<iostream>
using namespace std;

int main()
{
	int n,i=0,count=0;
	char a[n][20];
	
	cin>>n;
	
	while(i<n)
	{
		cin>>a[i];
		int j=0;
		while(a[i][j]!='\0')
		{
		
			if(a[i][j]=='c'&&a[i][j+1]=='h'||a[i][j]=='h'&&a[i][j+1]=='e'||a[i][j]=='e'&&a[i][j+1]=='f')
	       { 
	         count++; break;
	         j++;
			   }
			   i++;	
		}
			
			
		}
		cout<<count;
		return 0;	
}
	
	

