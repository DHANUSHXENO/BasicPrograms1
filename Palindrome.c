#include"stdio.h"
main()
{
    int a,b,z,temp=0;
    printf("Enter a number :: ");
    scanf("%d",&a);
    z=a;
    while(a!=0)
    {
        b=a%10;
        temp=temp*10+b;
        a=a/10;
    }
    if(z==temp)
        printf("The number is a palindrome");
    else
        printf("The number is not a palindrome");
}
