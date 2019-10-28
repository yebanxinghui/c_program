#include<stdio.h>
#define F(x) x;x;x;x;x;x;x;x;x;x;
int main(void)
{
    int n=0;
    F(F(F(printf("%d ",n++))));
    return 0;
}
