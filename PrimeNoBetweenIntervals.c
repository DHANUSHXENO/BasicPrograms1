#include"stdio.h"
main()
{
    int a,b,i,flag=0,j;
    printf("Enter the range :: \n");
    scanf("%d\n%d",&a,&b);
    for(i=a;i<=b;++i)
    {
        for(j=2;j<=i/2;++j)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d\t",i);
        flag=0;
    }
}
