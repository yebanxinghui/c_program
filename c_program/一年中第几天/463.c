#include<stdio.h>
int main (void)
{
    int sum=0,i,year,month,day;
    while(scanf("%d%d%d",&year,&month,&day)!=EOF){
        if(!(year%4)&&(year%100)||!(year%400)){
            int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
            for(i=0,sum=0;i<month-1;++i){
                sum+=a[i];
            }
            printf("����������һ���еĵ�%d��\n",sum+day);
        }
        else{
            int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
            for(i=0,sum=0;i<month-1;++i){
                sum+=b[i];
            }
            printf("����������һ���еĵ�%d��\n",sum+day);
        }
    }
}
