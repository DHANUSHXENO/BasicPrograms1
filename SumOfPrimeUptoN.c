#include<stdio.h>
main()
{
    int i,j,n,flag=0,sum=0;
    printf("Enter the n th term ::");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            sum=sum+i;
        flag=0;
    }
    printf("Sum of prime numbers  upto %d is %d",n,sum);
}
