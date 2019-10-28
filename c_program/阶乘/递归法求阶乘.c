#include<stdio.h>
long factorial(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return (n*factorial(n-1));
}

void main()
{
    int n;
    printf("Input a integer n (n>=0) : ");
    scanf("%d",&n);
    if(n<0)
        printf("Input error : n cannot be negative\n");
    else
        printf("%d! = %ld\n",n, factorial(n));
}
