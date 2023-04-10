#include<stdio.h>
#include<string.h>
void main()
{
    int maxsize,alaphabets=0,digits=0,others=0,i=0;
    maxsize=100;
    char str[maxsize];
    printf("enter any string");
    gets(str)
    while(str[i]!='\0')
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]='Z'))
        {
            alphabets++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            digits++;
        }
        else{
            others++;
        }
        i++;
    }
    printf("alphabets=%d\n",alphabets);
    printf("digits=%d\n",digits);
    printf("special characters=%d\n");
}