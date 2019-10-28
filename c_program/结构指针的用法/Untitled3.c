#include<stdio.h>
struct Student{
    int num;
    char name[19];
    double score;
}s[3],*p=s;
int main(void)
{
    int i,j,n;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        for(i=0;i<3;i++){
            scanf("%d%s%lf",&(s[i].num),s[i].name,&(s[i].score));
        }
        for(i=0;i<3;i++)
            printf("%-d\t%-20s%-lf\n",s[i].num,s[i].name,s[i].score);
        for(i=0,p=s;i<3;i++,p++)
           printf("%-d\t%-20s%-lf\n",p->num,p->name,p->score);
    }
    return 0;
}
