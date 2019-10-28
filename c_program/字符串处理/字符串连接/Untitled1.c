#include<stdio.h>
char * strcat(char t[],char s[])
{
    int j=0,k=0;
    while (t[j++]!='\0') ;
        j--;
    while((t[j++]=s[k++])) ;
    return t;
}
 void main()
 {
     char t[]="Hello ",s[]="world!";
     printf("%s\n",strcat(t,s));
 }
