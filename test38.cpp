#include <stdio.h>
#include <conio.h>
int main()
{
	int fees;
	printf("enter the amount=");
	scanf("%d",&fees);
	if(fees>80000)
	{
		printf("Very high");
	}
	else if(fees>50000 && fees<80000)
	{
		printf("High");
	}
	else if(fees>30000 && fees<50000)
	{
		printf("normal");
	}
	else if(fees>15000 && fees<30000)
	{
		printf("low");
	}
	else
	{
		printf(" very low");
	}
	return 0;
}

