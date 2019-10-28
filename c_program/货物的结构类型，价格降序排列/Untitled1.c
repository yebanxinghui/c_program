#include<stdio.h>
#define N 3
struct GOODS {
    long code;
    char name[20];
    float price;
};
void input(struct GOODS *p,int n);
void sort(struct GOODS *p,int n);
void display(struct GOODS *p,int n);
int main(void)
{
   struct GOODS meat[N];
   input(meat,N);
   display(&meat[0],N);
   printf("\n");
   sort(meat,N);
   display(meat,N);
   return 0;
}
void input(struct GOODS *p,int n)
{
    int i;
    float tmp;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&p[i].code);
        scanf("%s",(p+i)->name);
        scanf("%f",&tmp);
        (*(p+i)).price=tmp;
    }
}
void sort(struct GOODS *p,int n)
{
    int i,j;
    struct GOODS t;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if((p+i)->price<(p+j)->price)
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
}
void display(struct GOODS *p,int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("%ld\t",(*(p+i)).code);
        printf("%s\t",(p+i)->name);
        printf("%f\n",p[i].price);
    }
}
