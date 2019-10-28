#include <stdio.h>
void main()
{
    int i,sum,n;
    scanf("%d",&n);
    i=1;
    sum=0;
    while(i<=n)
        sum=sum+i++;
    printf("sum=%d\n",sum);
    system("pause");
}
