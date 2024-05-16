#include <stdio.h>
#include <conio.h>
int main ()
{
	int a;
	int b;
	printf("enter any value 1=");
	scanf("%d",&a);
	printf("enter any value 2=");
	scanf("%d",&b);
	int sum=a%b;
	printf("remainder of the two values after dividation=%d",a%b);
	return 0;
}
