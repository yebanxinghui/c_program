#include<stdio.h>
int ishw(char s[])
{
    int i,j;
    for(i=0;(s[i]=getchar())!='\n';++i) ; /*  */
    for(j=0;s[j]==s[i-1];j++,i--){
        if(j>=i-1) return 1;
    }
    return 0;
}
void main()
{
    int N,i;
    char s[100];
    scanf("%d",&N);
    getchar();
    for(i=0;i<N;i++){
        if(ishw(s)) printf("Yes!\n");
        else printf("No!\n");
    }
}
