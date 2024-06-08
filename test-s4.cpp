#include <stdio.h>
#include <conio.h>
int main() 
{
    int i, j, k;
    int st = 3;

    for (i = 0; i <= 3; i++) 
	{
        for (j = 0; j <= i; j++) 
		{
            printf(" ");
        }
        for (k = 0; k <= st; k++) 
		{
            printf("*");
        }
        printf("\n"); // Add a newline here to separate each line of stars
        st--;
    }
    return 0;
}

