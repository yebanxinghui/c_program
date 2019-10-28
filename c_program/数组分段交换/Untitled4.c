#include<stdio.h>
void swap(int u[],int n,int k)
{
    int i;
    for(i=0;i<n;++i){
        scanf("%d",&u[i]);
        if(u[i]>1000&&u[i]<-1000) break;
    }
    for(i=0;i<k;i++)
        u[n+i]=u[i];
    for(i=0;i<n;i++)
        u[i]=u[i+k];
    for(i=0;i<n;i++){
        if(i<n-1) printf("%d ",u[i]);
        else printf("%d\n",u[i]);
    }
}
int main(void)
{
    int n,k,i;
    int u[120];
    while(scanf("%d%d",&n,&k)!=EOF && k>0 && k<n && n<=60){
        swap(u,n,k);
    }
    return 0;
}
