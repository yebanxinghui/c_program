#include<stdio.h>
#define BASE 10
int stoi(char s[])
{
    int j=0,num=0;
    for(;s[j]!='\0';j++)
    {
        num=num*BASE+s[j]-'0';
    }
    return num;
}
void main()
{
    char s[]="1239";
    printf("%d\n",stoi(s));
}
