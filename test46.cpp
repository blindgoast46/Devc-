#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 4;
    int n; 
    
    switch(a) 
	{
        case 1:
            printf("Enter the limit: ");
            scanf("%d", &n);
            for (int i = 2; i <= n; i++)
			 {
                int isPrime = 1; // Declare isPrime inside the loop
                for (int j = 2; j * j <= i; j++) 
				{
                    if (i % j == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime)
				{
                    printf("%d ", i);
                }
            }
            break;
            
        case 2:
            int factorial = 1; // Declare factorial inside the case block
            scanf("%d", &n);
            for (int i = 2; i <= n; ++i)
			factorial *= i;
            printf("%d\n", factorial);
                    break;
        case 3:
		    int a;
            printf("Enter your marks: ");
            scanf("%d", &a);
            if (a >= 90) 
			{
                printf("You have got A+ grade");
            } else if (a >= 80 && a < 90) 
			{
                printf("You have got A grade");
            } else if (a >= 70 && a < 80) 
			{
                printf("You have got B grade");
            } else if (a >= 60 && a < 70) 
			{
                printf("You have got C grade");
            } else if (a >= 50 && a < 60) 
			{
                printf("You have got D grade");
            } else if (a >= 40 && a < 50) 
			{
                printf("You have got E grade");
            } else
			{
                printf("You have failed");
            }
            break;
            
           default:
            printf("Invalid number");
    }
    return 0;
}