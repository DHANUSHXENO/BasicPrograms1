#include<stdio.h>
main()
{
    int n,a[50],i,j,temp;
    printf("Enter the range");
    scanf("%d",&n);
    printf("Enter the terms \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The smallest number is ::%d \nThe greatest number is ::%d",a[0],a[n-1]);
}
