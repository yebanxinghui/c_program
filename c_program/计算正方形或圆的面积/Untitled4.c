#include <stdio.h>
#define R            /*���Ҫ���������ε�������ڴ���ǰ�� // */
void main()
{
    float r,area;
    printf("input a number:");
    scanf("%f",&r);
    #ifdef R         /*Ҳ���Խ����и�Ϊ #if defined(R) */
        area=3.14159*r*r;
        printf("area of round is : %f\n",area);
    #else
        area=r*r;
        printf("area of square is : %f\n",area);
    #endif // R
}
