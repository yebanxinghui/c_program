#include <stdio.h>
void main()
{
    char s[100];
    int i;
    for(i=0;(s[i]=getchar())!='\n';++i) ;
    s[i]='\0';
    printf("%s\n",s);
}
