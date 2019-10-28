#include <stdio.h>
#include <stdlib.h>
struct s_list{
    int data;
    struct s_list *next;
};
void main()
{
    struct s_list *head=NULL,*p;
    head=(struct s_list *)malloc(sizeof(struct s_list));
    head->data=1;
    head->next=(struct s_list *)malloc(sizeof(struct s_list));
    head->next->data=2;
    head->next->next=(struct s_list *)malloc(sizeof(struct s_list));
    head->next->next->data=3;
    head->next->next->next=NULL;
    printf("%p\t%p\n",&head,head);
    p=head;
    while(p){
        printf("%p\t%d\t%p\n",p,p->data,p->next);
        p=p->next;
    }
}
