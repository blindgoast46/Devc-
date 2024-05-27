# include <stdio.h>
# include <conio.h>
int main()
{
	int a;
	printf("Enter any value 1=");
	scanf("%d",&a);
	switch(a)
	{
		case 1: printf(" first person= Me");
		       break;
		case 2: printf(" second person= You");
		       break;
		case 3: printf(" third person= He");
		       break;
	default: printf("None");
	}
	return 0;
}
