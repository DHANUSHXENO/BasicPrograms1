#include<stdio.h>
main()
{
    int fib,n1=0,n2=1,i,nxtterm=0;
    printf("Enter a number of terms");
    scanf("%d",&fib);
    printf("Fibonacci series %d %d",n1,n2);
    nxtterm=n1+n2;
    while(fib>=nxtterm)
    {
        printf("\t%d\t",nxtterm);
        n1=n2;
        n2=nxtterm;
        nxtterm=n1+n2;
    }
}
