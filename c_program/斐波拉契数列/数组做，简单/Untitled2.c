#include<stdio.h>
void main()
{
    int i,a[20]={1,1};
    for(i=2;i<20;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<20;i++)
    {
        if(i%6==0&&i!=0)
        {
            printf("\n");
        }
        printf("%12d",a[i]);
    }
    printf("\n");
}
