#include<stdio.h>
main()
{
    int i,n;
    float a[50],sum=0;
    float ans;
    printf("Enter the range");
    scanf("%d",&n);
    printf("Enter the terms \n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    ans=sum/n;
    printf("The average of array elements is::%.2f",ans);
}
