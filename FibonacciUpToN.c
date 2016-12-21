#include <stdio.h>
main()
{
    int i,n,a=0,b=1,nextTerm=0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i=1;i<=n;++i)
    {
        if(i==1)
        {
            printf("%d\n", a);
            continue;
        }
        if(i == 2)
        {
            printf("%d\n",b);
            continue;
        }
        nextTerm = a+b;
        a=b;
        b=nextTerm;
        printf("%d\n", nextTerm);
    }
}
