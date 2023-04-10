#include<stdio.h>
void main()
{
    int i,vcount=0,ccount=0;
    char str[]="this is a really simple sentence";
    for(i=0;i<strlen(str);i++)
    {
        str[i]=tolower(str[i]);
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vcount++;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            ccount++;
        }
    }
    printf("number of vowels:%d\n",vcount);
    printf("number of consonant:%d\n",ccount);
}