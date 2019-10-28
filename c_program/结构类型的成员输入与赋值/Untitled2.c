#include <stdio.h>
#include <string.h>
struct stu_study{
    char num[10];
    char name[10];
    char sex;
    int English,Math,Physics;
    int C;
};
void main()
{
    struct stu_study Li;
    scanf("%s",Li.num);
    strcpy(Li.name,"Li Si");
    Li.sex='m';
    Li.English=Li.Math=80;
    scanf("%d",&Li.Physics);
    Li.C=86;
    printf("%s\t",Li.num);
    printf("%s\t",Li.name);
    putchar(Li.sex);
    putchar('\t');
    printf("%d\t%d\t%d\t%d\n",Li.English,Li.Math,Li.Physics,Li.C);
}
