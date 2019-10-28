#include <stdio.h>
char *strcpy(char *t,char *s)
{
    int j=0;
    while(t[j]=s[j++]) ;
    return s;
}

int main(void)
{
    char s[]="m5.mm!!??",t[10];
    printf("%s\n", strcpy(t,s));
    return 0;
}
