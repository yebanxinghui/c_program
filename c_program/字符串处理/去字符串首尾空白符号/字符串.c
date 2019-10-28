/**********************************
此程序为去掉首尾空白字符后的字符串
**********************************/
#include <stdio.h>
#include "characterlength.h"
char *trim(char s[])
{
    int i,num,j=0,k=0,l=strlen(s);
    while(s[j]== ' '||s[j]=='\t'||s[j]=='\n'||s[j]=='\r')
        j++;
    i=l-1;
    while(s[i-k]== ' '||s[i-k]=='\t'||s[i-k]=='\n'||s[i-k]=='\r')
        k++;
    num=l-j-k;
    for(i=0;i<num;i++)
        s[i]=s[i+j];
    s[num]='\0';
    return s;
}
void main()
{
    char s[]="  you are good ,\t cai guai lie . \n";       /*y到.的字符串*/
    printf("%s\n",trim(s));
}

