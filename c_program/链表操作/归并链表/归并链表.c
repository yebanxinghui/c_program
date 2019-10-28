#include<stdio.h>
struct s_list
{
    int data;
    struct s_list *next;
};
void concatenate_lists(struct s_list *headA,struct s_list *headB)
{
    struct s_list * current=headA,*prior;
    while(current){
        prior=current;
        current=current->next;
    }
    prior->next=headB;
}
int main(void)
{
    int n;
    struct s_list node1= {1,NULL},node2,node3,node4={4,NULL},node5,node6;
    struct s_list *headA=NULL,*headB=NULL,*p;
    node2.data=2;
    node3.data=3;
    node5.data=5;
    node6.data=6;
    node2.next=node3.next=node5.next=node6.next=NULL;
    headA=&node1;
    headB=&node4;
    node1.next=&node2;
    node2.next=&node3;
    node4.next=&node5;
    node5.next=&node6;
    p=headA;
    printf("%p\t%p\n",&headA,headA);
    while(p)
    {
        printf("%p\t%d\t%p\n",p,p->data,p->next);
        p=p->next;
    }
    printf("\n");
    p=headB;
    printf("%p\t%p\n",&headB,headB);
    while(p)
    {
        printf("%p\t%d\t%p\n",p,p->data,p->next);
        p=p->next;
    }
    printf("\n");
    concatenate_lists(headA,headB);
    p=headA;
    while(p)
    {
        printf("%p\t%d\t%p\n",p,p->data,p->next);
        p=p->next;
    }
}


