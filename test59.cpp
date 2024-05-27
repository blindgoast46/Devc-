#include <stdio.h>
#include <conio.h>
int main()
{
	int sal[3];
	printf("Enter salary for three employee");
	for(int i=1;i<=3;i++)
	{
		printf("\nEmployee %d",i);
		scanf("%d",&sal[i]);
	}
	printf("Print all salaries");
	for(int i=1;i<=3;i++)
	{
		printf("\nEmployee %d",i);
		printf("%d",sal[i]);
	}
	return 0;
}
