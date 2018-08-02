#include<iostream>
using namespace std;

int main()
{
	
	long int t;
	cin>>t;
	
	while(t--)
	{
		int i=0,j,a[100];
		
		
		
	
			for(j=0;j<5;j++)
			{
			
				cin>>a[j];
				i=i+a[j];
			}
		
		
		
	
		switch(i)
		{
			case 0:
				cout<<"Beginner"<<endl;break;
			case 1:
				cout<<"Junior Developer"<<endl;break;
			case 2:
				cout<<"Middle Developer"<<endl;break;
			case 3:
				cout<<"Senior Developer"<<endl;break;
			case 4:
				cout<<"Hacker"<<endl;break;
			case 5:
				cout<<"Jeff Dean"<<endl;break;
		}
	
}
}

