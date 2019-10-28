#include<stdio.h>
void swap(int u,int v)
{
    int t;
    printf("in function swap, before swap ,u=%d and v=%d\n",u,v);
    t=u;u=v;v=t;
    printf("in function swap, after swap ,u=%d and v=%d\n\n",u,v);
}
void main()
{
    int x,y;
    printf("input two integers for x and y please!\n");
    scanf("%d%d",&x,&y);
    printf("in function swap, before swap ,x=%d and y=%d\n\n",x,y);
    swap(x,y);
    printf("in function swap, after swap ,x=%d and y=%d\n",x,y);
}
