#include <stdio.h>
#define R            /*如果要计算正方形的面积，在此行前加 // */
void main()
{
    float r,area;
    printf("input a number:");
    scanf("%f",&r);
    #ifdef R         /*也可以将此行改为 #if defined(R) */
        area=3.14159*r*r;
        printf("area of round is : %f\n",area);
    #else
        area=r*r;
        printf("area of square is : %f\n",area);
    #endif // R
}
