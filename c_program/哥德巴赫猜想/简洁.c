#include<stdio.h>
int sushu(int n);
int main(void)
{
    int x,i;
    scanf("%d",&x);
    if(x%2!=0||x<4)printf("error!\n");
    else
    {
       for(i=2;i<x/2;i++)
       {
          if(sushu(i)!=0&&sushu(x-i)!=0){
            printf("%d=%d+%d\n",x,i,x-i);
            //return 0;
          }
       }
    }
    return 0;
}
int sushu(int n)
{
    int i;
    for(i=2;i<n/2;++i)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
