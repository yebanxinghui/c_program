#include<stdio.h>
#include<stdlib.h>
struct s_list
{
    int data;
    struct s_list *next;
};
struct s_list *delete_nodes(struct s_list *head,int n)
{
    struct s_list *current=head,*prior=head;
    while(current->data!=n&&current!=NULL){
        prior=current;
        current=current->next;
    }
    if(!current) return NULL;
    if(current==head) head=current->next;
    else prior->next=current->next;
    free(current);
    return current;
};
int main(void)
{
    int n;
    struct s_list node1= {1,NULL},node2,node3,node4,node5;
    struct s_list *head=NULL,*p;
    node2.data=2;
    node3.data=3;
    node4.data=4;
    node5.data=5;
    node2.next=node3.next=node4.next=node5.next=NULL;
    head=&node1;
    node1.next=&node2;
    node2.next=&node3;
    node3.next=&node4;
    node4.next=&node5;
    p=head;
    printf("%p\t%p\n",&head,head);
    while(p)
    {
        printf("%p\t%d\t%p\n",p,p->data,p->next);
        p=p->next;
    }
    scanf("%d",&n);/**输入一个形参n,与n相同则删除*/
    printf("%p\n\n",delete_nodes(head,n));
    p=head;
    while(p)
    {
        printf("%p\t%d\t%p\n",p,p->data,p->next);
        p=p->next;
    }
}

