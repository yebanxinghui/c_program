#include <stdio.h>
void main()
{
    char s[100];
    fgets(s,100,stdin);
    fputs(s,stdout);
}
