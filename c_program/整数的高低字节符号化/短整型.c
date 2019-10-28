#include <stdio.h>
void main()
{
    unsigned short a,b,c;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%hu",&a);
        b=a>>8;c=(a<<8)>>8;
        printf("%c,%c\n",b,c);
    }
}
