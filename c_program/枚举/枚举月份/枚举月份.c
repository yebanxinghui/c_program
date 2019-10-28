#include<stdio.h>
enum year {jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
void main()
{
    int YEAR;
    enum year month;
    char *month_name[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int month_days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%4d",&YEAR);
    if((!(YEAR%4) && YEAR%100) || !(YEAR%400))
    {
        month_days[1]=29;
    }
    for (month=jan; month<=dec; month++)
        printf("%s,%2d\n",month_name[month],month_days[month]);
}

