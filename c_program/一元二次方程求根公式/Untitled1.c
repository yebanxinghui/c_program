/*方程ax^2+bx+c=0*/
#include<stdio.h>
#include<math.h>
void main()
{
    double a,b,c,disc,x1,x2,p,q;
    scanf("%lf%lf%lf",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc>=0){
        p=-b/(2*a);
        q=sqrt(disc)/(2*a);
        x1=p+q;
        x2=p-q;
        printf("x1=%5.2f\nx2=%5.2f\n",x1,x2);
    }
    else{
        printf("Equation without real root!");
    }
}
