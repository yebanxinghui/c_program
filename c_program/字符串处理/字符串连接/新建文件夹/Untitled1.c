#include<stdio.h>
void main()
{
    int n,i,j,t,num;
    while(scanf("%d",&n),n!=0){
        getchar();
        char c,s[10][100]={},*p=&s[0][0];
        for(i=0;i<n;i++)
            for(j=0;(*(p+i*100+j)=getchar())!='\n';j++) ;
        for(i=0,t=0;i<n;i++){
            for(j=0;*(p+i*100+j)!='\n';j++){
                *(p+t)=*(p+i*100+j);
                t++;
            }
        }
        for(num=0;num<t;num++)
            putchar(*(p+num));
        printf("\n");
    }
}
