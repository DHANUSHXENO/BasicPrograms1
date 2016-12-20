#include<stdio.h>
#include<conio.h>
void main()
{
    int armstrong,sum=0,d,ex;
    printf("Enter a number");
    scanf("%d",&armstrong);
    ex=armstrong;
    while(armstrong>0)
    {
        d=armstrong%10;
        sum=sum+d*d*d;
        armstrong=armstrong/10;
    }
    if(ex==sum)
        printf("The number is armstrong number");
    else
        printf("The number is not an armstrong number");
    getch();
}
