#include"nihao.h"
#include<stdio.h>
extern void srandom(void);
extern unsigned random(void);
extern double probability(void);
int main(void)
{
    int i;
    srandom( );
    for(i=0;i<6;i++)
    {
        printf("%u\t",random());
        printf("%f\n",probability());
    }
    return 0;
}

