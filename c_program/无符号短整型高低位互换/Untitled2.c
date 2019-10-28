#include <stdio.h>
void main()
{
    unsigned short int a;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%hu",&a);
        a=(a<<12)|(a>>12)|(a&0x0ff0);
        printf("%hu\n",a);
    }
}
