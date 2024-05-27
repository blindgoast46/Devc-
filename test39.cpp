#include <stdio.h>
#include <conio.h>
int main()
{
	int a;
	printf("enter your marks=");
	scanf("%d",&a);
	if(a>=
	90)
	{
		printf("You have got A+ grade");
	}
	else if(a>=80 && a<90)
	{
		printf("you have got A grade");
	}
	else if(a>=70 && a<80)
	{
		printf("you have got B grade");
	}
	else if(a>=60 && a<70)
	{
		printf("you have got C grade");
	}
	else if(a>=50 && a<60)
	{
		printf("you have got D grade");
	}
	else if(a>=40 && a<50)
	{
		printf("you have got E grade");
	}
	else
	{
		printf("you have failed");
	}
	return 0;
} 
