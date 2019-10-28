#include <stdio.h>
int F(int n)
{
    if(n==1||n==2)
        return 1;
    else
        return (F(n-1)+F(n-2));
}
/**********第n位************/
void main()
{
    int n;
    while(scanf("%d",&n)!=EOF && n>=1 && n<=40)
    {
        printf("%d\n",F(n));
    }
}
/**********前n位************/
/*void main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF )
    {
        for(i=1;i<=n;i++)
            printf("%d ",F(i));
    }
}*/

