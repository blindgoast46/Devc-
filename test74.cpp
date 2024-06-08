#include <stdio.h>
#include <conio.h>
int main()
{
	int a[3][3];
	int s,e;
	printf("Enter nine values =");
	for(s=0;s<3;s++)
	{
		for(e=0;e<3;e++)
		{
			scanf("%d",&a[s][e]);
		}
	}
	printf(" print array\n");
	for(s=0;s<3;s++)
	{
		for(e=0;e<3;e++)
		{
			printf("%d ",a[s][e]);
		}
		printf("\n");
	}
	return 0;
}
