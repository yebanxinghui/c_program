/*是素数返回1，否则返回0*/
#include <stdio.h>
int IsPrime(int n)
{
    int k, limit;
    if(n==2) return 1;
    if(!(n%2)) return 0;
    limit=n/2;
    for(k=3;k<=limit;k+=2)
        if(!(n%k)) return 0;
    return 1;
}
int main()
{
    int x;
    scanf("%d",&x);
    return IsPrime(x);
}
