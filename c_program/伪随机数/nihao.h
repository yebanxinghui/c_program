#include<time.h>
#define INITIAL_SEED 17
#define MULTIPLIER 25173
#define INCREMENT 13849
#define MODULUS 65535
static unsigned long seed = INITIAL_SEED;

void srandom(void)
{
    seed=time(NULL);
}

unsigned random(void)
{
    seed = (MULTIPLIER*seed+INCREMENT)%(MODULUS+1);
    return seed;
}

double probability(void)
{
    seed = (MULTIPLIER*seed+INCREMENT)%(MODULUS+1);
    return (seed/(double)(MODULUS));
}
