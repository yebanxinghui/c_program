#include<stdio.h>
void main()
{
    int i,j,n;
    long s,term;
    printf("input n:\n");
    scanf("%d",&n);
    for(s=0,i=1;i<=n;++i){
        term=1;
        j=1;
        do
            term*=i;
        while(++j<=i);
        s+=term;
    }
    printf("s=%ld\n",s);
}
