#include <stdio.h>
void main()
{
    int n,i;
    unsigned long fac;
    printf("input n:\n");
    scanf("%d",&n);
    for (fac=1,i=1;i<=n;i++)
    {
        fac*=i;
    }
    printf("%d!=%lu\n",n,fac);
    system("pause");
}
