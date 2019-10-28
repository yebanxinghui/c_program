#include<stdio.h>
struct date{
    int year;
    int month;
    int day;
}a;
int main(void)
{
    int n,i,j,sum;
    int s[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d %d %d",&a.year,&a.month,&a.day);
        if(!(a.year%4)&&(a.year%100)||!(a.year%400)){
            s[1]=29;
            for(i=0,sum=0;i<a.month-1;++i){
                sum+=s[i];
            }
            printf("%d\n",sum+a.day);
        }
        else{
            s[1]=28;
            for(i=0,sum=0;i<a.month-1;++i){
                sum+=s[i];
            }
            printf("%d\n",sum+a.day);
        }
    }
    return 0;
}
