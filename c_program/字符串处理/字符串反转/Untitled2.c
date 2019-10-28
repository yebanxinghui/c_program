#include <stdio.h>
#include "sum.h"
void reverse(char s[])
{
    int c,j,k;
    for(j=0,k=strlen(s)-1;j<k;j++,k--)
        c=s[j],s[j]=s[k],s[k]=c;
}
void main()
{
    char str[80]="     atbtctdtetft     ";
    printf("before trim,the string is \"%s\"\n",str);
    trim(str);
    printf("after trim,the string is \"%s\"\n",str);
    delete_c(str,'t');
    printf("after delete 't',the string is \"%s\"\n",str);
    reverse(str);
    printf("after reverse,the string is \"%s\"\n",str);
}
