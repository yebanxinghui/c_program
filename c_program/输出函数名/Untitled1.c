#include <stdio.h>
void myfunc(void)
{
    printf("%s\n",_func_);
}
void main()
{
    myfunc;
}
