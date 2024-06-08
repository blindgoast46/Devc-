# include <stdio.h>
# include <conio.h>
int main ()
{
    int a[10];
    int i;
    int e=0;
    int o=0;
    printf("Enter any value =");
    for(i=0;i<10;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            e+=a[i];
        }
        else
        {
            o+=a[i];
        }
    }
    printf("odd no%d",o);
    printf("\neven no%d",e);
    return 0;
}
