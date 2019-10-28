#include <stdio.h>
void main()
{
    int x;
    if((scanf("%d",&x)))
    {
        printf("It is an integer,%d",x);
    }else {
        printf("It is not an integer.");
    }
    system("pause");
}
