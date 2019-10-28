#include<stdio.h>
int strcmp(char s[],char t[])
{
    int j=0;while(s[j]==t[j]&&s[j]!='\0') j++;
    return s[j]-t[j];
}

int main(void)
{
    char s1[]="car",s2[]="bus",s3[]="truck",s4[]="car";
    printf("%s is %s %s.\n",s1,strcmp(s1,s2)>0?"bigger \
than":strcmp(s1,s2)<0?"smaller than":"equal to",s2);
    printf("%s is %s %s.\n",s1,strcmp(s1,s3)>0?"bigger \
           than":strcmp(s1,s3)<0?"smaller than":"equal to",s3);
    printf("%s is %s %s.\n",s1,strcmp(s1,s4)>0?"bigger \
           than":strcmp(s1,s4)<0?"smaller than":"equal to",s4);
    return 0;
}
