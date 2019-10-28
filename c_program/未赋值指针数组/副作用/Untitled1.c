#include <stdio.h>
#define N 6
void main()
{
    int i,*p[N],sum=0;
    for(i=0;i<N;i++){
        scanf("%d",p[i]);
        sum+=*p[i];
    }
    for(i=0;i<N;i++)
        printf("p[%d]=%p,result=%d\n",i,p[i],*p[i]);
    printf("sum=%d\n",sum);
}
