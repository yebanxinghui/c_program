#include<stdio.h>
#include <complex.h>
void main()
{
    double _Complex a,b,c;
    printf("The size of a is %d\n",sizeof(a));
    a=2+3*I;
    b=4+5*I;
    c=a*b;
    printf("c=%f+%f*I\n",creal(c),cimag(c));
}
