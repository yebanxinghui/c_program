#include <stdio.h>
void main()
{
    float x;
    printf("input the score x(0<=x<=100):\n");
    scanf("%f",&x);
    if(x>100||x<0)
        printf("input error!\n");
    else if(x>=90)
        printf("excellent!\n");
    else if(x>=80)
        printf("good!\n");
    else if(x>=60)
        printf("middle!\n");
    else printf("bad!\n");
}
