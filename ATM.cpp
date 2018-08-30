#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
		float b,n;
		int k;
		cin>>k>>n;
		
		if((k%5==0 )&& 0<k<=2000  && 0<=n<=2000 &&(k+0.50<=n))
		{
			
				b=n-k-0.50;
				
			std::cout << std::fixed;
    		std::cout << std::setprecision(2);
    		std::cout << b<<endl;
			
			}
			else
			{
			std::cout << std::fixed;
    		std::cout << std::setprecision(2);
    		std::cout << n<<endl;
			}
				
		return 0;
}
