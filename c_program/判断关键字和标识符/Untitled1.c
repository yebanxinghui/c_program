#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAXLEN 63
void getid(char *s,int lim)
{
    char c;
    while(lim-->0 && (c=getchar())!='\n')
        *s++=c;
    *s='\0';
}
int isid(char *t)
{
    char *s=t;
    if(!isalpha(*t) && *t!='_') return 0;
    for(t++;*t!='\0';t++)
        if(!(isdigit(*t) || isalpha(*t) || *t=='_')) return 0;
    if(iskey(s)) return 0;
    return 1;
}
int iskey(char *s)
{
    char *keyword[]={
    "auto","_Bool","break","case","char","_Complex",           /***这些都为关键字而不是标识符****/
    "const","continue","default","restrict","do","double",
    "else","enum","extern","float","for","goto",
    "if","_Imaginary","inline","int","long","register",
    "return","short","signed","sizeof","static","struct",
    "switch","typedef","union","unsigned","void","volatile",
    "while",""
    };
    int i;
    for(i=0;*keyword[i]!='\0';i++)
        if(!strcmp(s,keyword[i])) return 1;
    return 0;
}
void main()
{
    char id[MAXLEN+1];
    printf("Input an identifier.\n");                           /***判断是否为标识符***/
    getid(id,MAXLEN);
    if(isid(id)) printf("%s is an identifier.\n",id);
    else printf("%s is not an identifier.\n",id);
}
