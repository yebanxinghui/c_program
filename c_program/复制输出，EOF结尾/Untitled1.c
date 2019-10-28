#include <stdio.h>
void main()
{
    char c;
    printf("input a text end of ctrl +  z:\n");
    c=getchar();
    while(c!=EOF)
    {
        putchar(c);
        c=getchar();
    }
}
