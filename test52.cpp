# include <stdio.h>
# include <conio.h>
int main()
{
	int a;
	printf("Enter any value=");
	scanf("%d",&a);
	switch(a)
	{
		case 1: printf("today");
		       break;
		case 2: printf("tomorrow");
		       break;
		case 3: printf("day after tomorrow");
		       break;
		default: printf("None");
	}
	return 0;
}
