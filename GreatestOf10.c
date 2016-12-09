#include<stdio.h>
main()
{
    int a[10],i,greatest;
    printf("Enter 10 numbers \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    greatest=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>greatest)
            greatest=a[i];
    }
    printf("The greatest number is :: %d",greatest);
    return 0;
}
