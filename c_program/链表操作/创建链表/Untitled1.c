#include <stdio.h>
#include <stdlib.h>
struct s_list
{
    int data;
    struct s_list *next;
};
#if 1
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
int main(void)
{
    struct s_list *head=NULL,*p;
    int s[]= {1,2,3,4,5,6,7,8,0};
    create_list_v1(&head,s);
    p=head;
    while(p)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
    printf("\n");
    return 0;
}
#else
struct s_list * create_list_v2(int *p)
{
    struct s_list *loc_head=NULL;
    if(p[0]==0) return NULL;
    else
    {
        loc_head=(struct s_list *)malloc(sizeof(struct s_list));
        loc_head->data=*p;
        loc_head->next=create_list_v2(p+1);
        return loc_head;
    }
}
int main(void)
{
    struct s_list *head=NULL,*p;
    int s[]= {1,2,3,4,5,6,7,8,0};
    head=create_list_v2(s);
    p=head;
    while(p)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
    printf("\n");
    return 0;
}
#endif
