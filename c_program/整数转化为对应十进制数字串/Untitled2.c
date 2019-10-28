#include<stdio.h>
#define BASE 10
int strlen(char s[]);
void reverse(char s[]);
char *itoa(int n,char s[]);
void main()
{
    int n;
    scanf("%d",&n);      /*******ÒªÇón>=-15********/
    char s[n];
    printf("%s\n",itoa(n,s));
}

void reverse(char s[])
{
    int c,j,k;
    for(j=0,k=strlen(s)-1;j<k;j++,k--)
        c=s[j],s[j]=s[k],s[k]=c;
}
int strlen(char s[])
{
    int i=0;
    while(s[i]!='\0') ++i;
    return i;
}
char *itoa(int n,char s[])
{
    int sign,j=0;
    if((sign=n)<0) n=-n;
    while(n>0) {
        s[j++]=n%BASE+'0';
        n/=BASE;
    }
    if(sign<0) s[j++]='-';
    s[j]='\0';
    reverse(s);
    return s;
}
