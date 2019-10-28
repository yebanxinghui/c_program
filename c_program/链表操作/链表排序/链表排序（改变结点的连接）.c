#include<stdio.h>
#include<stdlib.h>
struct s_list
{
    int data;
    struct s_list *next;
};
void create_list_v1(struct s_list **headp,int *p)
{
    struct s_list *loc_head=NULL,*tail;
    if(p[0]==0);
    else
    {
        loc_head=(struct s_list *)malloc(sizeof(struct s_list));
        loc_head->data=*p++;
        tail=loc_head;
        while(*p)
        {
            tail->next=(struct s_list *)malloc(sizeof(struct s_list));
            tail=tail->next;
            tail->data=*p++;
        }
        tail->next=NULL;
    }
    *headp=loc_head;
}
#if 1
void sort_lists_by_pointer_v1(struct s_list **head)
{
    struct s_list *prior1,*prior2,*p1,*p2,*t;
    int i=0;
    p1=*head;
    for(p2=p1->next,prior2=p1;p2!=NULL;prior2=p2,p2=p2->next){
        if(p1->data>p2->data){
            prior2->next=p1;t=p1->next;
            p1->next=p2->next;(*head)=p2;
            p2->next=t;p1=p2;
        }
    }
    for(prior1=*head,p1=prior1->next;p1->next!=NULL;prior1=p1,p1=p1->next){
        for(p2=p1->next,prior2=p1;p2!=NULL;prior2=p2,p2=p2->next){
            if(p1->data>p2->data){
                t=p2->next;prior1->next=p2;
                prior2->next=p1;p2->next=p1->next;
                p1->next=t;p1=p2;
            }
        }
    }
}
int main(void)
{
    struct s_list *head=NULL,*p;
    int s[]={11,21,3,12,51,16,7,2,0};
    create_list_v1(&head,s);
    sort_lists_by_pointer_v1(&head);
    p=head;
    while(p){
        printf("%d\t",p->data);
        p=p->next;
    }
    printf("\n");
    return 0;
}
#else
void sort_lists_by_pointer_v2(struct s_list **head)
{
    struct s_list *prior1,*prior2,*p1,*p2,*t;
    int i=0;
    p1=(struct s_list *)malloc(sizeof(struct s_list));
    p1->next=*head;
    (*head)=prior1=p1;
    for(p1=prior1->next;p1->next!=NULL;prior1=p1,p1=p1->next){
        for(p2=p1->next,prior2=p1;p2!=NULL;prior2=p2,p2=p2->next){
            if(p1->data>p2->data){
                t=p2->next;prior1->next=p2;
                prior2->next=p1;p2->next=p1->next;
                p1->next=t;p1=p2;
            }
        }
    }
    p1=(*head);
    (*head)=(*head)->next;
    free(p1);
}
int main(void)
{
    struct s_list *head=NULL,*p;
    int s[]={11,21,3,12,51,16,7,2,0};
    create_list_v1(&head,s);
    sort_lists_by_pointer_v2(&head);
    p=head;
    while(p){
        printf("%d\t",p->data);
        p=p->next;
    }
    printf("\n");
    return 0;
}
#endif
