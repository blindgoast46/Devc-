#include <stdio.h>
#include <conio.h>
void fun(int,int);
int main()
{
	fun(10,20);
	return 0;
}
void fun(int a,int b)
{
	int s=a*b;
	printf("Area of rectangle%d",s);
}
