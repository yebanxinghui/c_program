#include <stdio.h>
void main()
{
    char a[100];
    fscanf(stdin,"%s",a);           /***跟scanf一样，以空格和换行为分界，也不能输入空格***/
    fprintf(stdout,"%s\n",a);
}
