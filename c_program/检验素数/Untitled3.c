#include<stdio.h>
#include <math.h>
void main()
{
    int n,i,j,r;
    do {
        printf("input n:\n");
        scanf("%d",&n);
    }while(n<2);
    if(n==2)
    {
        printf("2 is a prime\n");
    }else if(n>2){
        i=1;
        j=sqrt(n);
        do{
            ++i;r=n%i;
        }while(r&&i<=j);
        if(r)
        {
            printf("%d is a prime\n",n);
        }else{
            printf("%d is not a prime\n",n);
        }
    }
}
