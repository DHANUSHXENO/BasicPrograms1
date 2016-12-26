#include<stdio.h>
int main()
{
    int a,range;
    printf("Enter a range\n");
    scanf("%d",&range);
    do
    {
        printf("Enter a num\n");
        scanf("%d",&a);
        if(a>range)
            printf("Error::\nEnter number in range\n");
    }while(a>range);
    printf("The number in range is %d",a);
}

