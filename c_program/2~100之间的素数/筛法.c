/**************************
筛法求2~100间的素数（质数）
***************************/
#include <stdio.h>
void main()
{
    int i,j,a[100];
    for (a[0]=a[1]=0,i=2;i<100;i++){
        a[i]=1;
    }
    for(i=2;i<50;i++){
        if(a[i]){
            for (j=i*i;j<100;j+=i){
                a[j]=0;
            }
        }
    }
    for(i=2,j=0;i<100;i++){
        if(a[i]){
            printf("%4d",i);
            if(++j==8){
                j=0;
                printf("\n");
            }
        }
    }
}
