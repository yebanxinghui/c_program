#include <stdio.h>
char *delete_c(char s[],char c)
{
    int j=0,k=0;
    while(s[j]!='\0'){
        if(s[j]!=c)
            s[k++]=s[j];
        j++;
    }
    s[k]='\0';
    return s;
}

int main(void)
{
    char c='1',s[]="10110010";
    printf("%s\n",delete_c(s,c));
    return 0;
}
