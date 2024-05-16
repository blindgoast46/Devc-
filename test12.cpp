#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("\nThe number is %s", (a > 0) ? "Positive" : "Negative");

    return 0;
}
