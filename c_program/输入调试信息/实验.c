#include <stdio.h>
//#define DEBUG
#ifdef DEBUG
#define msg(fmt,...) printf(fmt,__VA_ARGS__)
#else
#define msg(fmt,...)
#endif // DEBUG
int main()
{
    printf("hello!\n");
    msg("%s %d %5d\n","debug1",10,20);
    msg("%s %s %10.2f %d\n","debug2","test",10.5,100);
    return 0;
}
