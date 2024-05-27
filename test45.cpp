#include <stdio.h>
#include <conio.h>
int main()
{
	int a;
	int b;
	printf("Enter any value 1=");
	scanf("%d",&a);
	printf("Enter any value 2=");
	scanf("%d",&b);
	int sum=a%b;
	printf("The modules of the two values=%d",a%b);
	return 0;
}
