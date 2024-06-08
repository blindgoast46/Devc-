#include <stdio.h>
#include <conio.h>
int main() 
{
    int n, i, isPrime;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
	{
        isPrime = 1;
        for (int j = 2; j * j <= i; j++)
		{
             if (i % j == 0)
			{
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
		{
            printf("%d ", i);
        }
    }

    return 0;
}

