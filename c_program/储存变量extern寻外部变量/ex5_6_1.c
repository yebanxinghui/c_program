#include "ex5_6_1.h"

int main(void)
{
    char command;
    extern int magic;
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
