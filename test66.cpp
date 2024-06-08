#include <stdio.h>
#include <conio.h>
int main()
{
	int a[3][3];
	a[0][0]=22;
	a[0][1]=33;
	a[0][2]=44;
	a[1][0]=55;
	a[1][1]=66;
	a[1][2]=77;
	a[2][0]=88;
	a[2][1]=99;
	a[2][2]=111;
	printf("%d",a[0][0]);
	printf(" %d",a[0][1]);
    printf(" %d\n",a[0][2]);
	printf("%d",a[1][0]);
	printf(" %d",a[1][1]);
	printf(" %d\n",a[1][2]);
    printf("%d",a[2][0]);
	printf(" %d",a[2][1]);
	printf(" %d",a[2][2]);
	return 0;
}
