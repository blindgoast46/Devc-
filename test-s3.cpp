#include <stdio.h>
#include <conio.h>
void fun(int,int);
void fun1(int);
int main()
{
 int l;
 int h;
 printf("Enter any value 1 =");
 scanf("%d",&l);
 printf("Enter any value 2 =");
 scanf("%d",&h);
 int s;
 printf("Enter any value =");
 scanf("%d",&s);
 fun(l,h);
 fun1(s);
 
 return 0;
}
 void fun(int a,int t)
{
	float s=0.5*a*t;
	printf("area of triangle =%f",s);
}
void fun1(int n)
{
	int i=n*4;
	printf("\nperimeter of square =%d",i);
}
