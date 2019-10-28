#include <stdio.h>
int main(void)
{
    long f1=1,f2=1,t;
    int n,i;
    for(;scanf("%d",&n);f1=1,f2=1){
        if(n>=3){
            for(i=1;i<n;++i){
                if(i%8==0) printf("\n");
                if(i==1) printf("%10ld",f2);
                printf("%10ld",f1);
                t=f1;
                f1=f2+f1;
                f2=t;
            }
        }
        else if(n==0) break;
        else printf("Error!");
        printf("\n");
    }
    return 0;
}
