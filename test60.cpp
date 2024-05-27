#include <stdio.h>
#include <conio.h>
int main()
{
	int a[10];
	int i;
	printf("Please enter 10 value");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	int n,s=0;
	printf("Enter any value you want to search in this array");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
	    if(a[i]==n)
	    {
	           s=1;  	
	    	
		}
	}
	if(s==1)
	{
		printf("Search successful");
	}
	else
	{
		printf("Search unsucessful");
	}
	return 0;
}
