#include<stdio.h>
void main()
{
    int x,i,j,k;
    for (x=100;x<=999;++x)
    {
        i=x/100;
        j=(x-i*100)/10;
        k=x%10;
        if(x==i*i*i+j*j*j+k*k*k)
            printf("%5d",x);
    }
    system("pause");
}
