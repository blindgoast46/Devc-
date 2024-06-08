#include<stdio.h>
#include<conio.h>
void prime();
void factorial();
void even_odd();
void salary();    // Declaration
int main()
{
	
	prime();  // calling
	factorial();
	even_odd();
	salary();
	int n, i, isPrime;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
	{
        isPrime = 1;
        for (int j = 2; j * j <= i; j++)
		{
             if (i % j == 0)
			{
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
		{
            printf("%d ", i);
        }
    }
	return 0;
}
void factorial()
{
	int n, factorial = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; ++i) factorial *= i;
    printf("%d\n", factorial);
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
