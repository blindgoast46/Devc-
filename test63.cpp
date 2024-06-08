# include<stdio.h>
# include<conio.h>
int main()
{
	 int a[10];
	 int i;
	 printf("Enter 10 digits=");
	 for(i=0;i<10;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 for(i=1;i<10;i++)
	 {
	 	 if(a[0]>a[i])
	 	 {
	 	 	a[0]=a[i];
		 }
     }
	 printf("Minimum no=%d",a[0]); 
     for(i=1;i<10;i++)
	 {
	 	 if(a[0]<a[i])
	 	 {
	 	 	a[0]=a[i];
		 }
     } 
     printf("\nMaximum no=%d",a[0]);
     return 0;
}
	      
		  
	 

