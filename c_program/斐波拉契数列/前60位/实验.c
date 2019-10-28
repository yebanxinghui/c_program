#include<stdio.h>
void main()
{
    long long f1=1,f2=1;
    int i;
    printf("sizeof(long long)=%d\n",sizeof(f1));
    for(i=1;i<=30;i++)
    {
        printf("f(%d)=%I64d\tf(%d)=%I64d\n",(2*i-1),f1,i*2,f2);
        f1=f2+f1;
        f2=f1+f2;
    }
}
