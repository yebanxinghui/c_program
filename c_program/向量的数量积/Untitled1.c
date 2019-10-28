/********************************
(x[0],x[1],x[2])*(y[0],y[1],y[2])
********************************/
#include <stdio.h>
#define SIZE 3
double scalar(double *a,double *b,int n);
void main()
{
    double x[SIZE],y[SIZE],*px,*py;
    for(px=x;px<x+SIZE;px++)
        scanf("%lf",px);
    getchar();                     /*此行可以注释掉*/
    for(py=y;py<&y[SIZE];py++)
        scanf("%lf",py);
    px=x,py=y;
    printf("the scalar of vector x and vector y is %lf\n",scalar(px,py,SIZE));

}
double scalar(double *a,double *b,int n)
{
    double s,*p;
    printf("the vector a is\n");
    for(p=a;p<a+n;)
        printf("%lf\t",*p++);
    printf("\nthe vector b is\n");
    for(p=b;p<b+n;)
        printf("%lf\t",*p++);
    printf("\n");
    for(s=0,p=a;p<a+n;)
        s+=((*p++)*(*b++));
    return s;
}
