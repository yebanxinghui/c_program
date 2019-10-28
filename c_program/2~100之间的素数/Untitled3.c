#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,k,m=1;
    for(k=0,n=2;n<100;++n)
    {
        for(i=2;i<=sqrt(n);++i)
        {
            if(!(m=n%i)) break;
        }
        if(m){
            printf("%-6d",n);
            if(!(++k%10)) printf("\n");
        }
    }
    printf("\n");
}
