#include "ex5_6_1.h"

extern int GetNum(void)
{
    int x;
    printf("A magic number between 1 and %d has been chosen.\n",MAX_NUMBER);
    x=rand();
    x=x%MAX_NUMBER+1;
    return(x);
}

extern void GuessNum(void)
{
    int guess,counter=0;
    extern int magic;
    for(;;){
        printf("guess it:");
        scanf("%d",&guess);
        counter++;
        if(guess==magic){
            printf("You guessed the number by %d time!\n\n",counter);
            return;
        }
        else if(guess<magic)
            printf("Too low.Try again.\n\n");
        else
            printf("Too high.Try again.\n\n");
    }
}
