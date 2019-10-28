#include<stdio.h>
void main()
{
    int x,max;
    printf("input a group integer end of 0:\n");
    scanf("%d",&x);
    max=x;
    for(; x!=0;)
    {
        scanf("%d",&x);
        if(max<x)
        {
            max=x;
        }
    }
    printf("max=%d\n",max);
    system("pause");
}
