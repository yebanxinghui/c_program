#include <stdio.h>
int main()
{
    int a;
    printf("Input a number:");
    scanf("%d",&a);
    if(!(a%2))
    {
        printf("%d is an even\n",a);
    }else {
        printf("%d is an uneven\n",a);
    }
    system("pause");
    return 0;
}
