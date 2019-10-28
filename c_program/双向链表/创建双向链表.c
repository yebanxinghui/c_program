#include<stdio.h>
#include<stdlib.h>
struct d_list
{
    int data;
    struct d_list *prior;
    struct d_list *next;
};
void create_d_list(struct d_list **headp,int *p)
{
    struct d_list *head=NULL,*tail;
    if(p[0]==0) *headp=NULL;
    else {
        head=(struct d_list *)malloc(sizeof(struct d_list));
        head->data=*p++;
        tail=head;
        while(*p){
            tail->next=(struct d_list *)malloc(sizeof(struct d_list));
            tail->next->prior=tail;
            tail=tail->next;
            tail->data=*p++;
        }
        tail->next=head;
        head->prior=tail;
    }
    *headp=head;
}
void disp_d_list(struct d_list *p1)
{
    struct d_list *p=p1;
    while(p!=p1->prior){
        printf("%p\t%d\t%p\n",p,p->data,p->next);
        p=p->next;
    }
    printf("%p\t%d\t%p\n",p,p->data,p->next);
}
int main(void)
{
    struct d_list *head=NULL,*p;
    int s[]={11,21,3,12,51,16,7,2,0};
    create_d_list(&head,s);
    p=head;
    disp_d_list(p);
    return 0;
}
