/*用牛顿迭代法求方程f(x)=3x^3-4x^2-5x+13=0满足精度e=10^(-6)的一个近似实根*/
#include<stdio.h>
#include <math.h>
#define EPS 1e-6
void main()
{
    double x,d;
    printf("input initial root:\n");
    scanf("%lf",&x);
    do {
        d=-((((3*x-4)*x)-5)*x+13)/((9*x-8)*x-5);
        x+=d;
    }while(fabs(d)>EPS);
    printf("x=%f\n",x);
}
