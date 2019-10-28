#include <stdio.h>
char *mycpy(char t[],char s[],int n)
{
    int j,i;
    for (i=0;(t[i]=getchar())!='\n';i++) ;
    scanf("%d",&n);
    for(j=0;j<n;++j)
        s[j]=t[j];
    s[j]='\0';
    return s;
}
void main()
{
    int N,i,n;
    scanf("%d",&N);
    getchar();
    char t[1000],s[1000];
    for(i=0;i<N;i++){
        printf("%s\n",mycpy(t,s,n));
        getchar();
    }
}
