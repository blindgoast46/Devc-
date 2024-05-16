#include <stdio.h>
#include <conio.h>
int main() 
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("\nYou are %s eligible to vote.", (age >= 18) ? "" :"not eligible to vote");
    
    return 0;
}

