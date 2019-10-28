#include <stdio.h>
void main()
{
    int x;
    printf("input an integer:\n");
    scanf("%d",&x);
    do
        putchar(x%10+'0');
    while((x/=10)!=0);
    printf("\n");
    system("pause");
}
