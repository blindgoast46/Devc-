#include <stdio.h>
#include <conio.h>
int main()
{
	int a;
	printf("Enter any value =");
	scanf("%d",&a);
	if(a>0)
	{
		printf("The number is positive");
	}
	if(a==0)
	{
		printf("The number is equal to 0");
	}
	else
	{
		printf("The number is negative");
	}
	return 0;
}
