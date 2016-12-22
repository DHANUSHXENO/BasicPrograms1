#include<stdio.h>
int main()
{
    char ch[10];
    int i,count=0,count1=0,count2=0;
    printf("Enter a string \n");
    scanf("%s",ch);
    for(i=0;i<strlen(ch);i++)
    {
        if((ch[i]>='A' && ch[i]<='Z')||(ch[i]>='a' && ch[i]<='z'))
            ++count;
        else if(ch[i]>='0' && ch[i]<='9')
            ++count1;
        else
            ++count2;
    }
    printf("Characters : %d \n",count);
    printf("Digits : %d \n",count1);
    printf("AlphaNumeric Characters : %d \n",count2);
}
