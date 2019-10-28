#include <stdio.h>
double power(int x,int n)
{
    int i;
    double p;
    for(i=1,p=1;i<=n;i++)
        p*=x;
    return p;
}

double power(int x,int n);
void main()
{
    int i,j;
    printf("%5s%10s%10s%10s%10s\n","int","square","cube","quartic","quintic");
    for(i=1;i<=10;i++){
        printf("%5d",i);
        for(j=2;j<=5;j++)
            printf("%10.0lf",power(i,j));
        printf("\n");
    }
}
