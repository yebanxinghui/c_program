#include <stdio.h>
char *strstr(char *s,char *t)
{
    char *ps=s,*pt,*pc;
    while(*ps!='\0'){
        for(pt=t,pc=ps;*pt!='\0' && *pt==*pc;pt++,pc++) ;
        if(*pt=='\0') return ps;
        ps++;
    }
    return 0;
}
void main()
{
    char s1[]="abcdefghijklmn",s2[]="fgh",*p;
    p=strstr(s1,s2);
    printf("%p\t%s\n",&s1[0],s1);
    printf("%p\t%s\n",p,p);
}
