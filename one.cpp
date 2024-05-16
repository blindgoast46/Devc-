# include<stdio.h>
# include<conio.h>
int main()
{
	  int sal;
	  printf("Enter any salary");
	  scanf("%d",&sal);
	  int leave=sal/30*5;
	  int hra=sal*10/100;
	  int allw=sal*5/100;
	  int total=(sal-leave)+hra+allw;
	  printf("\n Leave Details(5 days)=%d",leave);
	  printf("\n HRA Details=(10 per)%d",hra);
	  printf("\n Allowances=(5 per)%d",allw);
	  printf("\n Total salary=%d",total);
	  return 0;
}
