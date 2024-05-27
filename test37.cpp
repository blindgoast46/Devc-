# include<stdio.h>
# include<conio.h>
int main()
{
	 int per;
	 printf("enter any number=");
	 scanf("%d",&per);
	 if(per>60)
	 {
	 	printf("First Devision");
	 }
	 else if(per>48 && per<60)
	 {
	 	printf("Second Devision");
	  } 
	  else if(per>36 &&  per<48)
	  {
	  	printf("Third Devision");
	  }
	  else
	  {
	  	printf("Fail");
	  }
}
