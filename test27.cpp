#include <stdio.h>
#include <conio.h>
int main()
{
	int a=34;
	int b=45;
	printf("\nbefore");
	printf("\n%d",a);
	printf("\n%d",b);
	b=a++;
	b=a++;
	b=a++;
	b=a++;
	a++;
	a++;
	printf("\nafter");
	printf("\n%d",a);
	printf("\n%d",b);
	return 0;
}
