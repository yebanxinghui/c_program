#include<stdio.h>
int htoi(char s[])
{
    int j=0,num=0;
    if(s[j]=='0'&&(s[j+1]=='x'||s[j+1]=='X')) j+=2;
    else return -1;
    for(;s[j]!='\0';j++){
        if(s[j]>='0'&&s[j]<='9') num=num*16+s[j]-'0';
        if(s[j]>='a'&&s[j]<='f') num=num*16+s[j]-'a'+10;
        if(s[j]>='A'&&s[j]<='F') num=num*16+s[j]-'A'+10;
    }
    return num;
}
void main()
{
    char s[]="0x87";    /******必须要以0x或0X开头，0x后面是个十六进制数，将其转化为10进制整数*******/
    printf("%d\n",htoi(s));
}
