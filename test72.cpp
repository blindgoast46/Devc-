#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char a[10],e[10];
	printf("Enter your first name =");
	scanf("%s",&a);
	printf("Enter your last name =");
	scanf("%s",&e);
	int no=strlen(a);  // length
	printf("Length of string%d",no);
	printf("\n Combine two string(first and last)=%s",strcat(a,e));
	printf("Upper case  of string%d",strcmp(a,e));
	char f[10];
	printf("Copy of string%s",strcpy(f,a));
	return 0;
}
