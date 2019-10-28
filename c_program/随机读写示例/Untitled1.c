#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct score_tab{
    int num;
    char name[20];
    float score[4];
}score_tab;
void empty_tab(int n);
void fill_one_course(int num,float scr,int index);
void fill_one_person(score_tab a);
void read_person(int num);
void print_person(score_tab a);
void print_table(void);
#define N 6
int main(void)
{
    int n;
    score_tab a;
    n=N;
    empty_tab(n);
    a.num=2;
    strcpy(a.name,"Zhang Jiangou");
    a.score[0]=78;
    a.score[1]=88;
    a.score[2]=75;
    a.score[3]=81;
    fill_one_person(a);
    print_person(a);
    a.num=0;
    strcpy(a.name,"Wang Jiangwei");
    fill_one_person(a);
    a.num=4;a.score[0]=67;
    fill_one_course(a.num,a.score[0],0);
    a.num=2;
    a.score[0]=87;
    fill_one_course(a.num,a.score[0],0);
    print_table();
    return 0;
}
void empty_tab(int n)
{
    FILE *out;
    int i;
    score_tab a={0,"NNNNNNNNNNNN",{-1,-1,-1,-1}};
    if((out=fopen("d:\\score.dat","wb"))==NULL) exit(-1);
    for(i=0;i<n;i++){
        a.num=i;
        fwrite(&a,sizeof(score_tab),1,out);
    }
    fclose(out);
}
void fill_one_course(int num,float scr,int index)
{
    FILE *fp;
    fpos_t pos,*ptr=&pos;
    score_tab a;
    if((fp=fopen("d:\\score.dat","rb+"))==NULL) exit(-1);
    fseek(fp,num*sizeof(score_tab),SEEK_SET);
    fgetpos(fp,ptr);
    fread(&a,sizeof(score_tab),1,fp);
    a.score[index]=scr;
    fsetpos(fp,ptr);
    fwrite(&a,sizeof(score_tab),1,fp);
    fclose(fp);
}
void fill_one_person(score_tab a)
{
    FILE *fp;
    int num;
    if((fp=fopen("d:\\score.dat","rb+"))==NULL) exit(-1);
    num=a.num;
    fseek(fp,num*sizeof(score_tab),SEEK_SET);
    fwrite(&a,sizeof(score_tab),1,fp);
    fclose(fp);
}
void read_person(int num)
{
    FILE *fp;
    score_tab a;
    if((fp=fopen("d:\\score.dat","rb+"))==NULL) exit(-1);
    fseek(fp,num*sizeof(score_tab),SEEK_SET);
    fwrite(&a,sizeof(score_tab),1,fp);
    print_person(a);
    fclose(fp);
}
void print_person(score_tab a)
{
    printf(" num\t    name\t\t Math\t Phys\t Engl\t    C\n");
    printf(" %04d\t %-16s\t%6.2f\t%6.2f\t%6.2f\t %6.2f\n",a.num,
           a.name,a.score[0],a.score[1],a.score[2],a.score[3]);
}
void print_table(void)
{
    FILE *fp;
    score_tab a;
    if((fp=fopen("d:\\score.dat","rb+"))==NULL) exit(-1);
    printf(" num\t    name\t\t Math\t Phys\t Engl\t    C\n");
    while(!feof(fp)){
        fread(&a,sizeof(score_tab),1,fp);
        if(!feof(fp))
            printf(" %04d\t %-16s\t%6.2f\t%6.2f\t%6.2f\t%6.2f\n",a.num,
                   a.name,a.score[0],a.score[1],a.score[2],a.score[3]);
    }
    fclose(fp);
}
