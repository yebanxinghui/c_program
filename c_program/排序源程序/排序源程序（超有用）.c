#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXLINES 500
#define MAXLEN 100
char *lineptr[MAXLINES];
int readlines(char *[],int);
void writelines(char *[],int);
void sort(void *[],int,int (*)(void *,void *));
int numcmp(void *s1,void *s2);
int getline(char *,int);
void swap(void *v[],int i,int j);
int main(int argc,char *argv[])
{
    int nlines,numeric=0;
    if(argc>1&&strcmp(argv[1],"-n")==0)
        numeric=1;
    if((nlines=readlines(lineptr,MAXLINES))>=0){
        sort((void **)lineptr,nlines,(int (*)(void *,void *)) (numeric ? numcmp : strcmp));
        writelines(lineptr,nlines);
        return 0;
    }
    else{
        printf("input too big to sort\n");
        return 1;
    }
}

void swap(void *v[],int i,int j)
{
    void *t;
    t=v[i],v[i]=v[j],v[j]=t;
}
int getline(char *s,int lim)
{
    int c,i=0;
    while(--lim>0 && (c=getchar())!=EOF && c!='\n')
        s[i++]=c;
    if(c=='\n')
        s[i++]='\0';
    return (i);
}
int numcmp(void *s1,void *s2)
{
    double v1,v2;
    v1=atof((const char *)s1);
    v2=atof((const char *)s2);
    return (v1<v2?-1:v1>v2?1:0);
}
void sort(void *v[],int n,int (*comp)(void *,void *))
{
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if((*comp)(v[j],v[j+1])>0)
                swap(v,j,j+1);
        }
    }
}
void writelines(char *lineptr[],int nlines)
{
    while(nlines-- >0)
        printf("%s\n",*lineptr++);
}
int readlines(char *lineptr[],int maxlines)
{
    int len,nlines=0;
    char *p,line[MAXLEN];
    while((len=getline(line,MAXLEN))>0)
        if(nlines>=maxlines || (p=(char *)malloc(len))==NULL)
            return (-1);
        else{
            line[len-1]='\0';
            strcpy(p,line);
            lineptr[nlines++]=p;
        }
    return (nlines);
}

