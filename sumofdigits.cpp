#include <stdio.h>
 
 int sum(int n){
 	if(n < 10) return n;
 	else return (sum(n/10) + n%10);
 }
int main()
{
	int t;
	scanf ("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
 		printf("%d\n", sum(n));
	}
} 
