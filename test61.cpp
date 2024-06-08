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
	 int max,j;
	 for(i=0;i<10;i++)
	 {
	 	  max=0;
		          if(a[i]>a[i+1])
				  {
				      max=a[i];	
				  }
				  else
				  {
				      max=a[i+1];	
			      }	
				  
		
	 }
	 printf("Maximum value=%d",max);
	 return 0;
}
