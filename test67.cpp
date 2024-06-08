#include <stdio.h>
#include <conio.h>
int main()
{
	int a[2][2];
	int i,j;
	printf("Enter four values=");
	for(i=0;i<2;i++)   //rows
	{
		for(j=0;j<2;j++)
		{
             scanf("%d",&a[i][j]);			
		}
	}
	printf("Print array\n");
	for(i=0;i<2;i++)   //rows
	{
		for(j=0;j<2;j++)
		{
             printf("%d ",a[i][j]);			
		}
		printf("\n");
	}
	return 0;
}
