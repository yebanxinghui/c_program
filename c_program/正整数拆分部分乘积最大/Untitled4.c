#include <stdio.h>
long p(int k)
{
    int i,m=1;
    for (i=1;i<=k;++i)
    {
        m=m*3;
    }
    return m;
}
int main()
{
    int n,k;
    long m;
    scanf("%d",&n);
    switch (n%3)
    {
        case 0: {k=n/3;         m=p(k);             break;}
        case 1: {k=(n-4)/3;     m=4*p(k);           break;}
        case 2: {k=(n-2)/3;     m=2*p(k);           break;}
    }
    printf("%d\n",m);
    system("pause");
    return 0;
}
