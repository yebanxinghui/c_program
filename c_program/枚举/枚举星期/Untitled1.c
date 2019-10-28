#include<stdio.h>
enum week {SUN,MON,TUE,WED,THU,FRI,SAT};
void main()
{
    enum week day;
    char *weekName[ ]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    for (day=SUN; day<=SAT; day++)
        printf("\n %3d \t %s",day,weekName [day]);
}
