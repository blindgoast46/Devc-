#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j;
	int a=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			//printf("*");
			printf("%d",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}

