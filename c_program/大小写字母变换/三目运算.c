#include <stdio.h>
void main()
{
    char c;
    putchar(((c=getchar())>='a'&&c<='z')?c-'a'+'A':((c>='A'&&c<='Z')?c-'A'+'a':c));
    printf("\n");
    system("pause");
}

