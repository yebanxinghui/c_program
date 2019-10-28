#include<stdio.h>
int main()
{
    int n,t,k,x,i;
    double sum,average;
    scanf("%d",&n);
    for(;n>0;--n){
        scanf("%d",&t);
        if(t==0){
            for(sum=0,i=k=0;i<10;++i){
                scanf("%d",&x);
                if(x<=0) continue;
                sum+=x;
                ++k;
            }
            if(k>0){
                average=1.0*sum/k;
                printf("In \"continue\" way,numbers=%d,average=%f\n",k,average);
            }
        }
        if(t==1){
            for(sum=0,i=k=0;i<10;++i){
                scanf("%d",&x);
                if(x>0){
                    sum+=x;
                    ++k;
                }
            }
            if(k>0){
                average=1.0*sum/k;
                printf("In \"no continue\" way,numbers=%d,average=%f\n",k,average);
            }
        }
    }
    return 0;
}

