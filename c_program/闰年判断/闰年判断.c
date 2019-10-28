#include <stdio.h>
int main()
{
    int year;
    printf("Input year:");
    scanf("%d",&year);
    if((!(year%4) && year%100) || !(year%400))
        printf("%d is a leap year\n",year);
    else
        printf("%d is not a leap year\n",year);
        system("pause");
        return 0;
}
