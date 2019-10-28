#include<stdio.h>
int htoi(char s[])
{
    int j=0,num=0;
    if(s[j]=='0'&&(s[j+1]=='x'||s[j+1]=='X')) j+=2;
    else return -1;
    for(;s[j]!='\0';j++){
        if(s[j]>='0'&&s[j]<='9') num=num*16+s[j]-'0';
        else if(s[j]>='a'&&s[j]<='f') num=num*16+s[j]-'a'+10;
        else if(s[j]>='A'&&s[j]<='F') num=num*16+s[j]-'A'+10;
    }
    return num;
}
void main()
{
    int N,i;
    char s[20];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%s",s);
        printf("%d\n",htoi(s));
    }
}
