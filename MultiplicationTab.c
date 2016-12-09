
#include<stdio.h>
main()
{
    int i=0,a,mul;
    printf("Enter a number ::");
    scanf("%d",&mul);
    while(i<=10)
    {
        a=mul*i;
        printf(" %d x %d = %d \n",mul,i,a);
        i++;
    }
}
