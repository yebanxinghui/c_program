#include<stdio.h>
void main()
{
    int a=3,b=5;
    int c;
    a=a^b;b=b^a;a=a^b;
    printf("%d %d",a,b);
}
