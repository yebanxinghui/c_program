#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
struct c_score_tab{
    char *num;
    char *name;
    int c;
};
void dynamic_input(char *s1,char **s2)
{
    char *pc;
    int len;
    pc=(char *)malloc(40*sizeof(char));
    assert(pc);
    printf(s1);
    gets(pc);
    len=strlen(pc);
    (*s2)=(char *)malloc(len*sizeof(char)+1);
    assert((*s2));
    strcpy((*s2),pc);
    free(pc);
}
int main(void)
{
    int n,i;
    struct c_score_tab *p;
    printf("input the number of students please!\n");
    scanf("%d",&n);
    getchar();
    p=(struct c_score_tab *)malloc(n*sizeof(struct c_score_tab));
    for(i=0;i<n;i++){
        dynamic_input("input num!\n",&(p+i)->num);
        dynamic_input("input name!\n",&(p+i)->name);
        printf("input score!\n");
        scanf("%d",&(*(p+i)).c);
        getchar();
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("unm=%s\tname=%s\tscore=%d\n",(p+i)->num,(p+i)->name,(p+i)->c);
    }
    printf("\n");
    free(p);
    return 0;
}
