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
        printf("����������ڣ���ʽ��������\n");
        scanf("%s%d%d",d.month,&d.day,&d.year);
        getchar();
        s.birthday=d;
        printf("����ѧ�ţ���������ͥסַ����ϵ�绰����������\n");
        scanf("%s%s%s%s%s",s.num,s.name,s.address,s.phone_number,s.email);
        getchar();
        printf("�����Ա�\n");
        scanf("%c",&s.sex);
        getchar();
        printf("�����ͥ����\n");
        scanf("%lf",&s.income);
        getchar();
        fwrite(&s,sizeof(struct stu_info),1,out);
        printf("��Ҫ����������-1����\n");
        scanf("%d",&x);
        getchar();
    }
    fclose(out);
    if((in=fopen("d:\\stu_info_table.dat","rb"))==NULL)
        exit(-1);
    while(!feof(in)){
        fread(&s,sizeof(struct stu_info),1,in);
        if(!feof(in)){
            printf("ѧ��=%s\t����=%s\t�Ա�=%c\t",s.num,s.name,s.sex);
            printf("��������=%4d-%s-%d\n",s.birthday.year,s.birthday.month,s.birthday.day);
            printf("��ͥסַ=%s\n��ͥ����=%lf\n",s.address,s.income);
            printf("��ϵ�绰=%s\n��������=%s\n",s.phone_number,s.email);
        }
    }
    fclose(in);
}
