#include <stdio.h>
void main()
{
    char s[100];
    gets(s);/**s��'\0'��β*/
    puts(s);/**��'\n'��β*/
}

