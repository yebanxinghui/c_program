#include <limits.h>
#include <stdio.h>
void PrintBit(int x)
{
    int i;
    int n = sizeof(int) * CHAR_BIT;
    int mask = 1 << (n-1);
    for ( i=1; i<=n; ++i)
    {
        putchar ( ! ( x & mask ) ? '0' : '1');
        x<<=1;
        if (! ( i % CHAR_BIT) && i<n)
        {
            putchar(' ');
        }

    }
}
void main()
{
    int x,p,n;
    scanf("%d %d %d",&x,&p,&n);
    PrintBit(x);
    printf("\n");
    x^=~(~(~0<<n)<<n)<<p;
    PrintBit(x);
    printf("\n");
}
