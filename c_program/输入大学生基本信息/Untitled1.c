#include<stdio.h>
#include<stdlib.h>
struct date{
    char month[10];
    int day;
    int year;
};
struct stu_info{
    char num[12];
    char name[9];
    char sex;
    struct date birthday;
    char address[60];
    double income;
    char phone_number[16];
    char email[40];
};
int main(void)
{
    struct date d;
    struct stu_info s,*p=&s;
    FILE *in,*out;
    int x=1;
    if((out=fopen("d:\\stu_info_table.dat","wb"))==NULL)
        exit(-1);
    while(x!=-1){
        printf("输入出生日期，格式：月日年\n");
        scanf("%s%d%d",d.month,&d.day,&d.year);
        getchar();
        s.birthday=d;
        printf("输入学号，姓名，家庭住址，联系电话，电子邮箱\n");
        scanf("%s%s%s%s%s",s.num,s.name,s.address,s.phone_number,s.email);
        getchar();
        printf("输入性别\n");
        scanf("%c",&s.sex);
        getchar();
        printf("输入家庭收入\n");
        scanf("%lf",&s.income);
        getchar();
        fwrite(&s,sizeof(struct stu_info),1,out);
        printf("还要继续输入吗？-1结束\n");
        scanf("%d",&x);
        getchar();
    }
    fclose(out);
    if((in=fopen("d:\\stu_info_table.dat","rb"))==NULL)
        exit(-1);
    while(!feof(in)){
        fread(&s,sizeof(struct stu_info),1,in);
        if(!feof(in)){
            printf("学号=%s\t姓名=%s\t性别=%c\t",s.num,s.name,s.sex);
            printf("出生日期=%4d-%s-%d\n",s.birthday.year,s.birthday.month,s.birthday.day);
            printf("家庭住址=%s\n家庭收入=%lf\n",s.address,s.income);
            printf("联系电话=%s\n电子邮箱=%s\n",s.phone_number,s.email);
        }
    }
    fclose(in);
}
