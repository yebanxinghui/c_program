#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NUMBER 1000
int magic;

int GetNum(void)
{
    int x;
    printf("A magic number between 1 and %d has been chosen.\n",MAX_NUMBER);
    x=rand();
    x=x%MAX_NUMBER+1;
    return(x);
}

void GuessNum(void)
{
    int guess,counter=0;
    extern int magic;/**此句可省略*/
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

int GetNum(void);
void GuessNum(void);
int main(void)
{
    char command;
    extern int magic;  /**此句可省略*/
    printf("This is a guessing game\n\n");
    srand(time(NULL));
    do {
        magic = GetNum();
        GuessNum();
        printf("play again?(Y/N)");
        scanf("%1s",&command);
    }while(command=='y'||command=='Y');
    return 0;
}

