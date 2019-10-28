#include <stdio.h>
int strlen(char s[])
{
    int i=0;
    while(s[i]!='\0') ++i;
    return i;
}
int main()
{
    printf("%d\n",strlen("543"));
    system("pause");
    return 0;
}
