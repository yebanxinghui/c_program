#include <stdio.h>
int main(int argc,char const *argv[])
{
    int number;
    scanf("%d",&number);
    //number = 0x55555555;这里可以自己换，可以输其他进制
    unsigned mask = 1u<<31;
    for ( ; mask ; mask >>=1)
    {
        printf("%d",number & mask ? 1:0);
    }
    printf("\n");
    system("pause");
    return 0;
}
