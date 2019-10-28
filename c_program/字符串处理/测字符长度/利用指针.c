#include<stdio.h>
int strlen(char *p)
{
    char *q=p;
    while(*p)
        p++;
    return (p-q);
}
void main()
{
    char s[]="abcdefghijklmnopqrstuvwxyz";
    char *p=s;
    printf("%d\n",strlen(p));
}
