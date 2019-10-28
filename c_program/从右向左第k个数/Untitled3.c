#include<stdio.h>
int digit(unsigned long n,int k)
{
    int i;
    for(i=1;i<k;++i)
        n/=10;
    if(n!=0) return n%10;
    else return -1;
}

int main(void)
{
    unsigned long n;
    int k;
    while((scanf("%lu%d",&n,&k))!=EOF)
    {
        printf("%d\n",digit(n,k));
    }
    return 0;
}
