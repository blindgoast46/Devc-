#include <stdio.h>
#include <conio.h>
int main ()
{
	int a=30;
	int b=23;
	printf("before");
	printf("\n%d",a);
	printf("\n%d",b);
	b=++a;
	b=++a;
	b=++a;
	b=++a;
	++a;
	printf("\nafter");
	printf("\n%d",a);
	printf("\n%d",b);
	return 0;
}
