#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c;
	printf("Enter any number 1=");
	scanf("%d",&a);
	printf("Enter any number 2=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a=%d",a);
	printf("b=%d",b);
	return 0;
}

