#include <stdio.h>
void f1(int x)
{
    printf("function f1 is called!\n");
    printf("x=%d\n",x);
}
void f2(int x,int y)
{
    printf("function f2 is called!\n");
    printf("x=%d\ty=%d\n",x,y);
}
void main()
{
    void (*pf1)(int x);
    void (*pf2)(int x,int y);
    pf1=f1;          /*�Ӳ���&������*/
    pf2=f2;          /*�Ӳ���&������*/
    pf1(5);
    pf2(10,20);
    (*pf1)(5);
    (*pf2)(10,20);
}
