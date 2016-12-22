#include<stdio.h>
main()
{
    int a,temp=0,r,x,b,sum=0;
    printf("Enter the range :: \n");
    scanf("%d %d",&a,&b);

    for(x=a;x<=b;x++)
    {
        temp=x;
        while(x>0)
        {
            r=x%10;
            sum=sum+(r*r*r);
            x=x/10;
        }
        if(temp==sum)
            printf("%d \n",sum);
        sum=0;
        x=temp;
    }
}

