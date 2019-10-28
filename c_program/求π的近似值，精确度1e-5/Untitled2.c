#include<stdio.h>
void main()
{
    int x=-1,n=1,num=0;
    double sum=0;
    do{
        x*=-1;
        sum=sum+1.0*x/n;
        n+=2.0;
    }while(1.0/(n-2)>=1e-5);
    printf("%.9f\n",4.0*sum);
}
