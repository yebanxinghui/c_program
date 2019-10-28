#include <stdio.h>
void show(char str[]);
int main(void)
{
    char name[20];
    printf("Input your name please!\n");
    gets(name);
    printf("Hello %s!\n",name);
    show(name);
    getchar();
    return 0;
}
void show(char str[])
{
    printf("This is the first program for %s to learn C programming!\n",str);
}
