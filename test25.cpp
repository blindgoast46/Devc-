#include <stdio.h>
#include <conio.h>
int main()
{
	int c=20,d=2;
	printf("\nBefore");
	printf("\nC=%d",c);   //20
	printf("\nD=%d",d);   //2
	d=c++;  
	d=c++;    
	++c;    
	d=c++;  
	d++;    
	printf("\nAfter");
	printf("\n%d",c);   //24
	printf("\n%d",d);   //24
	return 0;
}
