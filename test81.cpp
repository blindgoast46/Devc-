#include<stdio.h>
#include<conio.h>
void fun();
void square();
void triangle();    // Declaration
int main()
{
	
	fun();  // calling
	square();
	triangle();
	printf("\nAtharv");
	return 0;
}
void triangle()
{
	int h,p;
	printf("\nEnter any number 1 =");
    scanf("\n%d",&h);
    printf("\nEnter any number 2 =");
    scanf("\n%d",&p);
	printf("\nArea of a triangle =%f",0.5*h*p);
}
void square()
{
	
    int a;
	printf	
	printf("\nperimeter of square =%d",a*4);
}
void fun() // definition
{
	int l,b;
	l=10;
	b=20;
	printf("Area of rectangle=%d",l*b);
}
