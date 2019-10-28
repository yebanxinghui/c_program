#include <stdio.h>
#include <math.h>
#define s (1.0/2*(a+b+c))
#define area sqrt(s*(s-a)*(s-b)*(s-c))
void main()
{
    double a,b,c;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    printf("%d %lf\n",(int)s,area);
}
