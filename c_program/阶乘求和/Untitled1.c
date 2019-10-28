#include <stdio.h>
long fac(int n)
{
    static long f=1;
    f*=n;
    return f;
}

long fac(int);
void main()
{
    int i,n;
    long sum=0;
    printf("input n(n>0):\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        sum+=fac(i);
    printf("1!+2!...+%d!=%ld\n",n,sum);
}
