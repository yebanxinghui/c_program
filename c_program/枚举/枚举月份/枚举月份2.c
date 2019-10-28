#include <stdio.h>
enum month{jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
void main()
{
    int year;
    enum month a;
    scanf("%d",&year);
    if(!(year%4)&&(year%100)||!(year%400))
    {
        char *monthName[]={"January,31","February,29","March,31","April,30","May,31","June,30","July,31","August,31","September,30","October,31","November,30","December,31"};
    for (a=jan; a<=dec; a++)
        printf("%s\n",monthName[a]);
    }else
    {
        char *monthName[]={"January,31","February,28","March,31","April,30","May,31","June,30","July,31","August,31","September,30","October,31","November,30","December,31"};
    for (a=jan; a<=dec; a++)
        printf("%s\n",monthName[a]);
    }
}
