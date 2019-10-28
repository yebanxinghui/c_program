#include <stdio.h>
#include <stdlib.h>
struct str_c
{
    char c;
    struct str_c *next;
};
void create_list(struct str_c **headp,char ru_c)
{
    struct str_c *loc_head=NULL,*tail;
    if(ru_c=='#');
    else
    {
        loc_head=(struct str_c *)malloc(sizeof(struct str_c));
        loc_head->c=ru_c;
        tail=loc_head;
        scanf("%c",&ru_c);
        while(ru_c!='#')
        {
            tail->next=(struct str_c *)malloc(sizeof(struct str_c));
            tail=tail->next;
            tail->c=ru_c;
            scanf("%c",&ru_c);
        }
        tail->next=NULL;
    }
    *headp=loc_head;
}
void chu(struct str_c *head)
{
    struct str_c *p=head;
    while(p)
    {
        printf("%c",p->c);
        p=p->next;
    }

}
int length(struct str_c *head)
{
    struct str_c *p=head;
    int num=0;
    while(p)
    {
        num++;
        p=p->next;
    }
    return num;
}
void copy(struct str_c *head,char C[])
{
    struct str_c *p=head;
    int i=0;
    while(p)
    {
        C[i]=(p->c);
        p=p->next;
        i++;
    }
    C[i]='\0';

}
int main()
{
    char c;
    struct str_c *head=NULL;
    scanf("%c",&c);
    create_list(&head,c);
    chu(head);
    printf("\n\n");
    char C[length(head)+1];
    copy(head,C);
    int i=0;
    while(C[i]!='\0')
    {
        printf("%c",C[i]);
        i++;
    }
    printf("\n");
    return 0;
}
