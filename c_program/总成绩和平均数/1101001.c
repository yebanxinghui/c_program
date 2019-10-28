#include<stdio.h>
#define N 10
void main()
{
    int score[N],i,sum=0;
    double average;
    printf("input the scores please:\n");
    for(i=0;i<N;i++){
        scanf("%d",&score[i]);
        sum+=score[i];
    }
    average=1.0*sum/N;
    printf("sum=%d\naverage=%lf\n",sum,average);
}
