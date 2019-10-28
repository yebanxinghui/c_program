#include<stdio.h>
struct s_list
{
    int data;
    struct s_list *next;
}node1={1,NULL};
#if 1
/**Ñ­»·±éÀú*/
int count_nodes(struct s_list *head)
{
    struct s_list *p=head;
    int num=0;
    while(p)
    {
        num++;
        p=p->next;
    }
    return num;
}
void main()
{
    struct s_list node2,node3;
    struct s_list *head=NULL,*p;
    node2.data=2;
    node3.data=3;
    node2.next=node3.next=NULL;
    head=&node1;
    node1.next=&node2;
    node2.next=&node3;
    p=head;
    printf("%p\t%p\n",&head,head);
    while(p)
    {
        printf("%p\t%d\t%p\n",p,p->data,p->next);
        p=p->next;
    }
    printf("%d\n",count_nodes(head));
}
#else
/**µÝ¹é±éÀú*/
int count_nodes_recursive(struct s_list *head)
{
    struct s_list *p=head;
    if(p) return (1+count_nodes_recursive(p->next));
    else return 0;
}
void main()
{
    struct s_list node2,node3;
    struct s_list *head=NULL,*p;
    node2.data=2;
    node3.data=3;
    node2.next=node3.next=NULL;
    head=&node1;
    node1.next=&node2;
    node2.next=&node3;
    p=head;
    printf("%p\t%p\n",&head,head);
    while(p)
    {
        printf("%p\t%d\t%p\n",p,p->data,p->next);
        p=p->next;
    }
    printf("%d\n",count_nodes_recursive(head));
}

#endif
