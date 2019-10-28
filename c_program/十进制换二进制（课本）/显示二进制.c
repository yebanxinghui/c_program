#include <limits.h>
#include <stdio.h>
void PrintBit(int x)
{
    int i;
    int n=sizeof(int) * CHAR_BIT;
    int mask = 1 << (n-1);
    printf("%d\n",mask);
    for ( i=1; i<=n; ++i)
    {
        putchar ( ! ( x & mask ) ? '0' : '1');
        x<<=1;
        if ( ! ( i % CHAR_BIT) && i<n) putchar(' ');
    }
}
void main()
{
    int x;
    scanf("%d",&x);
    PrintBit(x);
    printf("\n");
}
