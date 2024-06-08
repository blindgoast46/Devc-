#include <stdio.h>
#include <conio.h>
int main()
{
	int a[3][3];
	int i;
	int e,s;
	printf("Enter any nine values =");
	for(i=0;i<3;i++)
	{
		for(e=0;e<3;e++)
		{
			scanf("%d",&a[i][e]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(e=0;e<3;e++)
		{
			printf(" %d",a[i][e]);
		}	
	printf("\n");
    }
    for(i=0;i<3;i++)
    {
    	s=0;
    	for(e=0;e<3;e++)
      {
      	 s+=a[i][e];
      }
      printf("Sum of row=%d",s);
      printf("\n");
   }
	return 0;
}
