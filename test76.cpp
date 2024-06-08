#include <stdio.h>
#include <conio.h>
int main()
{
	int a,a1;
	int n=0,t=0,sum;
	printf("Enter any no");
	scanf("%d",&a);
	a1=a;
	while(a>0)
	{
		n=a%10;    
		t=n*n*n;
		sum+=t;
		a=a/10;
	 
		
	}
	if(a1==sum)
	{
		printf("Armstrong no");
	}
	else
	{
		printf("Not armstrong no");
	}
	return 0;
}
