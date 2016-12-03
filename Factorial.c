#include<stdio.h>
main()
{
    int a,fact=1;
    printf("Enter a number ::");
    scanf("%d",&a);
    do
    {
        fact=fact*a;
        a--;
    }while(a>0);
    printf("Factorial is ::%d",fact);
}
