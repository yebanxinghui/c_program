#include<stdio.h>
void main()
{
    int x=12345,*p=&x,**pp=&p,***ppp=&pp;
    printf("&x=%p\tx=%d\n",&x,x);
    printf("&p=%p\tp=%p\n",&p,p);
    printf("&pp=%p\tpp=%p\n",&pp,pp);
    printf("&ppp=%p\tppp=%p\n",&ppp,ppp);
}
