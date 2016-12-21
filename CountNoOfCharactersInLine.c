#include<stdio.h>
#include<string.h>
main()
{
    char ch[10];
    printf("Enter a line ::");
    gets(ch);
    printf("The number of characters in the line is %d",strlen(ch));
}
