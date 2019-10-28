#include<stdio.h>
void main()
{
    char c;
    while((c=getchar())!=EOF){
        if(c&32) putchar(c-'a'+'A');
        else putchar(c-'A'+'a');
        getchar();
        putchar('\n');
    }
}
/**'A'的二进制为0000 0000 0100 0001*/
/**'a'的二进制为0000 0000 0110 0001*/
