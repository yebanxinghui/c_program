#include <stdio.h>
void main()
{
    char s[100];
    int i;
    for(i=0;(s[i]=fgetc(stdin))!='\n';i++) ;
    s[i]='\0';
}
