#include <stdio.h>
#include <conio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("\nyou are eligable to vote!");
	}
	else
	{
		printf("\nyou are not eligable to vote.");
	}
	return 0;
}
