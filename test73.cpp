#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
	char a[10],e[10];
	printf("enter your first name =");
	scanf("%s",&a);
	printf("enter your last name =");
	scanf("%s",&e);
	int no=strlen(a);
	printf("\nLenght of the string =%d",no);
	printf("\nYour name =%s",strcat(a,e));
	return 0;
}
